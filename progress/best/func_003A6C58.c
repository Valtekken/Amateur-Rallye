extern void func_003ADCF0(void *a, void *b);
extern void func_003AD930(void *a, int b);
extern void func_003AD968(void *a, void *b);
extern int func_003ADD50(void *a, void *b);
extern int func_003ADD98(void *a, void *b);
extern void func_003ADC90(void *a, void *b);
extern void *func_003ADDE0(void *a);
extern int func_003AC680(void *a, void *b);
extern void func_003A4418(void *a, int b);
extern void func_003ADE18(void *a);
extern char *func_003A4718(void *a);
extern void func_003F9698(char *a, ...);
extern char D_0042FD60[]; extern char D_00487440[]; extern char D_00487450[];

void func_003A6C58(void *arg0, void *arg1) {
    char sp[0x40];
    int flag;
    void *p;
    void *r;
    void *obj;
    void *vt;
    int res;
    short off;

    func_003ADCF0(sp, D_0042FD60);
    p = sp + 0x10;
    func_003AD930(p, 0);

loop:
    flag = 0;
    p = sp + 0x20;
    func_003AD968(p, D_0042FD60);
    p = sp + 0x20;
    if (func_003ADD50(sp, p) != 0) {
        r = sp + 0x10;
        p = sp + 0x30;
        func_003AD930(p, 0);
        p = sp + 0x30;
        if (func_003ADD98(r, p) != 0) flag = 1;
    }
    if (flag == 0) goto Lelse;

    r = func_003ADDE0(sp);
    p = sp + 0x20;
    func_003ADC90(p, *(void **)r);
    res = func_003AC680(p, arg0);
    p = sp + 0x20;
    func_003A4418(p, 2);
    if (res != 0) *(int *)(sp + 0x10) = *(int *)sp;
    func_003ADE18(sp);
    goto loop;

Lelse:
    r = sp + 0x10;
    p = sp + 0x20;
    func_003AD930(p, 0);
    p = sp + 0x20;
    if (func_003ADD50(r, p) != 0) {
        obj = *(void **)func_003ADDE0(r);
        vt = *(void **)((char *)obj + 8);
        vt = (char *)vt + 0x10;
        off = *(short *)vt;
        ((void (*)(void *, void *))*(u32 *)((char *)vt + 4))((char *)obj + off, arg1);
    } else if (func_003A4718(arg0) == 0) {
        func_003F9698(D_00487440);
    } else {
        func_003F9698(D_00487450, func_003A4718(arg0));
    }
    func_003A4418(arg0, 2);
}
