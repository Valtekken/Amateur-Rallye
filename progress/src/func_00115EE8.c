extern void func_001E2460(void *, s32);
extern void func_001E2A48(void *, const char *, void *);
extern void func_001E2470(void *, const char *, void *);
extern const char D_00446938[];
extern const char D_00446978[];
extern const char D_00446980[];

static inline void *init_buf(void *p, s32 a) { func_001E2460(p, a); return p; }

void func_00115EE8(void *arg0, s32 arg1, s32 arg2) {
    u8 buf[0x10];
    init_buf(buf, arg2);
    func_001E2A48(buf, D_00446938, (u8 *)arg0 + 0xC);
    func_001E2A48(buf, D_00446978, (u8 *)arg0 + 0x18);
    func_001E2470(buf, D_00446980, (u8 *)arg0 + 0x24);
}
