extern void func_0026FFC8(void*);
extern void func_002B2028(s32);
extern void D_002AD390(void*);
extern void* func_002B1FC0(s32);
extern void* func_003D2910(s32);
extern f32 D_00426508[];

void func_00229658(void *arg0, s32 arg1) {
    void *t = arg0;
    void *t4 = (char*)arg0 + 4;
    func_0026FFC8(t);
    func_0026FFC8(t4);
    func_0026FFC8(t4);
    func_002B2028(*(s32*)((char*)arg0 + 4));
    func_0026FFC8(t);
    func_002B2028(*(s32*)arg0);
    if (arg1 & 1) {
        D_002AD390(t);
    }
}

void func_00229280(void *arg0) {
    void *v;
    v = func_002B1FC0(0xC);
    if (v == NULL) v = func_003D2910(0xC);
    *(void**)arg0 = v;
    *(void**)v = v;
    {
        void *t = *(void**)arg0;
        *(void**)((char*)t + 4) = t;
    }
    v = func_002B1FC0(0xC);
    if (v == NULL) v = func_003D2910(0xC);
    *(void**)((char*)arg0 + 4) = v;
    *(void**)v = v;
    {
        void *t = *(void**)((char*)arg0 + 4);
        *(void**)((char*)t + 4) = t;
    }
    {
        char *p = (char*)arg0 + 8;
        *(f32*)p = D_00426508[0];
        *(f32*)(p + 4) = D_00426508[1];
        *(s32*)(p + 0x10) = -1;
        *(f32*)(p + 8) = D_00426508[2];
        *(s32*)(p + 0xC) = 0;
    }
    return;
}

void func_002296D0(void *arg0) {
    void *p = *(void**)arg0;
    while (p != *(void**)arg0) {
        s32 v = *(s32*)((char*)p + 8);
        if (v != 0) D_002AD390((void*)v);
        p = *(void**)p;
    }
    func_0026FFC8(arg0);
    p = *(void**)((char*)arg0 + 4);
    while (p != *(void**)((char*)arg0 + 4)) {
        s32 v = *(s32*)((char*)p + 8);
        if (v != 0) D_002AD390((void*)v);
        p = *(void**)p;
    }
    func_0026FFC8((char*)arg0 + 4);
}
