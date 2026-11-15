extern u32 D_00487F08[];
extern u32 D_0042FD60;
extern void *func_003B1F48(void *, void *);
extern void *func_003B20D0(void *, void *, void *);
extern void func_003A4418(void *, s32);
extern void D_002AD390(void *);

struct Temp {
    char data[0x10];
    char sub[0x10];
};

void func_003ADBD8(register void *arg0, register s32 arg1) {
    struct Temp sp;
    *(u32 *)((char *)arg0 + 8) = (u32)D_00487F08;
    func_003B1F48(&sp.sub, (char *)arg0 + 4);
    func_003B20D0(&sp, &D_0042FD60, &sp.sub);
    func_003A4418(arg0, 2);
    if (arg1 & 1) {
        D_002AD390(arg0);
    } else {
    }
}
