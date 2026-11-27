extern void func_00376188(void *, s32, void *, s32);
typedef struct { s32 f0, cur, end, fC; } D;
extern D D_0042EA78;
typedef struct { u32 w[8]; } S32;

void func_00374BD8(char *arg0, s32 arg1, s32 arg2) {
    s32 sp[8];
    s32 cnt, src8, t, limit;
    s32 off = arg1 << 4;
    char *q = arg0 + off;
    char *p = arg0 + off + 8;
    char *base = arg0 + 0x84;
    limit = arg1 + *(s32 *)(p + 0xC);
    src8 = *(s32 *)(q + 8);
    if (arg1 < limit) {
        D *d = &D_0042EA78;
        cnt = limit - arg1;
        do {
            s32 *b = (s32 *)base;
            sp[0] = src8 + b[3] * 4;
            sp[1] = arg2 + b[2];
            t = b[1];
            sp[3] = *(s32 *)(arg0 + 0x1C0);
            sp[2] = t;
            sp[4] = 0;
            sp[5] = 0;
            sp[7] = b[0];
            sp[6] = b[-1];
            if (d->cur != d->end) {
                if (d->cur != 0) {
                    *(S32 *)(u32)d->cur = *(S32 *)sp;
                    d->cur += 0x20;
                }
            } else {
                func_00376188(d, d->cur, sp, d->cur);
            }
            cnt--;
            base += 0x28;
        } while (cnt != 0);
    }
}
