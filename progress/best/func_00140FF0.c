extern s32 func_00297500(void);
extern s32 func_002971B0(s32);
extern void func_0011E650(s32, s32, s32);
extern void func_001D4040(void*, const char*);
extern void *D_002AD408(s32);
extern void func_001E2460(void*, void*);
extern void func_001E2C78(void*, const char*, s32);
extern char D_0044BC20[];
extern char D_0044BC38[];
extern char D_0044DD18[];
extern char D_0044BDF8[];
extern char D_0044CC40[];
extern void *func_001E3820(s32, void*, void*);
extern void func_0029EC50(void*, s32, s32, s32, f32);
extern char D_0040E698[];

void func_00140EB8(void *arg0) {
    s32 temp_2;
    temp_2 = func_002971B0(func_00297500());
    if (temp_2 > 0) {
        if (temp_2 < 4) {
            func_0011E650(*(s32*)((char*)arg0+0xC), 3, 0);
        } else {
            if (temp_2 != 4) {
                return;
            }
            func_0011E650(*(s32*)((char*)arg0+0xC), 3, 0);
        }
    }
}

void *func_00144718(void *arg0) {
    s32 name[4];
    func_001D4040(name, D_0044BDF8);
    *(s32*)((char*)arg0+0x14) = 0;
    *(s32*)((char*)arg0+0xC) = 0;
    *(s32*)((char*)arg0+0x4) = name[0];
    *(s32*)((char*)arg0+0x0) = -1;
    *(void**)((char*)arg0+0x8) = (void*)D_0044CC40;
    func_001D4040((char*)arg0+0x14, (const char*)0);
    return arg0;
}

void *func_00140FF0(void *arg0) {
    s32 k[8];
    s32 r[4];
    void *p = D_002AD408(0x24);
    func_001D4040(k, D_0044BC20);
    *(s32*)((char*)p+0x8) = 0;
    *(s32*)((char*)p+0xC) = 0;
    *(s32*)((char*)p+0x4) = 0;
    *(s32*)((char*)p+0x0) = 0;
    *(s32*)((char*)p+0x14) = 0;
    *(s32*)((char*)p+0x10) = (s32)D_0044DD18;
    r[0] = *(s32*)k; /* placeholder */
    func_001E2460(r, p);
    func_001E2C78(r, D_0044BC38, *(s32*)((char*)arg0+0xC));
    return p;
}

void func_00144CA8(char *arg0, char *arg1) {
    if (*(s32*)(arg1+0x4C) == 0) return;
    {
        void *found = func_001E3820(func_001E4280(), arg0+0x24, D_0040E698);
        if (found != 0) {
            char *obj = *(char**)(arg1+4);
            if (obj != 0) {
                s32 val = *(s32*)(*(char**)((char*)found+8)+4);
                if (*(s32*)(arg0+0x28) != val) {
                    f32 f0 = *(f32*)(arg0+0x14);
                    f32 f1 = *(f32*)(arg0+0x10);
                    s32 zero = 0;
                    *(s32*)(arg0+0x28) = val;
                    *(f32*)(obj+0xC) = f1;
                    *(f32*)(obj+0x4+0xC) = f0; /* placeholder */
                }
            }
        }
    }
}
