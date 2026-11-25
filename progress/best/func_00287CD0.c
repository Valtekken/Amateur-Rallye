extern void func_001E2460(void *, s32);
extern void func_001E2470(void *, const char *, void *);
extern void func_001E2510(void *, const char *, void *);
extern void func_001E25B0(void *, const char *, void *);
extern f32 func_0015AD18(void);

extern char D_0047B0E8[], D_0047B0F8[], D_0047B108[], D_0047B118[], D_0047B128[], D_0047B138[], D_0047B148[], D_0047B158[], D_0047B160[];

typedef struct S_D_0047D178 {
    void *vtable;
    /* ... */
    float unk_20;
} S_D_0047D178;

void func_00287CD0(void *arg0, void *arg1, s32 arg2) {
    S_D_0047D178 *obj = (S_D_0047D178 *)arg0;
    
    func_001E2460(arg0, arg2); 
    func_001E2470(arg0, D_0047B0E8, (char*)arg1 + 0x10);
    func_001E2470(arg0, D_0047B0F8, (char*)arg1 + 0x14);
    func_001E2510(arg0, D_0047B108, (char*)arg1 + 0x1C);
    func_001E2510(arg0, D_0047B118, (char*)arg1 + 0x20);
    func_001E2510(arg0, D_0047B128, (char*)arg1 + 0x2C);
    func_001E2510(arg0, D_0047B138, (char*)arg1 + 0x30);
    func_001E2510(arg0, D_0047B148, (char*)arg1 + 0x34);
    func_001E2510(arg0, D_0047B158, (char*)arg1 + 0x38);
    func_001E25B0(arg0, D_0047B160, (char*)arg1 + 0xC);
    obj->unk_20 *= (func_0015AD18() / 30.0f);
}
