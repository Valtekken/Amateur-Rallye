extern void func_003A4AB8(void *, void *);

void *func_003A4990(register void *arg0, register void *arg1) {
    func_003A4AB8(arg0, arg1);
    *(f32 *)((char *)arg0 + 0xC) = *(f32 *)((char *)arg1 + 0xC);
    *(f32 *)((char *)arg0 + 0x10) = *(f32 *)((char *)arg1 + 0x10);
    return arg0;
    goto Lend;
    goto Lend;
Lend:
    ;
}
