extern volatile unsigned short func_001E2460(void *, void *);
extern s32 func_001E25B0(void *, const char *, void *);
extern void func_001E28F8(void *, const char *, void *);
extern void func_001E2470(void *, const char *, void *);
extern void *func_001E3700(s32, void *);
extern void *func_001D4010(void *);
extern s32 func_001E4280(void);
extern void func_0029F3C8(void *, void *, s32);
extern void func_0029F708(void *, void *);
extern void func_0029F940(void *);
extern void func_0029F9A0(void *);
extern void func_0029FA10(void *, void *);
extern char D_0047BC10[], D_0047BC18[], D_0047BC28[], D_0047BC38[], D_0047BCB0[], D_0047BF38[], D_0047C208[], D_0047C218[], D_0047C228[], D_0047C238[], D_0047C248[];

void func_0029F018(void *a, void *b, void *c) {
    u32 v0[4];
    u32 t;
    s32 v14, v18, v1C, v20;
    void *p;
    void *temp_2;

    func_001E2460(&t, c);
    p = (char *)a + 0x50;
    v1C = 0; v20 = 0; v14 = 0; v18 = 0; v0[0] = 0;

    func_001E25B0(&t, D_0047BF38, (char *)a + 0xC);
    func_001E28F8(&t, D_0047BC10, p);
    func_001E25B0(&t, D_0047BC18, &v14);
    func_001E25B0(&t, D_0047BC28, &v18);
    func_001E28F8(&t, D_0047BC38, v0);
    func_001E25B0(&t, D_0047C208, (char *)a + 0x10);
    func_001E25B0(&t, D_0047C218, (char *)a + 0x14);
    func_001E25B0(&t, D_0047C228, &v1C);
    *(s32 *)((char *)a + 0x20) = v1C;
    func_001E25B0(&t, D_0047C238, &v20);
    *(s32 *)((char *)a + 0x24) = v20;
    func_001E25B0(&t, D_0047C248, (char *)a + 0x54);
    func_001E2470(&t, D_0047BCB0, (char *)a + 0x58);

    temp_2 = *(void **)((char *)b + 0x4C);
    if (temp_2 != 0) {
        *(s32 *)((char *)a + 0x28) = *(s32 *)((char *)*(void **)((char *)temp_2 + 8) - 0x28);
    }

    if (*(void **)((char *)a + 0x50) != 0) {
        func_0029FA10(a, func_001D4010(func_001E3700(func_001E4280(), p)));
    } else if (v14 != 0) {
        if (v18 != 0) func_0029F9A0(a);
        else func_0029F940(a);
    } else {
        func_0029FA10(a, func_001D4010(v0));
    }

    func_0029F708(a, b);
    func_0029F3C8(a, b, 0);
}
