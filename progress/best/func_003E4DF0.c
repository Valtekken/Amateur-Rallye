extern s32 func_003E3F80(s32);
extern s32 func_003E4BC8(void *, s32, s32, s32, s32);
extern s32 func_003E50C8(s32, s32);
extern s32 func_003E5438(s32, s32);

void func_003E4DF0(s32 arg0, void *arg1, void *arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7) {
    s32 temp = func_003E50C8(arg0, 2);
    s32 var1;
    
    if (arg3 != 0 && temp != 0) {
        var1 = func_003E5438(arg0, arg3);
    } else {
        var1 = 0;
    }
    func_003E4BC8(arg1, arg3, temp, var1, arg7);
    
    if (arg5 != 0) {
        s32 result = func_003E3F80(arg0);
        *(s32 *)arg2 = result;
        func_003E3F80(arg0);
    }
    
    temp = func_003E50C8(arg0, 2);
    s32 var2;
    
    if (arg4 != 0 && temp != 0) {
        var2 = func_003E5438(arg0, arg4);
    } else {
        var2 = 0;
    }
    
    if (arg6 != 0) {
        s32 *p = (s32 *)((char *)arg1 + 4);
        *p = *p >> 1;
    }
    
    func_003E4BC8((char *)arg1 + 4, arg4, temp, var2, arg7);
    
    if (arg6 != 0) {
        s32 *p = (s32 *)((char *)arg1 + 4);
        *p = *p << 1;
    }
    
    if (arg5 != 0) {
        s32 result = func_003E3F80(arg0);
        *(s32 *)((char *)arg2 + 4) = result;
    }
}
