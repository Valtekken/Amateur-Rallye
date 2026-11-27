extern void func_002B8438(void *);
extern s32 func_003F9698(char *, ...);
extern void func_002B8E38(void *, char *, s32, s32);
extern s32 func_002B8A40(void *);
extern s32 func_002B1FC0(s32);
extern s32 func_002B8938(void *, s32, s32);
extern void func_002B8768(void *);
extern void func_002B84E0(void *, s32);
extern char D_0047E590[];
extern char D_0047E5B8[29];
extern char D_0047E5B8b[29] __attribute__((alias("D_0047E5B8")));
extern char D_0047E5D8[];
extern char D_0047E608[];
extern char D_0047E610[];

void func_002B3B08(volatile s32 *arg0) {
    u8 obj[0x40];
    volatile s32 v40, v44;
    s32 r;
    func_002B8438(obj);
    func_003F9698(D_0047E590, D_0047E5B8);
    func_002B8E38(obj, D_0047E5B8b, 0, 1);
    v40 = func_002B8A40(obj);
    r = func_002B1FC0(v40);
    arg0[0] = r;
    v44 = func_002B8938(obj, arg0[0], v40);
    func_003F9698(D_0047E5D8, D_0047E5B8b, v44 ? D_0047E608 : D_0047E610);
    arg0[3] = v40;
    func_002B8768(obj);
    func_002B84E0(obj, 2);
}
