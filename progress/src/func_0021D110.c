extern void *func_002B1FC0(s32);
extern void *func_003D2910(s32);

void *func_0021D110(void *arg0) {
    void *n1, *n2, *t1, *t2;
    volatile int tmp[8];
    *(s32 *)arg0 = 0;
    n1 = func_002B1FC0(0xC);
    if (!n1) n1 = func_003D2910(0xC);
    *(void **)((u8 *)arg0 + 4) = n1;
    *(void **)n1 = n1;
    t1 = *(void **)((u8 *)arg0 + 4);
    *(void **)((u8 *)t1 + 4) = t1;
    n2 = func_002B1FC0(0xC);
    if (!n2) n2 = func_003D2910(0xC);
    *(void **)((u8 *)arg0 + 8) = n2;
    *(void **)n2 = n2;
    t2 = *(void **)((u8 *)arg0 + 8);
    *(void **)((u8 *)t2 + 4) = t2;
    return arg0;
}
