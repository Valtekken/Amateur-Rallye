extern void func_001E2460(void*,s32);
extern void func_001E25B0(void*,const char*,void*);
extern s32 func_00193B60(void);
extern s32 func_001930D8(s32,s32);
extern char D_0044BC38[];

void func_00150250(void *arg0, s32 arg1, s32 arg2) {
    char sp[12];
    func_001E2460(sp, arg2);
    func_001E25B0(sp, D_0044BC38, (void *)((char *)arg0 + 0xB8));
    *(s32 *)((char *)arg0 + 0x18) = func_001930D8(func_00193B60(), *(s32 *)((char *)arg0 + 0xB8));
}
