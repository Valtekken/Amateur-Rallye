typedef struct {
    f32 f0, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11;
    s32 i0, i1;
} RecC;

typedef struct {
    RecC *begin;
    RecC *end;
    RecC *lim;
} VecC;

#define COPY_RECC(d, s) do { \
    (d)->f0 = (s)->f0; (d)->f1 = (s)->f1; \
    (d)->f2 = (s)->f2; (d)->f3 = (s)->f3; \
    (d)->f4 = (s)->f4; (d)->f5 = (s)->f5; \
    (d)->f6 = (s)->f6; (d)->f7 = (s)->f7; \
    (d)->f8 = (s)->f8; (d)->f9 = (s)->f9; \
    (d)->f10 = (s)->f10; (d)->f11 = (s)->f11; \
    (d)->i0 = (s)->i0; (d)->i1 = (s)->i1; \
} while (0)

#define DIV56C(x) ((s32)(((s32)(x) * (s32)0xB6DB6DB7) >> 3))

extern void *func_00152D28(s32, void *, void *);
extern void *func_001C6D18(void *, void *, void *, s32);
extern void *func_002B1FC0(s32);
extern void func_002B2028(void *);
extern void *func_003D2910(s32);
extern u32 D_0040E618[];

void func_001C83A8(VecC *v, RecC *pos, RecC *val) {
    RecC *end = v->end;
    RecC *last, *src, *dst;
    RecC *newb, *res, *p;
    RecC tmp;
    s32 n, newn, bytes;

    if (end != v->lim) {
        if (end != NULL) {
            last = (RecC *)((char *)end - 0x38);
            COPY_RECC(end, last);
            n = DIV56C((u32)last - (u32)pos);
            src = end;
            dst = (RecC *)((char *)end + 0x38);
            if (n > 0) {
                do {
                    src = (RecC *)((char *)src - 0x38);
                    dst = (RecC *)((char *)dst - 0x38);
                    COPY_RECC(dst, src);
                    n--;
                } while (n > 0);
            }
        }
        COPY_RECC(&tmp, val);
        COPY_RECC(pos, &tmp);
        v->end = (RecC *)((char *)end + 0x38);
        return;
    }

    n = DIV56C((u32)end - (u32)v->begin);
    newn = (n != 0) ? n * 2 : 1;
    bytes = newn * 0x38;
    if (newn != 0) {
        if (bytes != 0) {
            newb = func_002B1FC0(bytes);
            if (newb == NULL) newb = func_003D2910(bytes);
        } else if (D_0040E618[-1] != 0) {
            newb = (RecC *)D_0040E618[-1];
            D_0040E618[-1] = *(u32 *)newb;
        } else {
            newb = func_00152D28(0, (void *)D_0040E618[-1], end);
        }
    } else {
        newb = NULL;
    }

    res = func_001C6D18(v->begin, pos, newb, 0);
    if (res != NULL) COPY_RECC(res, val);
    res = func_001C6D18(pos, v->end, (RecC *)((char *)res + 0x38), 0);

    p = v->begin;
    if ((u32)p < (u32)v->end) {
        do {
            p = (RecC *)((char *)p + 0x38);
        } while ((u32)p < (u32)v->end);
    }

    n = DIV56C((u32)v->lim - (u32)v->begin);
    if (n != 0) {
        if ((n * 0x38) != 0) {
            func_002B2028(v->begin);
        } else {
            *(u32 *)v->begin = D_0040E618[-1];
            D_0040E618[-1] = (u32)v->begin;
        }
    }

    v->end = res;
    v->begin = newb;
    v->lim = (RecC *)((char *)newb + bytes);
}
