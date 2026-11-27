#include "context.h"

extern s32 D_002AD5A8(s32, u32);
extern void D_002AD530(s32);
extern void func_003F931C(s32, s32 *, s32);
extern s32 D_0043C000;

typedef struct {
    /* 0x00 */ s32 *buf;
    /* 0x04 */ s32 raw_alloc;
    /* 0x08 */ s32 cap;
    /* 0x0C */ s32 count;
    /* 0x10 */ s32 heap_id;
} PacketBuf;

void func_0031E310(void *arg0) {
    PacketBuf *pb = *(PacketBuf **)((u8 *)arg0 + 0x14);
    u32 req = (u32)(pb->count + 0x24);

    if ((pb->cap - pb->count) < 4) {
        u32 size = 1;
        s32 raw;
        s32 aligned;
        s32 count = pb->count;

        D_0043C000 = pb->heap_id;
        while (size < req) {
            size <<= 1;
        }

        raw = D_002AD5A8((s32)(size * 4), req);
        aligned = (raw + 0x7F) & ~0x7F;

        if (count > 0) {
            func_003F931C(aligned, pb->buf, count * 4);
        }
        if (pb->raw_alloc != 0) {
            D_002AD530(pb->raw_alloc);
        }

        pb->raw_alloc = raw;
        pb->buf = (s32 *)aligned;
        pb->cap = (s32)(size - 0x20);
        D_0043C000 = 0;
    }

    pb->buf[pb->count++] = 0x70000000;
    pb->buf[pb->count++] = 0;
    pb->buf[pb->count++] = 0;
    pb->buf[pb->count++] = 0;
}
