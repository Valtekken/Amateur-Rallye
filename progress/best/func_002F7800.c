typedef struct RingBuf {
    u8 *base;
    u8 *cur;
    u8 *end;
} RingBuf;

typedef struct Mgr {
    RingBuf *unk_60;
    RingBuf *unk_64;
    s32 unk_68;
    RingBuf *unk_6C;
    RingBuf *unk_70;
    s32 unk_74;
} Mgr;

typedef struct S16 {
    s32 a, b, c, d;
} S16;

extern s32 func_002B1FC0(s32 size);
extern s32 func_003D2910(s32 size);
extern void func_002B2028(u8 *ptr);
extern u16 *func_002FAC50(u16 *arg0, u16 *arg1, u16 *arg2, s32 zero);
extern void *func_002FAC80(void *src, void *end, void *dst, s32 zero);
extern void func_002FACC8(RingBuf *buf, u8 *cur, s32 *stack);
extern u32 D_0040E618;

void func_002F7800(Mgr *mgr) {
    volatile char pad[0x20];
    RingBuf *buf6C;
    u8 *cur6C;
    u32 diff;
    s32 count;
    u8 *base6C;
    s32 count2;
    u8 *newbuf;
    u8 *cur;
    u8 *end;
    u8 *cur2;
    s32 diff2;
    u32 *freelist;
    u32 next;
    RingBuf *buf60;
    u8 *cur60;
    u32 diff3;
    s32 count3;
    u8 *base60;
    s32 count4;
    u8 *newbuf2;
    u8 *cur3;
    u8 *end3;
    u8 *p;
    u8 *cur4;
    s32 diff4;
    u8 *cur5;
    s32 sp0, sp4, sp8, spC, sp10, sp14, sp18, sp1C;
    u8 *cur6;
    S16 *src;
    S16 *dst;
    
    buf6C = mgr->unk_6C;
    cur6C = buf6C->cur;
    diff = buf6C->end - cur6C;
    count = (s32)diff >> 1;
    if ((u32)count < 0x400) {
        base6C = buf6C->base;
        count2 = (base6C - cur6C) >> 1;
        newbuf = (u8 *)func_002B1FC0(0x800);
        if (newbuf == 0) {
            newbuf = (u8 *)func_003D2910(0x800);
        }
        func_002FAC50((u16 *)cur6C, (u16 *)base6C, (u16 *)newbuf, 0);
        
        cur = buf6C->cur;
        end = buf6C->end;
        if (cur < end) {
            do {
                cur += 2;
            } while (cur < end);
        }
        
        cur2 = buf6C->cur;
        diff2 = (buf6C->end - cur2) >> 1;
        if (diff2 != 0) {
            if (diff2 * 2 != 0) {
                func_002B2028(cur2);
            } else {
                freelist = (u32 *)D_0040E618;
                next = freelist[-1];
                *cur2 = next;
                freelist[-1] = (u32)cur2;
            }
        }
        
        buf6C->end = newbuf + 0x800;
        buf6C->cur = newbuf + count2 * 2;
        buf6C->base = newbuf;
    }
    
    buf60 = mgr->unk_60;
    cur60 = buf60->cur;
    diff3 = buf60->end - cur60;
    count3 = diff3 >> 4;
    if ((u32)count3 < 0x400) {
        base60 = buf60->base;
        count4 = (base60 - cur60) >> 4;
        newbuf2 = (u8 *)func_002B1FC0(0x4000);
        if (newbuf2 == 0) {
            newbuf2 = (u8 *)func_003D2910(0x4000);
        }
        func_002FAC80((void *)cur60, (void *)base60, (void *)newbuf2, 0);
        
        cur3 = buf60->cur;
        end3 = buf60->end;
        if (cur3 < end3) {
            p = cur3 + 0x10;
            do {
                p += 0x10;
            } while (p < end3);
        }
        
        cur4 = buf60->cur;
        diff4 = (buf60->end - cur4) >> 4;
        if (diff4 != 0) {
            if (diff4 * 0x10 != 0) {
                func_002B2028(cur4);
            } else {
                freelist = (u32 *)D_0040E618;
                next = freelist[-1];
                *cur4 = next;
                freelist[-1] = (u32)cur4;
            }
        }
        
        buf60->end = newbuf2 + 0x4000;
        buf60->cur = newbuf2 + count4 * 0x10;
        buf60->base = newbuf2;
    }
    
    cur5 = buf60->cur;
    sp0 = 0; sp4 = 1; sp8 = -1; spC = -1;
    sp10 = 0; sp14 = -1; sp18 = 0; sp1C = -1;
    
    if (cur5 != buf60->end) {
        if (cur5 != 0) {
            src = (S16 *)&sp0;
            dst = (S16 *)(cur5 + 0x7);
            *dst = *src;
            dst = (S16 *)(cur5 + 0xF);
            dst->a = sp8;
        }
        buf60->cur = cur5 + 0x10;
    } else {
        func_002FACC8(buf60, cur5, &sp0);
    }
    
    cur6 = buf60->cur;
    if (cur6 != buf60->end) {
        if (cur6 != 0) {
            src = (S16 *)&sp10;
            dst = (S16 *)(cur6 + 0x17);
            *dst = *src;
            dst = (S16 *)(cur6 + 0x1F);
            dst->a = sp18;
        }
        buf60->cur = cur6 + 0x10;
    } else {
        func_002FACC8(buf60, cur6, &sp10);
    }
}
