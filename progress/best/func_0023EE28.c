#define W(p,o) (*(s32 *)((char *)(p) + (o)))
#define P(p,o) (*(void **)((char *)(p) + (o)))
extern void *D_002AD408(int);
extern void func_001CAB58(void *, void **, void **);
extern void func_001CAD18(void *, s32 *, s32 *);
extern void func_001CAED8(void *, void **, void **);
extern s32 func_0023F6E8(void *, s32);
extern s32 func_0023F730(void *, s32);
extern void func_00241160(void *);
extern void func_0024C090(void *, void *, void *);
extern void *func_0024F208(void *, void *);
extern void func_0024F6E0(void **, void *);
extern void *func_0024FDC8(void *);
extern void func_00250200(void *, void *);
extern void func_00250280(void *, void *, void *);
extern void func_00250350(void *, void *);
extern void *func_002591C8(void *, void *);

static inline void drop_ref(void *r) {
    if (r != 0) {
        s32 n = W(r,0) - 1;
        W(r,0) = n;
        if (n == 0) {
            void *vt = P(r,4);
            ((void (*)(void *, int))P(vt,0xC))((char *)r + (s16)W(vt,8), 3);
        }
    }
}

void *func_0023EE28(void *arg0, void *arg1) {
    void *sp30, *sp40, *sp48, **sp50;
    s32 sp44, sp4C;
    s32 n1, n2, n3, i;
    void *t;
    void *p12 = (char*)arg0 + 0xC;
    void *p18 = (char*)arg0 + 0x18;
    void *p24 = (char*)arg0 + 0x24;
    s32 one = 1, minus1 = -1;
    W(arg0,0)=0; P(arg0,4)=0; W(arg0,8)=0; W(arg0,0xC)=0;
    W(p12,8)=0; W(p12,4)=0;
    W(arg0,0x18)=0; W(p18,8)=0; W(p18,4)=0;
    P(arg0,0x24)=0; P(arg0,0x28)=0; W(arg0,0x2C)=0;
    W(arg0,0x34)=one; W(arg0,0x30)=minus1;

    t = func_0024F208(D_002AD408(0xC), P(arg1,0x24));
    if (P(arg0,0x24) != t) {
        drop_ref(P(arg0,0x24));
        P(arg0,0x24)=t;
        if (t) W(t,0)++;
    }
    t = func_0024F208(D_002AD408(0xC), P(arg1,0x28));
    if (P(arg0,0x28) != t) {
        drop_ref(P(arg0,0x28));
        P(arg0,0x28)=t;
        if (t) W(t,0)++;
    }

    n1 = (W(arg1,4) - (s32)P(arg1,0)) >> 2;
    func_0024F6E0(&sp30, P(arg0,0x24));
    if (sp30) {
        i = W(sp30,0x14);
        drop_ref(sp30);
    } else i = 0;
    for (s32 k = 0; k < n1; k++) {
        void *o = func_002591C8(D_002AD408(0x28), (void*)(s32)i);
        sp40 = o;
        W(o,8) = k;
        if (P(arg0,4) == P(arg0,8)) func_001CAB58(arg0, (void**)((char*)arg0+4), &sp40);
        else { if (P(arg0,4)) P(P(arg0,4),0) = o; W(arg0,4) += 4; }
        i += 0xC;
    }

    n2 = (W((char*)arg1+0xC,4) - (s32)P((char*)arg1+0xC,0)) >> 2;
    sp4C = n2;
    for (s32 k = 0; k < n2; k++) {
        void *e = *(void **)((char*)P((char*)arg1+0xC,0) + k*4);
        void *vt = P(e,4);
        s32 a = W(vt,8), b = W(P(P(e,0),0),8);
        void *base = P(arg0,0);
        void *o = D_002AD408(0x48);
        func_0024C090(o, (void*)(s32)W((char*)base + b*4,0), (void*)(s32)W((char*)base + a*4,0));
        sp44 = (s32)o;
        if (W(p12,4) != W(p12,8)) {
            if (P(p12,4)) W(P(p12,4),0) = sp44;
            W(p12,4) += 4;
        } else {
            func_001CAD18(p12, (s32*)((char*)p12+4), &sp44);
        }
    }

    n3 = (W((char*)arg1+0x18,4) - (s32)P((char*)arg1+0x18,0)) >> 2;
    if (n3 > 0) {
        void *v21 = p18;
        sp50 = &sp48;
        for (s32 k = 0; k < n3; k++) {
            sp48 = func_0024FDC8(D_002AD408(0x40));
            W(sp48,0x18) = k;
            void *e = *(void **)((char*)P((char*)arg1+0x18,0) + k*4);
            *(float *)((char*)sp48+0x28) = *(float *)((char*)e+0x28);
            void *lst = P(e,0);
            void *it = P(lst,0);
            void *tail = (char*)e+0x1C;
            if (it != lst) {
                do {
                    func_00250200(sp48, P((char*)P(arg0,0) + (s32)W(P(it,0),8)*4,0));
                    it = P(it,0);
                } while (it != P(e,0));
                tail = (char*)e+0x1C;
            }
            s32 m = (W(tail,4) - (s32)P(e,0x1C)) >> 2;
            for (s32 j = 0; j < m; j++) {
                void **slot = (void **)((char*)P(tail,0) + j*4);
                void *q = (char*)P(arg0,0) + (s32)W(P(*slot,0),8)*4;
                func_00250280(sp48, P(q,0), q);
            }
            if (P(v21,4) == P(v21,8)) func_001CAED8(v21, (void**)((char*)v21+4), sp50);
            else { if (P(v21,4)) P(P(v21,4),0) = sp48; W(v21,4) += 4; }
        }
    }

    for (s32 k = 0; k < sp4C; k++) {
        void *e = *(void **)((char*)P((char*)arg1+0xC,0) + k*4);
        s32 a = func_0023F730(arg1, W(e,0x18));
        s32 b = func_0023F730(arg1, W(e,0x1C)) * 4;
        void *d = *(void **)((char*)P(p12,0) + k*4);
        W(d,0x18) = (s32)P((char*)P(p18,0) + a*4, 0);
        W(d,0x1C) = (s32)P((char*)P(p18,0) + b, 0);
    }
    for (s32 k = 0; k < n3; k++) {
        void *e = *(void **)((char*)P((char*)arg1+0x18,0) + k*4);
        void *d = *(void **)((char*)P(p18,0) + k*4);
        void *lst = P(e,4);
        void *it = P(lst,0);
        if (it != lst) {
            do {
                func_00250350(d, P((char*)P(p12,0) + (s32)func_0023F6E8(arg1, W(it,8))*4,0));
                it = P(it,0);
            } while (it != P(e,4));
        }
    }
    func_00241160(arg0);
    return arg0;
}
