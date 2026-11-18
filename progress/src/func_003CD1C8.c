void func_003B93F0(void *arg0, s32 arg1) {
    void *node = *(void **)arg0;
    if (node) {
        do {
            void *vt = *(void **)((u8 *)node + 0x10);
            ((void (*)(void *, s32))((u8 *)vt + 0x5C))((u8 *)node + *(s16 *)((u8 *)vt + 0x58), arg1);
            node = *(void **)((u8 *)node + 4);
        } while (node);
    }
}

extern void **func_001D6BB0(void);
extern s32 func_00200550(void *, void *, f32, f32);

void func_003BFEA0(void *arg0, s32 arg1) {
    void *obj = *func_001D6BB0();
    void *vt = *(void **)obj;
    void *result = ((void *(*)(void *))((u8 *)vt + 0x54))((u8 *)obj + *(s16 *)((u8 *)vt + 0x50));
    if (result) {
        if (func_00200550(result, (u8 *)arg0 + 0x18, *(f32 *)((u8 *)arg0 + 0x24), 1.0f) != 0) {
            if (*(f32 *)((u8 *)arg0 + 0x24) != -1.0f) {
                func_003B93F0(arg0, arg1);
            }
        }
    }
}

extern s32 PollSema_2(s32);
extern s32 SignalSema_2(s32);
extern s32 D_004361F0;
extern s32 D_004361F4;
typedef struct { s32 w[10]; } Rpc8;
extern Rpc8 D_0049BC40;
extern s32 D_0049BCC0[];
extern s32 D_0049D200[];
extern s32 func_00405E90(void *, s32, s32, void *, s32, void *, s32, s32, s32);

s32 func_003CD1C8(s32 a) {
    s32 r;
    if (PollSema_2(D_004361F4) < 0) return -200;
    if (D_0049BC40.w[9] == 0) {
        SignalSema_2(D_004361F4);
        return -100;
    }
    D_0049BCC0[0] = a;
    r = func_00405E90(&D_0049BC40, 0xA, 1, &D_0049BCC0, 0x30, &D_0049D200, 4, 0, 0);
    if (r == 0) {
        D_004361F0 = 0xA;
    } else {
        SignalSema_2(D_004361F4);
    }
    return r;
}

s32 func_003CE5A8(void **arg0, s8 arg1, u32 arg2) {
    u8 *haystack = (u8 *)*arg0;
    s32 hay_len = *(s32 *)(haystack - 0x10);
    s32 start;
    s32 pos;
    if (hay_len == 0) return -1;
    start = hay_len - 1;
    if ((u32)arg2 < (u32)start) start = (s32)arg2;
    start++;
    if (start <= 0) return -1;
    pos = start - 1;
    for (;;) {
        if (haystack[pos] == arg1) return pos;
        if (pos == 0) break;
        pos--;
    }
    return -1;
}
