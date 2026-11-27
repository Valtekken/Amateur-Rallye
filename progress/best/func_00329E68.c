typedef struct { void *obj; s32 gen; } CacheSlot;

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

typedef struct { s32 lo; s32 hi; } __attribute__((packed)) P8;

typedef struct {
    void *sp[2];
    s32 pad0[2];
    void *sp10;
    s32 pad1[3];
    P8 sp20;
} L;

extern void func_002C6528(SlotVec *, CacheSlot *, s32, const CacheSlot *);
extern CacheObj **func_002DDA20(void);
extern void *func_00303038(CacheObj *, const s32 *);

s32 func_00329E68(void *arg0, const s32 *arg1, const s32 *arg2) {
    L l;
    CacheObj *cache;
    CacheSlot *entry;
    s32 idx;
    s32 cur_size;
    u32 target_size;
    u32 now_size;
    u32 diff;
    u8 *p;
    u8 *end;
    void *obj;
    void **rootp;
    void *t;
    void *sib;

    (void)arg0;
    cache = *func_002DDA20();
    idx = *arg1;
    obj = NULL;
    if (idx != 0) {
        cur_size = cache->vec.finish - cache->vec.start;
        if (idx >= cur_size) {
            l.sp[0] = NULL;
            l.sp[1] = NULL;
            target_size = (idx + 0x20) & -0x20;
            now_size = cache->vec.finish - cache->vec.start;
            if (target_size < now_size) {
                p = (u8 *)(cache->vec.start + target_size);
                end = (u8 *)cache->vec.finish;
                if ((u32)p < (u32)end) {
                    p += 8;
                    while ((u32)p < (u32)end) {
                        p += 8;
                    }
                }
                diff = (u32)end - (u32)p;
                cache->vec.finish = (CacheSlot *)((u32)end - diff);
            } else {
                func_002C6528(&cache->vec, cache->vec.finish, target_size - now_size, (const CacheSlot *)l.sp);
            }
        }
        entry = &cache->vec.start[idx];
        if (entry->gen != cache->gen) {
            entry->obj = func_00303038(cache, arg1);
            entry->gen = cache->gen;
        }
        obj = entry->obj;
    }
    if (obj == NULL) {
        return -1;
    }
    rootp = *(void ***)((u8 *)obj + 0x40);
    if (rootp != NULL) {
        t = *(void **)((u8 *)*rootp + 0x8);
        l.sp10 = t;
        *(void **)&l.sp[0] = t;
        if (t == *rootp) {
            return -1;
        }
        l.sp10 = *rootp;
        do {
            *(P8 *)&l.sp20 = *(P8 *)((u8 *)*(void **)&l.sp[0] + 0x14);
            if (l.sp20.lo == *arg2) {
                return l.sp20.hi;
            }
            t = *(void **)((u8 *)*(void **)&l.sp[0] + 0xC);
            if (t != NULL) {
                *(void **)&l.sp[0] = t;
                t = *(void **)((u8 *)t + 0x8);
                if (t != NULL) {
                    *(void **)&l.sp[0] = t;
                    while (*(void **)((u8 *)*(void **)&l.sp[0] + 0x8) != NULL) {
                        *(void **)&l.sp[0] = *(void **)((u8 *)*(void **)&l.sp[0] + 0x8);
                    }
                }
            } else {
                sib = *(void **)((u8 *)*(void **)&l.sp[0] + 0x4);
                if (*(void **)((u8 *)*(void **)&l.sp[0] + 0xC) == sib) {
                    do {
                        *(void **)&l.sp[0] = sib;
                        sib = *(void **)((u8 *)sib + 0x4);
                    } while (*(void **)((u8 *)*(void **)&l.sp[0] + 0xC) == sib);
                }
                if (*(void **)((u8 *)*(void **)&l.sp[0] + 0xC) != sib) {
                    *(void **)&l.sp[0] = sib;
                }
            }
            l.sp10 = *rootp;
        } while (*(void **)&l.sp[0] != *rootp);
    }
    return -1;
}
