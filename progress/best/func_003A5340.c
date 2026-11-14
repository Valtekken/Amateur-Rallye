s32 func_003A6798(void*); void func_003AD620(s32,s32,s32);
void func_003A67C8(s32 a,s32 b){(void)*(volatile s32*)&a;func_003AD620(a,b,func_003A6798(&a));}

void *func_003A53D0(void *arg0, s16 arg1) {
    *(s16 *)arg0 = arg1;
    return arg0;
}

u64 *func_003A5340(u64 *arg0) {
    *(s16 *)arg0 = 0;
    *arg0 = *arg0 & 0x000000800000FFFFULL;
    *arg0 = *arg0 & 0x00000017FFFFFFFFULL;
    *arg0 = *arg0 & 0xFFF0000FFFFFFFFFULL;
    return arg0;
}

s32 func_003A0BD8(s32, s32);
s32 func_00219DA8(s32, s32);
s32 func_003A5DC8(register s32 arg0, register s32 arg1) {
    func_003A0BD8(arg0, arg1);
    func_00219DA8(arg0 + 0xC, arg1 + 0xC);
    return arg0;
}
