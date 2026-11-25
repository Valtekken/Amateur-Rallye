extern void ReferThreadStatus_2(s32, void *);
extern void func_003F9698(const char *, ...);
extern void func_002BECE8(s32);
extern const char D_00480DC0[], D_00480DC8[], D_00480DD0[], D_00480DD8[];
extern const char D_00480DE0[], D_00480DF0[], D_00480DF8[], D_00480E00[], D_00480E48[];

void func_002BF5B0(char *arg0) {
    s32 sp[12];
    const char *name;
    ReferThreadStatus_2(*(s32 *)arg0, sp);
    switch (sp[0]) {
    case 1: name = D_00480DC0; break;
    case 2: name = D_00480DC8; break;
    case 4: name = D_00480DD0; break;
    case 8: name = D_00480DD8; break;
    case 12: name = D_00480DE0; break;
    case 16: name = D_00480DF0; break;
    default: name = D_00480DF8; break;
    }
    func_003F9698(D_00480E00, *(s32 *)(arg0 + 0x10), sp[0], name, sp[6]);
    func_002BECE8(*(s32 *)(arg0 + 0x14));
    func_003F9698(D_00480E48);
}
