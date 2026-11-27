#include "context.h"

extern void *func_003CD828(void *hdr, void *data);
extern void func_003CD948(void **slot, s32 a1, s32 a2, s32 a3, s32 a4);
extern s32 func_003FA9B8(s32 arg2, void *data);
extern void func_002B2028(void *hdr);
extern void *D_00437E18[];

typedef struct {
    void *next;
    s32 size;
    s32 ref;
    s32 shared;
} BufHdr;

void **func_003CF118(void **out, void **in, s32 arg2) {
    void *cur = *in;
    BufHdr *hdr = (BufHdr *)((u8 *)cur - 0x10);
    void *work;
    s32 extra;
    BufHdr *after_hdr;
    void *final_ptr;

    if (hdr->shared != 0) {
        cur = func_003CD828(hdr, cur);
    } else {
        hdr->ref += 1;
    }

    work = cur;
    extra = func_003FA9B8(arg2, work);
    func_003CD948(&work, *(s32 *)((u8 *)work - 0x10), 0, arg2, extra);

    after_hdr = (BufHdr *)((u8 *)work - 0x10);
    if (after_hdr->shared != 0) {
        final_ptr = func_003CD828(after_hdr, work);
    } else {
        after_hdr->ref += 1;
        final_ptr = work;
    }
    *out = final_ptr;

    hdr = (BufHdr *)((u8 *)work - 0x10);
    hdr->ref -= 1;
    if (hdr->ref == 0) {
        u32 total = (u32)(hdr->size + 0x10);
        if (total >= 0x81U) {
            func_002B2028(hdr);
        } else {
            u32 bucket = (((u32)(hdr->size + 0x17) >> 3) - 1U);
            void **slot = &D_00437E18[bucket];
            hdr->next = *slot;
            *slot = hdr;
        }
    }

    return out;
}
