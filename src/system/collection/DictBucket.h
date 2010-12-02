#ifndef COLLECTION_DICTBUCKET_H
#define COLLECTION_DICTBUCKET_H

#include <pinocchio.h>

/* ========================================================================= */

struct DictBucket_t {
    uns_int  size;
    SmallInt tally;
    Optr     values[];
};

CREATE_INITIALIZERS(DictBucket);
extern DictBucket new_DictBucket_raw(uns_int size);
extern DictBucket new_DictBucket(uns_int size);
extern void Bucket_grow(DictBucket * bucketp);

/* ========================================================================= */

extern DictBucket new_bucket();
extern long Bucket_quick_store(DictBucket * bucketp, Optr key,
                              Optr value);
extern long Bucket_quick_compare_key(Optr inkey, Optr dictkey);

/* ========================================================================= */

#endif // COLLECTION_DICTBUCKET_H
