typedef struct { char *begin, *end, *cap; } Vec3;
extern void *func_002B1FC0(int);
extern void *func_003D2910(int);
extern void *func_00152D28(int);
extern void func_002B2028(void *);
extern void *func_003F93CC(void *, const void *, int);
extern u32 D_0040E618[];

void func_001C5CE0(Vec3 *v, char *pos, int *value) {
    char *initial = v->end;

    if (initial != v->cap) {
        char *e, *em4;
        int n, t;
        if (initial) *(int *)initial = *((int *)initial - 1);
        e = v->end;
        v->end = e + 4;
        t = *value;
        em4 = e - 4;
        n = em4 - pos;
        n = (n >> 2) << 2;
        func_003F93CC(e - n, pos, n);
        *(int *)pos = t;
        return;
    }

    {
        int count, bytes, prefix, suffix, oldcap;
        char *buf, *old, *out;

        count = (initial - v->begin) >> 2;
        count = count ? count * 2 : 1;

        bytes = count * 4;
        if (count) {
            buf = func_002B1FC0(bytes);
            if (!buf) buf = func_003D2910(bytes);
        } else {
            buf = (char *)D_0040E618[-1];
            if (!buf) buf = func_00152D28(0);
            else D_0040E618[-1] = *(u32 *)buf;
            bytes = 0;
        }

        old = v->begin;
        prefix = pos - old;
        out = buf + prefix;
        func_003F93CC(buf, old, (prefix >> 2) << 2);
        if (out) *(int *)out = *value;
        out += 4;
        suffix = v->end - pos;
        func_003F93CC(out, pos, (suffix >> 2) << 2);
        out += suffix;

        oldcap = (v->cap - old) >> 2;
        if (oldcap) {
            int obytes = oldcap << 2;
            if (obytes) func_002B2028(old);
            else { *(u32 *)old = D_0040E618[-1]; D_0040E618[-1] = (u32)old; }
        }

        v->end = out;
        v->cap = buf + bytes;
        v->begin = buf;
    }
}
