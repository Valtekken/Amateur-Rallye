typedef struct { u64 tag; u64 mask; void *func; s32 id; } Ent;
typedef struct {
    char ctx[0x30];
    char out[0x50];
    s32 cb[8];
    void *found;
    s32 found_id;
    Ent *entries;
    s32 ret;
} Frame;

extern s32 func_003E7440(void *ctx, s32, s32, s32);
extern s32 func_003E7478(void *ctx, s32 sz);
extern void func_003E0250(void *ctx, void *out);
extern void func_003E0410(void *tbl, void *ctx, void *out);
extern s32 func_003E7620(void *ctx, s32, s32);

s32 func_003DFE40(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    register char frame[0xB0];
    Frame *f = (Frame *)frame;
    register void *ctx = frame;
    register void *out = frame + 0x30;
    register s32 var21 = 1;
    register s32 i = 0;
    register s32 key;
    register void *tbl;
    register void *ent;
    register s32 count;

    tbl = *(void **)((char *)arg0 + 0x40);
    ent = *(void **)((char *)tbl + 0x44);
    f->found = NULL;
    f->found_id = 0;
    f->ret = 0;
    func_003E7440(ctx, arg1, arg3, arg4);
    f->entries = ent;
    count = *(s32 *)((char *)tbl + 0x48);
    key = arg2 << 3;
    if (count > 0) {
    loop1:
        {
            Ent *e = (Ent *)((char *)f->entries + i * 0x18);
            if (e->tag == 0xBDFF000000ull) {
                f->found_id = e->id;
                f->found = e->func;
            }
            if (f->found != NULL) goto done1;
            i++;
            if (i < count) goto loop1;
        }
    }
done1:
    if (func_003E7478(ctx, 0x20) == 0x1BA) {
        func_003E0250(ctx, out);
    }
loop26:
    if (func_003E7478(ctx, 0x18) == 1 &&
        func_003E7478(ctx, 0x20) != 0x1BA &&
        func_003E7478(ctx, 0x20) != 0x1B9) {
        u64 cur = *(u64 *)((char *)out + 0x18);
        if ((u64)key >= cur) {
            if (cur > (u64)key) {
                if (var21 != 0) {
                    func_003E0410(tbl, ctx, (char *)out + 0x18);
                    if ((u64)key >= *(u64 *)((char *)out + 0x18)) {
                        count = *(s32 *)((char *)tbl + 0x48);
                        i = 0;
                        if (count > 0) {
                        loop16:
                            {
                                Ent *e = (Ent *)((char *)f->entries + i * 0x18);
                                if (e->tag == (*(u64 *)((char *)out + 0x18) & e->mask)) {
                                    f->cb[0] = 6;
                                    f->cb[1] = func_003E7620(ctx, *(s32 *)((char *)out + 0x40), count);
                                    f->cb[2] = func_003E7620(ctx, *(s32 *)((char *)out + 0x38), count);
                                    f->cb[3] = *(s32 *)((char *)out + 0x3C);
                                    *(u64 *)&f->cb[4] = *(u64 *)((char *)out + 0x28);
                                    *(u64 *)&f->cb[6] = *(u64 *)((char *)out + 0x30);
                                    var21 = ((s32 (*)(void *, s32 *, s32))e->func)(arg0, f->cb, e->id);
                                    goto after16;
                                }
                                i++;
                                if (i < count) goto loop16;
                            }
                        }
                        if (i == count && f->found != NULL) {
                            f->cb[0] = 6;
                            f->cb[1] = func_003E7620(ctx, *(s32 *)((char *)out + 0x40), count);
                            f->cb[2] = func_003E7620(ctx, *(s32 *)((char *)out + 0x38), count);
                            f->cb[3] = *(s32 *)((char *)out + 0x3C);
                            *(u64 *)&f->cb[4] = *(u64 *)((char *)out + 0x28);
                            *(u64 *)&f->cb[6] = *(u64 *)((char *)out + 0x30);
                            var21 = ((s32 (*)(void *, s32 *, s32))f->found)(arg0, f->cb, f->found_id);
                        }
                    after16:
                        if (var21 != 0) {
                            f->ret = (s32)(((s64)*(u64 *)((char *)out + 0x18) << 29) >> 32);
                        }
                    }
                }
            }
        }
    } else {
        if ((u64)key >= *(u64 *)((char *)out + 0x18)) {
            if (func_003E7478(ctx, 0x20) == 0x1BA) goto loop26;
        }
    }
    if (func_003E7478(ctx, 0x20) == 0x1BA) goto loop26;
    return f->ret;
}
