extern void *D_002AD408(int n);
extern void func_0011DA70(void *p);
extern void *func_00110430(void *p, int n);
extern void func_00110158(void *p);
extern void *func_00297500(void *p, int n);
extern void func_002971B0(void);
extern void func_00297398(void *p);
extern int func_001E4280(void);
extern void func_001D4040(void *buf, const char *key);
extern void func_001E3D10(void *a, void *b);
extern void *func_00194C40(void *a, int b);
extern void *func_00193FD8(void);
extern void *func_0017E620(void);
extern void func_001D2458(void *buf, void *val);
extern void *func_001D2488(void *p);
extern void func_001535C8(void *vec, void *val);
extern void D_002AD390(void *p);
extern void func_001942E8(void);
extern void func_0013BB70(void *a, void *b);
extern void func_0010F9F0(void *a, void *b, int c);
extern void func_00193B60(void);
extern void func_00191630(void);
extern void func_00110050(void);
extern void func_0013BE18(void *a);
extern void func_00196028(void);
extern void func_00195700(void *a, int b);
extern void func_0013D868(void);
extern void func_0013B638(void *a);
extern void func_0013B560(void *a);
extern void func_00194738(void);
extern void func_001E4040(void *a, void *b, int c);
extern void func_001E3EC0(void *a, void *b, int c, int d);
extern void func_001E3FE0(void *a, void *b);
extern void func_001E3598(void *a, void *b);
extern void func_001E3750(void *a, void *b);
extern void func_0011A918(void *a, void *b, void *c);
extern void func_0011AD90(void);
extern void func_00196E10(void);
extern void func_001965A8(void);

extern char D_0044AF60[];
extern char D_00447E10[];
extern char D_0044AF88[];
extern char D_0044AFA8[];
extern char D_0044AFC8[];
extern char D_0044AFE8[];
extern char D_0044B008[];
extern char D_0044B030[];
extern char D_0044B050[];
extern char D_0044B078[];
extern char D_00445DC0[];
extern char D_00445B78[];
extern char D_00445B90[];
extern char D_00444878[];

struct Vec { void *begin, *end, *cap; };

struct Obj {
    s32 f0C;
    s32 f10;
    s32 f2C;
    u32 f30;
};

void func_0013A208(struct Obj *arg0)
{
    void *r, *v, *obj, *s4, *s16;
    struct Vec *vec;
    int counter = 0;
    void *buf;

    r = D_002AD408(0x10);
    func_0011DA70(r);
    v = func_00110430(r, 6);
    arg0->f0C = v;
    func_00110158(v);
    v = func_00297500(v, 1);
    func_002971B0();
    if (v != (void *)-1)
        v = func_00297500(v, 1);
    else
        v = func_00297500((void *)0xC, 1);
    func_00297398(v);
    vec = D_002AD408(0xC);
    vec->begin = 0;
    vec->end = 0;
    obj = (void *)func_001E4280();
    vec->cap = 0;
    buf = 0;
    func_001D4040(buf, D_00447E10);
    arg0->f2C = (s32)obj;
    func_001E4280();
    func_001D4040(buf, D_0044AF60);
    func_001E3D10(obj, buf);
    func_00194C40(obj, 0);
    obj = func_00193FD8();
    if (obj != 0) {
        func_0017E620();
    }
    func_001942E8();
    func_0013BB70(arg0, v);
    func_001E4280();
    func_001D4040(buf, D_0044AF60);
    func_001E3D10(obj, buf);
    func_001E4280();
    func_001D4040(buf, D_0044B008);
    func_0013BB70(arg0, v);
    func_001D2458(buf, obj);
    func_001D2488(vec->begin);
    vec->end = (void *)((char *)vec->end + 4);
    D_002AD390(buf);
}
