extern void *D_002AD408(int);
extern void func_001E2460(void *, void *);
extern void func_001E2C08(void *, const char *, float);
extern void func_001E2C78(void *, const char *, int);
extern char D_0044DD18[];
extern char D_0047AD80[];
extern char D_0047AD88[];
extern char D_0047AD90[];
extern char D_0047ADA8[];
extern char D_0047ADC0[];

void *func_0027ED80(void *arg0) {
    char key[0x20];
    char writer[0x10];
    void *obj;
    void *p;

    obj = D_002AD408(0x24);
    *((int *) (obj + 8)) = 0;
    *((void **) (obj + 0x10)) = D_0044DD18;
    *((int *) (obj + 0xC)) = 0;
    *((int *) (obj + 4)) = 0;
    *((int *) obj) = 0;
    *((int *) (obj + 0x14)) = 0;
    p = obj + 0x14;
    *((int *) (p + 8)) = 0;
    *((int *) (p + 4)) = 0;
    *((int *) (obj + 0x20)) = 0;
    func_001E2460(writer, obj);
    func_001E2C08(writer, D_0047AD80, *((float *) (arg0 + 0x10)));
    func_001E2C08(writer, D_0047AD88, *((float *) (arg0 + 0x14)));
    func_001E2C08(writer, D_0047AD90, *((float *) (arg0 + 0x18)));
    func_001E2C08(writer, D_0047ADA8, *((float *) (arg0 + 0x1C)));
    func_001E2C78(writer, D_0047ADC0, *((int *) (arg0 + 0xC)));
    return obj;
}
