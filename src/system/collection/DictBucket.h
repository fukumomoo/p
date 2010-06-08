#ifndef COLLECTION_DICTBUCKET_H
#define COLLECTION_DICTBUCKET_H

#include <pinocchio.h>

/* ========================================================================= */

struct DictBucket_t {
    uns_int size;
    uns_int tally;
    Optr  values[];
};

CREATE_INITIALIZERS(DictBucket);
extern DictBucket new_DictBucket_raw(uns_int size);
extern DictBucket new_DictBucket(uns_int size);

/* ========================================================================= */

extern DictBucket new_bucket();
extern void Bucket_lookup(DictBucket bucket, Optr key);
extern void Bucket_store_(DictBucket * bucketp, Optr key, Optr value);
extern long Bucket_quick_store(DictBucket * bucketp, Optr key,
                              Optr value);
extern void CNT_bucket_rehash();
extern long Bucket_quick_compare_key(Optr inkey, Optr dictkey);

/* ========================================================================= */

#endif // COLLECTION_DICTBUCKET_H
