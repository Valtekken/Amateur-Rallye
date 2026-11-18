extern char D_0044A6D8[];
extern char D_0044CFE8[];
extern void func_001D4040(void*, const char*);

void *func_00134C18(s32 *p) {
    s32 k;
    func_001D4040(&k, D_0044A6D8);
    p[0] = -1;
    p[1] = k;
    p[2] = (s32)D_0044CFE8;
    p[9] = 0;
    p[11] = 0;
    p[10] = 0;
    p[3] = 0;
    return p;
}

extern char D_0044A890[];
extern char D_0044CF68[];

void *func_00136A48(s32 *p) {
    s32 k;
    func_001D4040(&k, D_0044A890);
    p[0] = -1;
    p[1] = k;
    p[2] = (s32)D_0044CF68;
    p[0x68/4] = 1;
    p[0x6C/4] = 10;
    p[0x70/4] = 3;
    p[3] = 0;
    p[4] = 0;
    p[5] = 0;
    p[6] = 0;
    p[7] = 0;
    p[8] = 0;
    p[9] = 0;
    p[10] = 0;
    p[11] = 0;
    p[12] = 0;
    p[0x54/4] = 3;
    p[0x58/4] = 3;
    p[0x5C/4] = 3;
    p[0x60/4] = 3;
    p[0x64/4] = 3;
    return p;
}

extern s32 D_0040E4F4;
extern void func_0012E7E8(s32, s32*);
extern void func_0012E858(void);
extern void func_0012FBE8(void*);

void func_0012FB78(s32 *p, s32 arg1) {
    if (arg1 == 0) {
        if (p[5] == 0) {  /* 0x14/4 = 5 */
            p[5] = 1;
            D_0040E4F4 = 0x18;
            func_0012E7E8(p[3], &D_0040E4F4);  /* 0xC/4 = 3 */
        }
    } else if (p[5] != 0) {
        p[5] = 0;
        D_0040E4F4 = 0;
        func_0012E858();
    }
    func_0012FBE8(p);
}

extern void func_001D4040(void*, const char*);
extern s32 func_0021F4B0(void);
extern void *func_0021E9C0(s32, void*);
extern void func_003FA310(char*, const char*, ...);
extern char D_004496F8[];

void func_0012E5C0(void *unused, s32 arg1) {
    char buf[0x10];
    char name[0x10];
    s32 i;
    s32 mask;
    s32 flag;

    mask = -2;
    flag = arg1 & 1;
    i = 1;
    do {
        func_003FA310(buf, D_004496F8, i);
        i++;
        {
            s32 ctx = func_0021F4B0();
            void *ent;
            func_001D4040(name, buf);
            ent = func_0021E9C0(ctx, name);
            if (ent != NULL) {
                void *sub = *(void **)((u8 *)ent + 0x4C);
                if (sub != NULL) {
                    s64 v = *(s64 *)((u8 *)sub + 0x78);
                    *(s64 *)((u8 *)sub + 0x78) = (v & mask) | flag;
                }
            }
        }
    } while (i < 4);
}
