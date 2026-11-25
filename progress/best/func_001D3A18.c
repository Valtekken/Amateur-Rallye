extern void *D_002AD408(int);
extern void func_001D3310(void *);
extern void func_001D3378(void *, void *, s32, s32);
extern void func_001D3478(void *, void *, const char *, s32);
extern s32 func_001D4010(void *);
extern void func_001D4040(void *, const char *);
extern void func_003F9698(const char *, s32);
extern char D_00475CF8[], D_00475DF8[], D_00475E10[], D_00475E28[];
extern void *D_00476680;

void func_001D3A18(void) {
    s32 k[4];
    void *a = D_002AD408(0x18);
    func_001D3310(a);
    *(void **)((char *)a + 0x14) = &D_00476680;
    func_003F9698(D_00475CF8, func_001D4010((char *)a + 0x10));
    func_001D4040(k, D_00475DF8);
    func_001D3378(a, k, 0, 0);
    {
        void *b = D_002AD408(0x18);
        func_001D3310(b);
        *(void **)((char *)b + 0x14) = &D_00476680;
        func_003F9698(D_00475CF8, func_001D4010((char *)b + 0x10));
        func_001D4040(k, D_00475E10);
        func_001D3478(b, k, D_00475E28, 0xC);
    }
}
