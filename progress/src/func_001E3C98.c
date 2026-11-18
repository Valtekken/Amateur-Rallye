typedef struct { s32 value; } CopyTag;
extern s32 func_002C5160(s32, s32, s32, CopyTag);

s32 func_003978C8(register s32 a, register s32 b, register s32 c, register s32 d) {
    return func_002C5160(a, b, c, (CopyTag){0});
}

extern void func_001E4ED0(void *);
void func_001E3C98(void *arg0, s32 arg1) {
    void *cur = *(void**)arg0;
    void *end = *(void**)((char*)arg0 + 4);
    if (cur != end) {
        do {
            if ((((s32*)cur)[2] ^ 0xC) != 0 && ((s32*)cur)[5] == arg1) {
                func_001E4ED0(cur);
            }
            cur = (char*)cur + 0x1C;
            end = *(void**)((char*)arg0 + 4);
        } while (cur != end);
    }
}

void func_001E3990(void *arg0) {
    s32 *cur = *(s32**)arg0;
    s32 *end = *(s32**)((char*)arg0 + 4);
    if (cur != end) {
        do {
            func_001E4ED0(cur);
            cur = (s32*)((char*)cur + 0x1C);
            end = *(s32**)((char*)arg0 + 4);
        } while (cur != end);
    }
}

extern void *func_001E4150(void);
s32 func_001E37E8(void) {
    void *t = func_001E4150();
    s32 v = 0;
    if (*(s32*)((char*)t + 8) == 9) {
        v = *(s32*)((char*)t + 4);
    }
    return v;
}
