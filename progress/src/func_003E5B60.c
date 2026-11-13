extern void func_003E4F70(void);
extern s32 func_003E5240(void *, s32);
extern void func_003E5348(void *, s32);
extern s32 func_003E5438(void *, s32);
extern void func_003E5B60(void *);
extern void func_003E0EF0(u32);

void func_003E5B60(void *arg0) {
    while (func_003E5438(arg0, 1)) {
        func_003E5348(arg0, 8);
    }
}

s32 func_003E5608(void *arg0) {
    *(s32 *)((u8 *)arg0 + 0x1B4) = func_003E5438(arg0, 5);
    if (func_003E5438(arg0, 1)) {
        func_003E5438(arg0, 1);
        func_003E5348(arg0, 7);
        func_003E5B60(arg0);
    }
    return 0;
}

void func_003E5588(void *arg0) {
    u32 v;
    func_003E4F70();
    v = (*(u32 *)0x10002020 & 7);
    v = ((u32)(-(s32)v)) & 7;
    if (v) {
        func_003E5348(arg0, v);
    }
    while (func_003E5240(arg0, 0x18) != 1) {
        func_003E5348(arg0, 0x18);
    }
}

s64 func_003E5018(void *arg0) {
    s64 res = *(s64 *)0x10002000;
    if (res >= 0) return res;
    if (*(u32 *)0x10002010 & 0x4000) return res;

    s32 cnt = 0;
    do {
        if (++cnt > 0x1389) {
            func_003E0EF0(*(u32 *)((u8 *)arg0 + 0x858));
            cnt = 0;
        }
        res = *(s64 *)0x10002000;
        if (res >= 0) return res;
    } while ((*(u32 *)0x10002010 & 0x4000) == 0);
    return cnt;
}
