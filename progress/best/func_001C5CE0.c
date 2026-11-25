typedef struct { char *begin, *end, *cap; } Vec3;
extern void *func_002B1FC0(int);
extern void *func_003D2910(int);
extern void *func_00152D28(int);
extern void func_002B2028(void *);
extern void *func_003F93CC(void *, const void *, int);
extern u32 D_0040E618[];

#define alloc4(bytes) ({ \
    int _b = (bytes); \
    char *_p; \
    if (_b) { \
        _p = func_002B1FC0(_b); \
        if (!_p) _p = func_003D2910(_b); \
    } else { \
        _p = (char *)D_0040E618[-1]; \
        if (!_p) _p = func_00152D28(0); \
        else D_0040E618[-1] = *(int *)_p; \
    } \
    _p; \
})

#define do_shift(first, last, dest) do { \
    int _n = (((last) - (first)) >> 2) * 4; \
    func_003F93CC((dest) - _n, (first), _n); \
} while(0)

#define do_dealloc(p, n) do { \
    int _n = (n); \
    if (_n) { \
        if (_n * 4) func_002B2028(p); \
        else { \
            *(int *)(p) = D_0040E618[-1]; \
            D_0040E618[-1] = (u32)(p); \
        } \
    } \
} while(0)

void func_001C5CE0(Vec3 *v, char *pos, int *value) {
    char *initial = v->end;
    char *buf;
    char *out;
    char *old;
    int count, bytes, prefix, suffix;
    int t;

    if (initial != v->cap) {
        if (initial) *(int *)initial = *(int *)(initial - 4);
        v->end = initial + 4;
        t = *value;
        do_shift(pos, initial - 4, initial);
        *(int *)pos = t;
        return;
    }

    count = (initial - v->begin) >> 2;
    count = count ? count * 2 : 1;

    bytes = count * 4;
    buf = count ? alloc4(bytes) : 0;
    if (!count) bytes = 0;

    old = v->begin;
    prefix = pos - old;
    out = buf + prefix;
    func_003F93CC(buf, old, (prefix >> 2) * 4);
    if (out) *(int *)out = *value;
    out += 4;
    suffix = (v->end - pos);
    func_003F93CC(out, pos, (suffix >> 2) * 4);
    do_dealloc(old, (v->cap - old) >> 2);
    v->end = out + suffix;
    v->cap = buf + bytes;
    v->begin = buf;
}
