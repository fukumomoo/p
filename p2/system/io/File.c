
#include <stdlib.h>
#include <stdio.h>
#include <wchar.h>
#include <system/io/File.h>
#include <system/type/Boolean.h>
#include <system/type/String.h>
#include <system/type/SmallInt.h>
#include <system/type/Character.h>

/* ========================================================================= */

Type_Class IO_File_Class;

IO_File StandardIn;
IO_File StandardOut;
IO_File StandardError;
IO_File NullStream;

/* ========================================================================= */


IO_File new_IO_File()
{
    NEW_OBJECT(IO_File);
    return result;
}

IO_File new_IO_File_fromPath(const wchar_t * path)
{
    IO_File result = new_IO_File();
    result->file = fopen(unicode_to_ascii(path), "r");
    assert(result->file != NULL, 
        printf("Could not create File for path \"%ls\"", path));
    return result;
}

IO_File new_IO_File_fromFile(FILE* file)
{
    IO_File result = new_IO_File();
    assert1(file != NULL, "Cannot create a new File from NULL.");
    result->file = file;
    return result;
}

void pre_init_IO_File()
{
    IO_File_Class = new_Named_Class((Object)Type_Object_Class, L"IO_File");
}

/* ========================================================================= */

char* unicode_to_ascii(const wchar_t* str) {
    int len        = wcslen(str);
    char* charname = (char*)PALLOC(sizeof(char[len]));
    assert1(wcstombs(charname, str, len) == len, "String not ASCII compatible.");
    return charname;
}

int IO_File_size(IO_File file) {
    assert1(file->file != NULL, "Trying to get size from invalid file.");
    long pos = ftell(file->file);
    rewind(file->file);
    char cur;
    int size = 0;
    while ((cur = fgetc(file->file)) != EOF) {
        if (!(cur & 1<<7) || (cur & 1<<6)) {
            size++;
        }
    }
    fseek(file->file, pos, SEEK_SET);
    return size;
}

NATIVE0(IO_File_size)
    poke_EXP(1, new_Type_SmallInt(IO_File_size((IO_File)self)));
}

void IO_File_readCharacter(IO_File file, wchar_t* result) {
    assert1(file->file != NULL, "Trying to read UTF8 char from invalid file.")
    int first;
    assert1((first = fgetc(file->file)) != EOF, "Reading at end of file.")
    *result = first;
    if (first & 1<<7) {
        assert1(first & 1<<6, "Non UTF-8 character found.");
        int i;
        // we can only grok UTF8 up to wchar_t/byte bytes
        for (i = 0; i < sizeof(wchar_t) - 1; i++) {
            if (first & 1<<(6-i)) {
                *result <<= 6;
                int next = fgetc(file->file);
                assert1((next & 1<<7) && !(next & 1<<6),
                        "Invalid follow-up byte in UTF-8 character.");
                *result += (next ^ 1<<7);
                continue;
            }
            goto finally;
        }
        /* In case we read sizeof(wchar_t) bytes, we check if the next one
         * should be part of the current unicode character. If so, we fail.
         */
        assert1(!(first & 1<<(6-1)),
                   "Non UTF-8 character or too big for system's Unicode.") 
        /* If not, just continue. */
    finally:
        *result &= (1<<((i+1)*6-i)) - 1;
    }
}


int IO_File_atEnd(IO_File file) {
    assert1(file != NULL, "Invalid Argument");
    int c      = fgetc(file->file);
    int result = c == EOF;
    if (!result) {
        ungetc(c, file->file);
    }
    return result;
}

NATIVE0(IO_File_atEnd)
    poke_EXP(1, get_bool(IO_File_atEnd((IO_File)self)));
}

Type_String IO_File_readAll(IO_File file) {
    assert1(file != NULL, "Invalid Argument");
    int size           = IO_File_size(file);
    Type_String result = new_Type_String_sized(size);
    int idx;
    for (idx = 0; idx < size; idx++) {
        IO_File_readCharacter(file, &result->value[idx]);
    }
    return result;
}

NATIVE0(IO_File_readAll)
    poke_EXP(1, IO_File_readAll((IO_File)self));
}

Type_Character IO_File_read(IO_File file) {
    assert1(file != NULL, "Invalid Argument");
    wchar_t chr;
    IO_File_readCharacter(file, &chr);
    return new_Type_Character(chr);
}
             
NATIVE0(IO_File_read)
   poke_EXP(1, IO_File_read((IO_File)self));
}
                      
void IO_File_write_(IO_File file, Type_Character chr) {
    assert1(file != NULL, "Invalid Argument");
    assert1(chr != NULL, "Invalid Argument");
    putwc(chr->value, file->file);
}

NATIVE1(IO_File_write_)
    ASSERT_ARG_TYPE(1, Type_Character_Class);
    IO_File_write_((IO_File)self, (Type_Character)args->values[0]);
    poke_EXP(1, self);
}

void IO_File_writeAll_(IO_File file, Type_String string) {
    assert1(file != NULL, "Invalid Argument");
    assert1(string != NULL && string->value != NULL, "Invalid Argument");
    int i;
    for (i =0; i<string->size->value; i++) { 
        putwc(string->value[i], file->file);
    }
}
            
NATIVE1(IO_File_writeAll_)
    IO_File_writeAll_((IO_File)self, (Type_String)args->values[0]);
    poke_EXP(1, self);
}
/* ========================================================================= */

void create_standard_files()
{
    StandardIn  = new_IO_File_fromFile(stdin);
    StandardOut = new_IO_File_fromFile(stdout);
    StandardError = new_IO_File_fromFile(stderr);
    NullStream  = new_IO_File();
}

void post_init_IO_File()
{
    store_native_method(IO_File_Class, SMB_size,      NM_IO_File_size);
    store_native_method(IO_File_Class, SMB_atEnd,     NM_IO_File_atEnd);
    store_native_method(IO_File_Class, SMB_write_,    NM_IO_File_write_);
    store_native_method(IO_File_Class, SMB_writeAll_, NM_IO_File_writeAll_);
    store_native_method(IO_File_Class, SMB_read,      NM_IO_File_read);
    store_native_method(IO_File_Class, SMB_readAll,   NM_IO_File_readAll);
    create_standard_files();
}