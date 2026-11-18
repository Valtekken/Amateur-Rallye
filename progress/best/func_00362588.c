extern void func_002B2028(void*);
extern void func_00362D90(void*, s32);
extern void D_002AD390(void*);
extern u32 D_0040E618[];
extern u32 D_00484328;
extern u32 D_004864A0;

void func_00362588(void *arg0, s32 arg1) {
    void *t6;
    void *t2;
    void *v16;
    void *v2;
    s32 t3;
    u32 t4;
    void *t19 = (char*)arg0 + 0x20;

    *(u32*)arg0 = (u32)&D_004864A0;
    t6 = *(void**)((char*)arg0 + 0x2C);
    if (t6 != 0) {
        t2 = *(void**)((char*)t6 + 0x2C);
        ((void(*)(void*,s32,void*))*(void**)((char*)t2 + 0xC))((char*)t6 + *(s16*)((char*)t2 + 0x8), 3, t6);
    }
    v16 = *(void**)((char*)arg0 + 0x20);
    {
        void *t17 = *(void**)((char*)t19 + 4);
        if (v16 < t17) {
            v2 = *(void**)((char*)v16 + 0x2C);
            do {
                ((void(*)(void*,s32))*(void**)((char*)v2 + 0xC))((char*)v16 + *(s16*)((char*)v2 + 0x8), 2);
                v16 = (char*)v16 + 0x30;
                if (v16 < t17) v2 = *(void**)((char*)v16 + 0x2C);
            } while (v16 < t17);
        }
    }
    t4 = *(u32*)((char*)arg0 + 0x20);
    t3 = (s32)(((s32)*(void**)((char*)t19 + 8) - (s32)t4) * (s32)0xAAAAAAAB) >> 4;
    if (t3 != 0) {
        if (t3 * 0x30 != 0) {
            func_002B2028((void*)t4);
        } else {
            *(u32*)t4 = D_0040E618[-1];
            D_0040E618[-1] = t4;
        }
    }
    func_00362D90((char*)arg0 + 8, 2);
    *(u32*)arg0 = (u32)&D_00484328;
    if (arg1 & 1) {
        D_002AD390(arg0);
    }
}
