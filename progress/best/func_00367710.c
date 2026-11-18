extern void *func_002B1FC0(s32);
extern void *func_003D2910(s32);
extern void *func_00152D28(s32);
extern void func_003F93CC(void *, void *, s32);
extern u32 D_0040E618[];

typedef struct { s32 begin; s32 end; } S2;
typedef struct { s32 f0; s32 f4; s32 f8; } V;

void *func_00367710(void *arg0, s32 arg1, void *arg2) {
    s32 i;
    V *p;
    S2 *a2;
    s32 n;
    s32 size;
    void *buf;
    s32 b, e, cnt;

    p = (V *)arg0;
    a2 = (S2 *)arg2;
    for (i = 0; i < arg1; i++, p++) {
        if (p != NULL) {
            p->f0 = 0;
            p->f4 = 0;
            p->f8 = 0;
            n = (a2->end - a2->begin) >> 2;
            if (n != 0) {
                size = n * 4;
                if (size != 0) {
                    buf = func_002B1FC0(size);
                    if (buf == NULL) {
                        buf = func_003D2910(size);
                    }
                } else {
                    if (D_0040E618[-1] != 0) {
                        buf = (void *)D_0040E618[-1];
                        D_0040E618[-1] = *(u32 *)buf;
                    } else {
                        buf = func_00152D28(0);
                    }
                }
            } else {
                buf = NULL;
                size = 0;
            }
            /* note: assembly when n==0 sets buf=0,size=0; when size==0 path... handled */
            p->f0 = (s32)buf;
            p->f8 = (s32)buf + (n==0?0:size);
            p->f4 = (s32)buf;
            b = a2->begin;
            e = a2->end;
            cnt = (e - b) >> 2;
            func_003F93CC(buf, (void *)b, cnt * 4);
            p->f4 = (s32)buf + (e - b);
        }
    }
    return (void *)p;
}
