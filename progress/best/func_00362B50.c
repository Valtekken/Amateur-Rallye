extern void *D_0042E8E8;
extern int D_004864C8, D_004864F8;
extern void *func_002B1FC0(s32, s32, s32);
extern void *func_003D2910(s32);

void func_00362B50(void *arg0) {
    struct { char pad[0x10]; void *p; } at;
    void *obj, *p8;
    *(void **)((char *)arg0 + 0x2C) = &D_004864F8;
    *(u32 *)((char *)arg0 + 4) = 0xFFFFFFFFu;
    *(s32 *)((char *)arg0 + 0x10) = -1;
    *(s32 *)((char *)arg0 + 0x28) = 1;
    *(u32 *)((char *)arg0 + 0) = 0xFFFFFFFFu;
    *(s32 *)((char *)arg0 + 8) = -1;
    *(s32 *)((char *)arg0 + 0xC) = -1;
    *(void **)((char *)arg0 + 0x14) = 0;
    *(void **)((char *)arg0 + 0x18) = 0;
    *(void **)((char *)arg0 + 0x1C) = 0;
    *(void **)((char *)arg0 + 0x24) = 0;
    at.p = D_0042E8E8;
    obj = func_002B1FC0(0xC, -1, 1);
    p8 = (char *)obj + 8;
    if (obj == NULL) {
        obj = func_003D2910(0xC);
        p8 = (char *)obj + 8;
    }
    if (p8 != NULL) *(void **)((char *)obj + 8) = arg0;
    *(void **)obj = at.p;
    *(void **)((char *)obj + 4) = *(void **)((char *)at.p + 4);
    **(void ***)((char *)at.p + 4) = obj;
    *(void **)((char *)at.p + 4) = obj;
    *(void **)((char *)arg0 + 0x20) = D_0042E8E8;
    at.p = D_0042E8E8;
    *(void **)((char *)arg0 + 0x20) = *(void **)((char *)D_0042E8E8 + 4);
    *(void **)((char *)arg0 + 0x2C) = &D_004864C8;
}
