extern void func_0027B878(void*, void*);
extern void *func_002B1FC0(s32);
extern void *func_003D2910(s32);

void func_002228C0(void *arg0, s32 arg1) {
    if (arg1 >= 0) {
        char *begin = *(char**)arg0;
        char *end = *((char**)arg0 + 1);
        s32 count = (((s32)(end - begin)) * 0xE9BD37A7) >> 4;
        if ((u32)arg1 < (u32)count) {
            char *dst = begin + arg1 * 0x170;
            char *nxt = dst + 0x170;
            s32 n = (((s32)(end - nxt)) * 0xE9BD37A7) >> 4;
            char *d = dst;
            char *nn = nxt;
            while (n > 0) {
                func_0027B878(d, nn);
                nn += 0x170;
                n--;
                d += 0x170;
            }
            *((char**)arg0 + 1) = end - 0x170;
        }
    }
}

void func_00222AA0(void *arg0) {
    char *begin = *(char**)arg0;
    char *end = *((char**)arg0 + 1);
    s32 n = ((((s32)(end - begin)) * 0xE9BD37A7) >> 4) - 1;
    if (n >= 0) {
        do {
            func_002228C0(arg0, n);
            n--;
        } while (n >= 0);
    }
}

void *func_0021D110(void *arg0) {
    void *n1;
    void *t1;
    void *n2;
    void *t2;
    *(s32*)arg0 = 0;
    n1 = func_002B1FC0(0xC);
    if (!n1) n1 = func_003D2910(0xC);
    *((void**)arg0 + 1) = n1;
    *(void**)n1 = n1;
    t1 = *((void**)arg0 + 1);
    *((void**)t1 + 1) = t1;
    n2 = func_002B1FC0(0xC);
    if (!n2) n2 = func_003D2910(0xC);
    *((void**)arg0 + 2) = n2;
    *(void**)n2 = n2;
    t2 = *((void**)arg0 + 2);
    *((void**)t2 + 1) = t2;
    return arg0;
}

void func_0021A910(s32 arg0, s32 arg1, void *arg2) {
    s32 p;
    void *q;
    s32 d;
    p = arg0;
    q = (void*)((char*)arg2 + 0x24);
    if (arg0 != arg1) {
        d = arg0 + 0x24;
        do {
            p += 0x38;
            *(f32*)(d - 0x24) = *(f32*)arg2;
            *(f32*)(d - 0x20) = *(f32*)((char*)arg2+4);
            *(f32*)(d - 0x1C) = *(f32*)((char*)arg2+8);
            *(f32*)(d - 0x18) = *(f32*)((char*)arg2+0xC);
            *(f32*)(d - 0x14) = *(f32*)((char*)arg2+0x10);
            *(f32*)(d - 0x10) = *(f32*)((char*)arg2+0x14);
            *(f32*)(d - 0xC) = *(f32*)((char*)arg2+0x18);
            *(f32*)(d - 8) = *(f32*)((char*)arg2+0x1C);
            *(f32*)(d - 4) = *(f32*)((char*)arg2+0x20);
            *(f32*)(d) = *(f32*)((char*)arg2+0x24);
            *(f32*)(d + 4) = *(f32*)((char*)q+4);
            *(f32*)(d + 8) = *(f32*)((char*)q+8);
            *(f32*)(d + 0xC) = *(f32*)((char*)q+0xC);
            *(s32*)(d + 0x10) = *(s32*)((char*)arg2+0x34);
            d += 0x38;
        } while (p != arg1);
    }
}
