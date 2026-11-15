extern void func_003A45E8(void *arg0, const char *arg1);
extern void func_003ADA88(void *arg0, void *arg1);
extern char D_00487470[];
extern char D_00487EE8[];

void *func_003A6EA8(void *arg0) {
    char buf[16];
    func_003A45E8(buf, D_00487470);
    func_003ADA88(arg0, buf);
    *(void **)((char *)arg0 + 8) = &D_00487EE8;
    return arg0;
}
