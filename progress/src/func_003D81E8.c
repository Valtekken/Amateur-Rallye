typedef struct S50 {
    u8 pad[0x24];
    s32 (*fn)(void *);
} S50;
typedef struct S3D {
    u32 flags;
    u8 *cur;
    u8 *end;
    u8 *base;
    u32 pad[5];
    void *backup;
    void *save;
    void *limit;
    void *unk30;
    u32 pad2[7];
    S50 *unk50;
} S3D;
extern void func_003D7DE0(S3D *);
extern s32 func_003D7E50(void);
extern void func_003D7F00(S3D *);
extern s32 func_003D7F78(S3D *);

s32 func_003D81E8(S3D *a) {
    if ((a->flags & 0x800) && func_003D7E50() == -1) return -1;
    if ((u32)a->cur < (u32)a->end) return *a->cur++;
    if (a->flags & 0x100) {
        func_003D7DE0(a);
        if ((u32)a->cur < (u32)a->end) return *a->cur++;
    }
    if (a->unk30 != 0) {
        if (func_003D7F78(a) != 0) return -1;
    } else {
        if (a->backup != 0) func_003D7F00(a);
    }
    return a->unk50->fn(a);
}
