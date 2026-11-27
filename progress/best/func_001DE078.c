#include "context.h"

typedef struct { s8 pad[0x18]; s32 f18, f1C, f20, f24; } S_Arg0;
typedef struct { s32 f00; void *f04, *f08; } S_Arg1;

extern void func_001EA6F0(void *, void *, void *);

void func_001DE078(void *arg0, void *arg1) {
    S_Arg0 *a0 = (S_Arg0 *)arg0;
    S_Arg1 *b1 = (S_Arg1 *)arg1;
    s32 buf[10];
    s32 v2 = 2;

    do { v2 -= 1; } while (v2 != -1);

    buf[0] = a0->f18;
    buf[1] = a0->f1C;
    buf[2] = a0->f20;
    buf[3] = a0->f1C;
    buf[4] = a0->f18;
    buf[5] = a0->f24;
    buf[8] = a0->f18;
    buf[9] = a0->f1C;

    if (b1->f04 != b1->f08) {
        buf[9] = a0->f24;
        void *dst = b1->f04;
        s32 *src = buf;
        s32 cnt = 2;
        do {
            cnt -= 1;
            ((s32 *)dst)[0] = src[0];
            ((s32 *)dst)[1] = src[1];
            src += 2;
            dst = (char *)dst + 8;
        } while (cnt != -1);
        b1->f04 = (char *)b1->f04 + 0x18;
    } else {
        func_001EA6F0(b1, b1->f04, buf);
    }

    buf[0] = a0->f18;
    buf[1] = a0->f24;
    buf[3] = a0->f1C;
    buf[4] = a0->f20;
    buf[5] = a0->f24;
    buf[8] = a0->f20;
    buf[9] = a0->f1C;

    if (b1->f04 != b1->f08) {
        void *dst = b1->f04;
        s32 *src = buf;
        s32 cnt = 2;
        do {
            cnt -= 1;
            ((s32 *)dst)[0] = src[0];
            ((s32 *)dst)[1] = src[1];
            src += 2;
            dst = (char *)dst + 8;
        } while (cnt != -1);
        b1->f04 = (char *)b1->f04 + 0x18;
    } else {
        func_001EA6F0(b1, b1->f04, buf);
    }
}
