extern void func_003E4F70(void *);
extern void func_003E5348(void *, s32);
extern s32 func_003E5240(void *, s32);

void func_003E5588(void *arg0) {
    s32 m;
    func_003E4F70(arg0);
    m = (-(s32)(*(volatile u32 *)0x10002020 & 7)) & 7;
    if (m != 0) {
        func_003E5348(arg0, m);
    }
    while (func_003E5240(arg0, 0x18) != 1) {
        func_003E5348(arg0, 8);
    }
}
