typedef struct { char *b, *e, *c; } Vec;
extern u32 D_0040E618[];
extern void *D_00478BA8[];
extern void D_002AD390(void *);
extern void func_001DF180(void *, s32);
extern void func_001EF728(void *, s32);
extern void func_0021D450(void *, s32);
extern void func_002B2028(void *);

void func_001F2898(void *obj, s32 flag)
{
    void **self = (void **)obj;
    Vec *v;

    self[4] = D_00478BA8;

    if (self[7])
        func_001EF728(self[7], 3);

    v = (Vec *)self[8];
    if (v) {
        char *p = v->b;
        while (p < v->e)
            p += 0x10;
        {
            char *arg = v->b;
            char *c = v->c;
            s32 n = ((s32)c - (s32)arg) >> 4;
            if (n) {
                if (n * 0x10)
                    func_002B2028(arg);
                else {
                    *(u32 *)arg = D_0040E618[-1];
                    D_0040E618[-1] = (u32)arg;
                }
            }
            D_002AD390(v);
        }
    }

    if (self[9])
        func_0021D450(self[9], 3);

    v = (Vec *)self[10];
    if (v) {
        char *p = v->b;
        while (p < v->e)
            p += 0x0C;
        {
            char *arg = v->b;
            char *c = v->c;
            s32 n = (((s32)c - (s32)arg) * (s32)0xAAAAAAAB) >> 2;
            if (n) {
                if (n * 0x0C)
                    func_002B2028(arg);
                else {
                    *(u32 *)arg = D_0040E618[-1];
                    D_0040E618[-1] = (u32)arg;
                }
            }
            D_002AD390(v);
        }
    }

    v = (Vec *)self[11];
    if (v) {
        char *p = v->b;
        while (p < v->e)
            p += 0x0C;
        {
            char *arg = v->b;
            char *c = v->c;
            s32 n = (((s32)c - (s32)arg) * (s32)0xAAAAAAAB) >> 2;
            if (n) {
                if (n * 0x0C)
                    func_002B2028(arg);
                else {
                    *(u32 *)arg = D_0040E618[-1];
                    D_0040E618[-1] = (u32)arg;
                }
            }
            D_002AD390(v);
        }
    }

    v = (Vec *)self[12];
    if (v) {
        char *p = v->b;
        while (p < v->e)
            p += 0x0C;
        {
            char *arg = v->b;
            char *c = v->c;
            s32 n = (((s32)c - (s32)arg) * (s32)0xAAAAAAAB) >> 2;
            if (n) {
                if (n * 0x0C)
                    func_002B2028(arg);
                else {
                    *(u32 *)arg = D_0040E618[-1];
                    D_0040E618[-1] = (u32)arg;
                }
            }
            D_002AD390(v);
        }
    }

    v = (Vec *)self[13];
    if (v) {
        char *p = v->b;
        while (p < v->e)
            p += 0x34;
        {
            char *arg = v->b;
            char *c = v->c;
            s32 n = (((s32)c - (s32)arg) * (s32)0xC4EC4EC5) >> 2;
            if (n) {
                if (n * 0x34)
                    func_002B2028(arg);
                else {
                    *(u32 *)arg = D_0040E618[-1];
                    D_0040E618[-1] = (u32)arg;
                }
            }
            D_002AD390(v);
        }
    }

    v = (Vec *)self[14];
    if (v) {
        char *p = v->b;
        while (p < v->e)
            p += 0x0C;
        {
            char *arg = v->b;
            char *c = v->c;
            s32 n = (((s32)c - (s32)arg) * (s32)0xAAAAAAAB) >> 2;
            if (n) {
                if (n * 0x0C)
                    func_002B2028(arg);
                else {
                    *(u32 *)arg = D_0040E618[-1];
                    D_0040E618[-1] = (u32)arg;
                }
            }
            D_002AD390(v);
        }
    }

    D_002AD390(self[5]);
    func_001DF180(obj, flag);
}
