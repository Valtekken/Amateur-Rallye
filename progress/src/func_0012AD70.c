extern s32 func_002B1FC0(s32);
extern s32 func_002BA330(s32, s32, s32, s32);
s32 func_002BA390(s32 *arg0, s32 arg1, s32 arg2) {
    s32 n = func_002BA330(0, 0, arg1, arg2);
    if (n > 0) {
        s32 sz = n + 1;
        s32 *buf = (s32 *)func_002B1FC0(sz);
        *arg0 = (s32)buf;
        if (buf != NULL) return func_002BA330((s32)buf, sz, arg1, arg2);
        return -1;
    }
    return n;
}

#define F(p,o) (*(f32 *)((u8 *)(p)+(o)))
#define I(p,o) (*(s32 *)((u8 *)(p)+(o)))
void func_0012BBF8(void *arg0) {
    s32 diff = I(arg0,0x14) - I(arg0,0x10);
    s32 count = (diff * (s32)0xB6DB6DB7) >> 2;
    if (count > 0) {
        f32 step = 6.283185f / (f32)count;
        f32 val = 0.0f;
        s32 i = count, off = 0;
        do {
            i--;
            F((void *)I(arg0,0x10) + off, 4) = val;
            off += 0x1C;
            val += step;
        } while (i != 0);
    }
}

void func_0012ADE0(void *arg0) {
    f32 v = F(arg0,0x14);
    if (I(arg0,0x18) != 0) {
        F(arg0,0x14) = v * 0.7f;
        return;
    }
    F(arg0,0x14) = 1.0f - ((1.0f - v) * 0.7f);
}

void func_0012AD70(void *arg0, void *arg1, s8 arg2, f32 fp) {
    u8 *a = (u8 *)arg0;
    u8 *t = a + 4;
    F(a,4) = F(arg1,0);
    F(t,4) = F(arg1,4);
    F(t,8) = F(arg1,8);
    F(a,0x10) = fp;
    F(a,0x14) = 1.0f;
    I(a,0x18) = 1;
    *(s8 *)(a+0x1C) = arg2;
}
