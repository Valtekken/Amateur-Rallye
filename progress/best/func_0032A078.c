#include "context.h"

typedef struct {
    void *obj;
    s32 gen;
} CacheSlot;

typedef struct {
    CacheSlot *start;
    CacheSlot *finish;
    CacheSlot *end_of_storage;
} SlotVec;

typedef struct {
    u8 pad0[0x14];
    SlotVec vec;
    s32 gen;
} CacheObj;

typedef struct {
    s32 val;
    s32 pad;
} Pair8;

extern void func_002C6528(SlotVec *, CacheSlot *, s32, const CacheSlot *);
extern CacheObj **func_002DDA20(void *);
extern void *func_00303038(CacheObj *, const s32 *);
extern void func_0032CCE8(s32 *, void *, const s32 *);

s32 func_0032A078(void *arg0, const s32 *arg1, const s32 *arg2) {
    s32 sp[12];
    CacheObj *cache = *func_002DDA20(arg0);
    s32 idx = *arg1;
    void *obj = 0;

    if (idx != 0) {
        SlotVec *vec = &cache->vec;
        s32 cur_size = vec->finish - vec->start;
        CacheSlot *entry;

        if (idx >= cur_size) {
            CacheSlot zero_slot;
            s32 target_size = (idx + 0x20) & -0x20;
            s32 now_size;

            zero_slot.obj = 0;
            zero_slot.gen = 0;
            now_size = vec->finish - vec->start;

            if (target_size < now_size) {
                CacheSlot *first = vec->start + target_size;
                CacheSlot *last = vec->finish;
                s32 diff = last - first;

                while (first < last) {
                    first++;
                }
                vec->finish = last - diff;
            } else {
                func_002C6528(vec, vec->finish, target_size - now_size, &zero_slot);
            }
        }

        entry = &vec->start[idx];
        if (entry->gen != cache->gen) {
            entry->obj = func_00303038(cache, arg1);
            entry->gen = cache->gen;
        }
        obj = entry->obj;
    }

    if (obj != 0) {
        void *sub = *(void **)((u8 *)obj + 0x40);
        if (sub != 0) {
            func_0032CCE8(sp, sub, arg2);
            if (sp[0] != *(s32 *)sub) {
                *(Pair8 *)&sp[8] = *(Pair8 *)((u8 *)sp[0] + 0x14);
                return sp[8];
            }
        }
    }

    return -1;
}
