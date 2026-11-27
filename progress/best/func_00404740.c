/* func_00404740: best version 7786 */ 
extern s32 func_002ABF20(s32, s32);
extern s32 func_002ABF88(s32, s32);
extern s32 func_002AC230(s32, s32);
extern s32 func_002AC4B0(s32, s32);
extern s32 func_004046B0(s32);
extern s32 func_0040C570(s32);
extern void func_00404E70(s32 *, s32);
extern s32 D_00441118(s32);
extern s32 D_0048CA60;
extern s32 D_0048CA68;
extern s32 D_0048CA70;
extern s32 D_0048CA78;
extern s32 D_0048CA80;
extern s32 D_0048CA88;

void func_00404740(s32 arg0) {
    s32 var_16 = arg0;
    
    if (func_002AC4B0(0, 0) < 0) {
        var_16 = func_002ABF20(0, var_16);
    }
    if (func_002AC4B0(var_16, D_0048CA78) < 0) {
loop_6:
        if (func_002AC4B0(var_16, D_0048CA80) < 0) {
            goto loop_6;
        }
    } else if (func_002AC4B0(var_16, 0xFFC0) >= 0) {
loop_12:
        if (func_002AC4B0(var_16, 0xFFC0) >= 0) {
            goto loop_12;
        }
    }
    func_00404E70(&D_0048CA60, func_004046B0(func_0040C570(var_16)));
}
