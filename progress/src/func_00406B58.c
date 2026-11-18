extern void func_00406B18(s32);
extern void func_00406C18(void);
extern void func_0040AF58(void);
extern void func_0040AFA0(void);
extern void func_00406B48(void);
extern void func_00403EC0(s32, void *, void *);
extern s32 D_004411A8;
extern s32 D_004A12C0[16];

s32 func_00406B58(s32 arg0, s32 arg1) {
    s32 temp;
    s32 *arr = &D_004A12C0[0];
    func_00406B18(0x1B);
    if (D_004411A8 == 0)
        func_00406C18();
    func_0040AF58();
    temp = arr[0];
    arr[1] = arg1;
    arr[0] = arg0;
    func_0040AFA0();
    func_00406B48();
    return temp;
}

void func_00405E00(void *arg0) {
    void *temp5 = *(void **)((char *)arg0 + 0x34);
    void *temp6 = *(void **)((char *)temp5 + 0x40);
    void *e = *(void **)((char *)temp6 + 0x10);
    if (*(void **)((char *)temp6 + 0xC) != NULL) {
        *(void **)((char *)e + 0x3C) = temp5;
    } else {
        *(void **)((char *)temp6 + 0xC) = temp5;
    }
    *(void **)((char *)temp6 + 0x10) = temp5;
    *(s32 *)((char *)temp5 + 0x20) = *(s32 *)((char *)arg0 + 0x14);
    *(s32 *)((char *)temp5 + 0x1C) = *(s32 *)((char *)arg0 + 0x1C);
    *(s32 *)((char *)temp5 + 0x24) = *(s32 *)((char *)arg0 + 0x20);
    *(s32 *)((char *)temp5 + 0xC) = *(s32 *)((char *)arg0 + 0x24);
    *(s32 *)((char *)temp5 + 0x28) = *(s32 *)((char *)arg0 + 0x28);
    *(s32 *)((char *)temp5 + 0x2C) = *(s32 *)((char *)arg0 + 0x2C);
    *(s32 *)((char *)temp5 + 0x30) = *(s32 *)((char *)arg0 + 0x30);
    *(s32 *)((char *)temp5 + 0x34) = *(s32 *)((char *)arg0 + 0x10);
    if (*(s32 *)temp6 >= 0 && *(s32 *)((char *)temp6 + 4) == 0) {
        func_00403EC0(*(s32 *)temp6, temp5, temp6);
    }
}
