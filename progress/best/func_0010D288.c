typedef struct { s32 *b, *e, *c; } V;
typedef struct { V a, b; s32 x, y; void *vt; } R;

extern u32 D_0040E618[];
extern char D_0044DBA0[];

extern void func_00152688(R*);
extern void func_00152720(R*, s32*, s32*);
extern void func_00152918(R*, s32*);
extern s32 func_00196E10(void);
extern s32 func_00196730(s32, s32);
extern s32 func_00194C40(void);
extern s32 func_00194738(s32);
extern s32 func_00196028(void);
extern s32 func_00195788(s32, s32);
extern s32 func_001189C0(void);
extern void **func_0017E620(void);
extern void func_001D2458(void*, s32);
extern void func_001965F0(s32, s32, void*);
extern void func_001966C0(s32, s32, s32);
extern void func_00196790(s32, s32, s32);
extern void func_00196860(s32, s32, s32);
extern void func_00196930(s32, s32, f32);
extern void func_00196A00(s32, s32, f32);
extern void func_00196AD0(s32, s32, s32);
extern void func_00196BA0(s32, s32, s32);
extern void func_00196C70(s32, s32, s32);
extern void func_00196D40(s32, s32, s32);
extern void func_002B2028(void*);

void func_0010D288(s32 unused, s32 first, s32 count, s32 mode) {
    R a;
    R b;
    s32 str[8];
    s32 t0, t1, t2, t3, t4, t5, t6, t7;
    s32 i, j, chosen, other = -1;
    s32 aa, bb;
    void **o;
    char *v;
    s32 ctx;
    s32 var_50, var_54, var_58, var_5c, var_60, var_64;
    s32 var_70;
    s32 var_9c;
    s32 var_80, var_84, var_88, var_8c, var_90, var_94, var_98;
    
    a.vt = D_0044DBA0;
    a.a.b = 0;
    a.a.e = 0;
    a.a.c = 0;
    a.b.b = 0;
    a.b.e = 0;
    a.b.c = 0;
    a.y = 1;
    func_00152688(&a);
    
    chosen = func_00196730(func_00196E10(), 0);
    if (func_00194738(func_00194C40())) {
        other = func_00196730(func_00196E10(), 1);
    }
    
    switch (mode) {
        case 0:
            i = 0;
            do {
                if (i != chosen && (i != other || other == -1)) {
                    t0 = i;
                    if (a.a.e != a.a.c) {
                        if (a.a.e) *a.a.e = t0;
                        a.a.e = a.a.e + 1;
                    } else {
                        func_00152720(&a, a.a.e, &t0);
                    }
                }
                i = i + 1;
            } while (i < 7);
            break;
        case 1:
            i = 0;
            do {
                j = i + 7;
                if ((unsigned short)j != chosen && (j != other || other == -1)) {
                    t1 = j;
                    if (a.a.e != a.a.c) {
                        if (a.a.e) *a.a.e = t1;
                        a.a.e = a.a.e + 1;
                    } else {
                        func_00152720(&a, a.a.e, &t1);
                    }
                }
                i = i + 1;
            } while (i < 8);
            break;
        case 2:
        case 4:
            i = 0;
            do {
                j = i + 15;
                if (j != chosen && (j != other || other == -1)) {
                    t2 = j;
                    if (a.a.e != a.a.c) {
                        if (a.a.e) *a.a.e = t2;
                        a.a.e = a.a.e + 1;
                    } else {
                        func_00152720(&a, a.a.e, &t2);
                    }
                }
                i = i + 1;
            } while (i < 7);
            if (func_00195788(func_00196028(), 12)) {
                t3 = 23;
                if (a.a.e != a.a.c) {
                    if (a.a.e) *a.a.e = t3;
                    a.a.e = a.a.e + 1;
                } else {
                    func_00152720(&a, a.a.e, &t3);
                }
            }
            if (func_00195788(func_00196028(), 13)) {
                t4 = 24;
                if (a.a.e != a.a.c) {
                    if (a.a.e) *a.a.e = t4;
                    a.a.e = a.a.e + 1;
                } else {
                    func_00152720(&a, a.a.e, &t4);
                }
            }
            if (func_00195788(func_00196028(), 11)) {
                t5 = 22;
                if (a.a.e != a.a.c) {
                    if (a.a.e) *a.a.e = t5;
                    a.a.e = a.a.e + 1;
                } else {
                    func_00152720(&a, a.a.e, &t5);
                }
            }
            if (func_00195788(func_00196028(), 14)) {
                t6 = 25;
                if (a.a.e != a.a.c) {
                    if (a.a.e) *a.a.e = t6;
                    a.a.e = a.a.e + 1;
                } else {
                    func_00152720(&a, a.a.e, &t6);
                }
            }
            break;
    }
    
    b.vt = D_0044DBA0;
    b.a.b = 0;
    b.a.e = 0;
    b.a.c = 0;
    b.b.b = 0;
    b.b.e = 0;
    b.b.c = 0;
    b.y = 1;
    func_00152688(&b);
    
    i = 0;
    do {
        t7 = (unsigned short)i;
        if (b.a.e != b.a.c) {
            if (b.a.e) *b.a.e = t7;
            b.a.e = b.a.e + 1;
        } else {
            func_00152720(&b, b.a.e, &t7);
        }
        i = i + 1;
    } while (i < 10);
    
    for (i = first; i < first + count; i = i + 1) {
        func_00152918(&a, &aa);
        func_00152918(&b, &bb);
        o = func_0017E620();
        v = *o;
        func_001D2458(str, ((s32(*)(void*, s32, s32))(*(void**)(v + 44)))((char*)o + *(s16*)(v + 40), 57, bb));
        func_001965F0(func_00196E10(), i, str);
        func_001966C0(func_00196E10(), i, aa);
        ctx = func_00196E10();
        func_00196790(ctx, i, *(s32*)(func_001189C0() + aa * 52 + 4));
        func_00196860(func_00196E10(), i, bb);
        func_00196930(func_00196E10(), i, 0.0f);
        func_00196A00(func_00196E10(), i, 0.0f);
        func_00196AD0(func_00196E10(), i, 0);
        func_00196BA0(func_00196E10(), i, 0);
        func_00196C70(func_00196E10(), i, 0);
        func_00196D40(func_00196E10(), i, 0);
    }
    
    b.vt = D_0044DBA0;
    {
        s32 *b_ptr = b.b.b;
        s32 n = b.b.c - b_ptr;
        if (n != 0) {
            if (n * 4 != 0) {
                func_002B2028(b_ptr);
            } else {
                *b_ptr = (s32)D_0040E618[-1];
                D_0040E618[-1] = (u32)b_ptr;
            }
        }
    }
    {
        s32 *b_ptr = b.a.b;
        s32 n = b.a.c - b_ptr;
        if (n != 0) {
            if (n * 4 != 0) {
                func_002B2028(b_ptr);
            } else {
                *b_ptr = (s32)D_0040E618[-1];
                D_0040E618[-1] = (u32)b_ptr;
            }
        }
    }
    
    a.vt = D_0044DBA0;
    {
        s32 *b_ptr = a.b.b;
        s32 n = a.b.c - b_ptr;
        if (n != 0) {
            if (n * 4 != 0) {
                func_002B2028(b_ptr);
            } else {
                *b_ptr = (s32)D_0040E618[-1];
                D_0040E618[-1] = (u32)b_ptr;
            }
        }
    }
    {
        s32 *b_ptr = a.a.b;
        s32 n = a.a.c - b_ptr;
        if (n != 0) {
            if (n * 4 != 0) {
                func_002B2028(b_ptr);
            } else {
                *b_ptr = (s32)D_0040E618[-1];
                D_0040E618[-1] = (u32)b_ptr;
            }
        }
    }
}
