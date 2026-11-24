extern void func_0011E650(s32, s32, s32);
extern s32 func_002971B0(s32);
extern s32 func_00297500(void);

void func_00140EB8(void *arg0) {
    s32 n = func_002971B0(func_00297500());
    if (n <= 0) goto end;
    if (n < 4) goto call;
    if (n == 4) goto call2;
    goto end;
call:
    func_0011E650(*(s32 *)((u8 *)arg0 + 0xC), 3, 0);
    goto end;
call2:
    func_0011E650(*(s32 *)((u8 *)arg0 + 0xC), 3, 0);
end:
    return;
}
