extern void *func_002B1FC0(u32);
extern void *func_003D2910(u32);
extern void *func_00152D28(u32);
extern void func_002B2028(void *);
extern void func_003F93CC(void *, void *, u32);
extern void func_00152F00(void *, void *, u32 *, s32, s32, u8);
extern void func_00219898(void *, void *, s32, s32 *);
extern u32 D_0040E618[];
extern u64 D_00478D00[];

typedef struct Vec {
    void *begin;
    void *cur;
    void *end;
} Vec;

typedef struct S_func_002065C8_arg0 {
    u32 unk_00;
    Vec vec1;
    u32 unk_10;
    Vec vec2;
} S_func_002065C8_arg0;

S_func_002065C8_arg0 *func_002065C8(S_func_002065C8_arg0 *arg0) {
    u32 sp40 = 0x64;
    s32 sp48 = 0;
    void *temp_16 = (void *)&D_00478D00[0xE0/8];
    u8 unk1 = ((u8 *)arg0)[1];
    u8 temp_byte;
    u64 var_4;
    u64 temp_21;
    Vec *v;
    char *begin;
    u32 cap;
    char *cur;
    u32 index;
    u32 bytes;
    void *p;
    char *old;
    u32 oldcap;

    ((u8 *)arg0)[2] = 0;
    temp_byte = ((u8 *)arg0)[1];
    ((u8 *)arg0)[3] = 0;
    arg0->vec1.begin = NULL;
    arg0->vec1.cur = NULL;
    arg0->vec1.end = NULL;
    arg0->unk_10 = 0;

    func_00152F00(D_00478D00, temp_16, &sp40, 0, 0x64, unk1);

    void *ret = func_00152F00; // dummy, need actual return
    // Actually need to capture return value
    // Let me restructure
    return arg0;
}
