#include <stdlib.h>
#include <stdio.h>
#include <system/type/Character.h>

/* ========================================================================= */

Character new_Character_raw(wchar_t value)
{
    NEW_OBJECT(Character);
    result->value = value;
    return result;
}


Character new_Character(wchar_t value)
{
    if (value < CHARACTER_TABLE_SIZE) {
        return (Character)character_table->values[value];
    }
    return new_Character_raw(value);
}

Character new_Character_fromInt(long value)
{
    wchar_t casted = (wchar_t)value;
    assert(((long)casted == value), 
        printf("Unicode Character \"%lc\" %li out of Range [%"F_I"i Byte]", 
                casted, value, sizeof(wchar_t)));
    
    return new_Character(casted);
}
    
/* ========================================================================= */

/*NATIVE1(Character_equals_)
    NYI;
}*/

NATIVE0(Character_hash)
    RETURN_FROM_NATIVE(new_SmallInt(((Character)self)->value));
}

NATIVE0(Character_asString)
    const wchar_t str[2] = { ((Character)self)->value, '\0' };
    RETURN_FROM_NATIVE(new_String(str));
}

NATIVE0(Character_asSymbol)
    const wchar_t str[2] = { ((Character)self)->value, '\0' };
    RETURN_FROM_NATIVE(new_Symbol(str));
}

NATIVE0(Character_asSmallInt)
    RETURN_FROM_NATIVE(new_SmallInt(((Character)self)->value));
}

/* ========================================================================= */


void post_init_Character()
{ 
    Dictionary natives = add_plugin(L"Type.Character");
    store_native(natives, SMB_hash,       NM_Character_hash);
    store_native(natives, SMB_asString,   NM_Character_asString);
    store_native(natives, SMB_asSymbol,   NM_Character_asSymbol);
    store_native(natives, SMB_asSmallInt, NM_Character_asSmallInt);
}
