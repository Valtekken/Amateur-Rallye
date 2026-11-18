extern void func_003E0EA0(s32, void*);
extern void func_003E4F40(void*, s32);
extern void func_003E4F70(void*);
extern void func_0040AF58(void);
extern void func_0040AFA0(void);

void func_003E1D20(void *p, s32 a, u32 addr) {
    s32 cmd[8];
    cmd[0] = 2;
    func_003E0EA0(*(s32 *)((u8*)p + 0x858), cmd);
    func_003E4F70(p);
    *(volatile u32 *)0x10002000 = 0;
    func_003E4F70(p);
    func_0040AF58();
    *(volatile u32 *)0x1000B410 = addr & 0xFFFFFFF;
    *(volatile u32 *)0x1000B420 = 4;
    *(volatile u32 *)0x1000B400 = 0x101;
    func_0040AFA0();
    func_003E4F40(p, a);
    func_003E4F70(p);
    cmd[0] = 3;
    func_003E0EA0(*(s32 *)((u8*)p + 0x858), cmd);
}
