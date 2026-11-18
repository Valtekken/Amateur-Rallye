extern u8 D_00436208[];
extern void *func_003CD828(void*);
extern void func_002AE2F0(void*);
extern u8 D_00488D80[];
extern u8 D_0047D9A8[];

void *func_003D1E50(void **a) {
    void *p;
    void **slot = &a[1];
    a[0] = D_00488D80;
    if (D_00436208[12])  /* offset 0xC */
        p = func_003CD828(D_00436208);
    else {
        p = (char *)D_00436208 + 16;
        ++((u32*)D_00436208)[2];
    }
    *slot = p;
    return a;
}
