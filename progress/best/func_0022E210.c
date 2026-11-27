extern void func_0022E458(void *, void *, void **);
extern void func_0022E778(void *, s32);
extern void func_0022EBD8(void *);
extern void func_0022ECF8(void *, s32, s32);
extern void func_0022EE08(void *, s32, s32);
extern void func_0022EEB0(void *, s32, s32);
extern void func_0022F160(void *);
extern void func_0022F728(void *);
extern void func_0022FB08(void *);
extern void func_0022FDF0(void *, void *, void **);

typedef struct { s16 off; char pad[2]; void (*dtor)(void *, s32, void *); } VT;
typedef struct { s32 count; VT *vt; } RC;

static void dec(void *r) {
    if (r) {
        RC *rc = (RC *)r;
        rc->count--;
        if (rc->count == 0) {
            VT *vt = rc->vt;
            vt->dtor((char *)r + vt->off, 3, r);
        }
    }
}
static void inc(void *r) { if (r) ((RC *)r)->count++; }

void func_0022E210(void *arg0, void **arg1) {
    char local[0x80];
    void *sp10 = *arg1;
    inc(sp10);
    func_0022E458(local, arg0, &sp10);
    void *old = *arg1;
    void *sp0 = *(void **)local;
    if (old != sp0) {
        dec(old);
        *arg1 = sp0;
        inc(sp0);
    }
    dec(sp0);
    RC *r = (RC *)*arg1;
    s32 v16 = *(s32 *)((char *)r + 0x8);
    s32 v17 = *(s32 *)((char *)r + 0x10);
    func_0022E778(arg0, v16);
    func_0022ECF8(arg0, v16, v17);
    func_0022EE08(arg0, v16, v17);
    func_0022EEB0(arg0, v16, v17);
    func_0022F160(arg0);
    func_0022F728(arg0);
    void *sp20 = *(void **)((char *)arg0 + 0x38);
    inc(sp20);
    func_0022FDF0(local, arg0, &sp20);
    void *old2 = *(void **)((char *)arg0 + 0x38);
    void *sp0b = *(void **)local;
    if (old2 != sp0b) {
        dec(old2);
        *(void **)((char *)arg0 + 0x38) = sp0b;
        inc(sp0b);
    }
    dec(sp0b);
    func_0022FB08(arg0);
    func_0022EBD8(arg0);
    dec(*arg1);
}
