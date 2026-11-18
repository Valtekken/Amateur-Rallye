extern void func_001D4040(void*,const char*);
extern char D_00445D80[];
extern s32 func_001E4280(void);
extern s32 func_001E3650(s32,void*);
extern void func_0011D240(void*,s32);
extern void func_0011D390(void*,s32);
extern void func_0011D718(void*,s32);

void func_0011D1B0(void *arg0, s32 arg1) {
    s32 temp;
    s32 sp[4];
    temp = func_001E4280();
    func_001D4040(sp, D_00445D80);
    if (func_001E3650(temp, (s32)sp) <= 0) {
        if (*(s32*)((char*)arg0 + 0x1C) != 0) {
            func_0011D240(arg0, arg1);
        } else {
            func_0011D390(arg0, arg1);
            func_0011D718(arg0, arg1);
        }
    }
}
