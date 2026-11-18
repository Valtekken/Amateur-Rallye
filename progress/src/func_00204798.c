typedef struct { void **begin, **end; void **cap; } Vec;
typedef struct { char _0[8]; s16 off; s16 _12; void (*fn)(void *); } Vtbl8;
typedef struct { char _0[0x18]; s16 off; s16 _12; void (*fn)(void *); } Vtbl18;

void func_00204800(Vec *p) {
    void **it = p->begin;
    if (it != p->end) {
        void *g;
        do {
            g = *it;
            if (g != NULL) {
                Vtbl8 *vt = *(Vtbl8 **)g;
                vt->fn((char *)g + vt->off);
            }
            it++;
        } while (it != p->end);
    }
}

void func_00204798(Vec *p) {
    void **it = p->begin;
    if (it != p->end) {
        void *g;
        do {
            g = *it;
            if (g != NULL) {
                Vtbl18 *vt = *(Vtbl18 **)g;
                vt->fn((char *)g + vt->off);
            }
            it++;
        } while (it != p->end);
    }
}

void func_00204588(void *arg0, void *arg1) {
    /* placeholder */
}
