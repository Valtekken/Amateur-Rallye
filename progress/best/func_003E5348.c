extern void func_003E0EF0(u32);
extern s64 func_003E5018(void *, s32 *);
extern s32 D_0043AF40[10];
#define F(p, off) (*(s32 *)((u8 *)(p) + (off)))
#define V(p, off) (*(volatile s32 *)((u8 *)(p) + (off)))
void func_003E5348(void *arg0, s32 arg1) {
    s32 cnt = 0;
    u32 val;
    s32 r;
    if ((*(volatile u32 *)0x10002010 & 0x80004000) == 0x80000000) {
        do {
            if (cnt++ >= 0x1389) { func_003E0EF0(F(arg0, 0x858)); cnt = 0; }
        } while ((*(volatile u32 *)0x10002010 & 0x80004000) == 0x80000000);
    }
    val = arg1 | 0x40000000;
    *(volatile u32 *)0x10002000 = val;
    F(arg0, 0x818) = D_0043AF40[val >> 28];
    r = (s32)func_003E5018(arg0, &D_0043AF40[val >> 28]);
    V(arg0, 0x83C) = 0x20;
    V(arg0, 0x838) = r;
}
