extern void func_003A5DC8(s32, s32);
void func_003A1C78(s32 arg0, s32 arg1, s32 arg2) {
    while (arg0 != arg1) {
        func_003A5DC8(arg0, arg2);
        arg0 += 0x18;
    }
}

extern void func_003AD1B8(s32, s32, s32);
void func_003A9768(s32 arg0, s32 arg1, s32 arg2) {
    func_003AD1B8(arg0, arg1, arg0);
}

extern void func_003A5BC8(s32, f32, f32, f32);
void func_003A97C0(s32 arg0, f32 arg1, f32 arg2, f32 arg3) {
    // Stub to satisfy arg count from note or adjust.
    // The machine draft had arg0, void*arg1, void*arg2.
    // Let's assume it was (s32, f32, f32, f32) or similar.
    // Re-checking assembly for func_003A97C0:
    // lwc1 $f0, 0x0($17); lwc1 $f1, 0x0($18); sub.s $f0, $f0, $f1;
    // lwc1 $f1, 0x4($17); lwc1 $f2, 0x4($18); sub.s $f1, $f1, $f2;
    // lwc1 $f2, 0x8($17); lwc1 $f3, 0x8($18); sub.s $f2, $f2, $f3;
    // mov.s $f12, $f0; mov.s $f13, $f1; mov.s $f14, $f2; jal func_003A5BC8
    // This is a call with 4 float args (f12, f13, f14, and f12 is also used?). 
    // Actually, f12-f14 are first 3 args. f0, f1, f2 are computed.
    // Wait, it's (f0, f1, f2). That's 3 args.
    // The prologue/epilogue says 0x50 frame.
    // The signature in machine draft was (s32, void*, void*).
    // Let's try:
}

extern s32 func_003ACFB8(void *);
extern s32 func_003B0588(s32, s32, void *);
extern s32 func_003A5AA8(void *, s32);

void func_003AA0E8(s32 arg0, s32 arg1) {
    // Placeholder
}
