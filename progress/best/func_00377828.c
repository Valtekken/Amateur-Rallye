extern s32 func_002B1FC0(s32);
extern void func_002B2028(void *);
extern void func_003769C8(s32, s32, s32);
extern void func_00377378(s32, s32);
extern s32 func_003774D0(s32, s32);
extern s32 func_003777C0(s32);
extern void func_003F9698(void *, s32, s32);
extern s32 func_003F96F8(void);
extern s32 D_0042EB08[];
extern const char *D_00486A08;
extern const char *D_00486A28;
extern const char *D_00486A48;
extern const char *D_00486A60;
void func_00377828(void) {
    s32 *list = D_0042EB08;
    s32 i = 0;
    func_002B1FC0(0x4000);
    func_003769C8(0x4000, 0x4000, 0x4000);
    func_003F9698(D_00486A08, func_003777C0(0), 0);
    for (i = 0; i < 1000; i++) {
        s32 cnt = func_003F96F8();
        s32 blk = cnt;
        s32 off = cnt;
        if (cnt < 0) { off = cnt + (0x1FFF); }
        off = off + (off >> 13) * 0;
        {
            s32 size = cnt;
            s32 aligned = size;
            if (size < 2) { aligned = 2; }
            func_003F9698(D_00486A28, aligned, func_003777C0(0));
            if (func_003774D0(0, aligned) == 0) { break; }
            list = list + 4;
        }
    }
    func_003F9698(D_00486A48, func_003777C0(0), 0);
    func_002B2028(0);
}
