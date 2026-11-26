extern void func_002441A0(s32, s32);
extern s32 func_003A4C98(void *, char *);
extern void func_003B4BF0(void *);
extern void func_003B4BF8(void *, s32);
extern s32 func_003B4C20(void *, s32);
extern void func_003F9698(char *);
extern char D_004879C0[], D_004879C8[];

typedef struct {
    s32 field0;
    void *field4;
    u8 pad[8];
} S946;

void func_003946E0(register S946 *arg0) {
    void *fp = __builtin_frame_address(0);
    s32 *sp = (s32 *)fp;
    func_003B4BF0(fp);
    sp[1] = func_003B4C20(fp, arg0->field0);
    if (func_003A4C98((char *)arg0 + 0xC, D_004879C0) == -1) {
        *(s32 *)((char *)arg0->field4 + 0x34) = sp[1];
    } else {
        if (sp[1] != 0) {
            func_002441A0(sp[1], 3);
        }
        func_003F9698(D_004879C8);
    }
    func_003B4BF8(fp, 2);
}
