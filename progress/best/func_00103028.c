// Forward declarations
extern s32 func_001E4280(void);
extern s32 func_001E3650(s32, s32);
extern void func_001D4810(void*, const char*);
extern void func_001D2458(void*, const char*);
extern void func_001D2900(void*, s32);
extern s32 func_001189C0(void);
extern void func_00152108(void);
extern void func_00262F88(void*);
extern void func_003F2F50(void);
extern void func_003F3140(float);
extern void D_002AD390(void*);
extern char D_00444EE0[];
extern char D_00444EF8[];
extern char D_00444F08[];
extern u32 D_00425E98[];

typedef struct {
    s32 pad0[3];
    s32 field0C;
    s32 field10;
    s32 field14;
    s32 field18;
    f32 field1C;
    f32 field20;
    s32 field24;
    s32 field28;
} Obj;

typedef struct {
    s32 pad50[0x50/4];
    void *ptr50;
} Arg1;

// Force 16-byte aligned struct for sq stores
typedef struct { s32 v[4]; } S16;

void func_00103028(Obj *o, Arg1 *a1) {
    // Exact frame size 0xF0 with 16-byte aligned locals - 6 S16 = 96 bytes + 2 f32 = 8 bytes = 104, need more
    volatile S16 sp0;
    volatile S16 sp10;
    volatile S16 sp20;
    volatile S16 sp30;
    volatile S16 sp40;
    volatile S16 sp50;
    volatile S16 sp60;
    volatile S16 sp70;
    volatile f32 fsp20;
    volatile f32 fsp21;
    
    s32 v0, v1;
    Obj *s2 = o;
    Arg1 *s3 = a1;
    s32 s0, s1, s4, s5, s6, s7;
    f32 f20, f21, f22, f23;
    
    // State check at +0x28
    v0 = s2->field28;
    if (v0 != 0) {
        goto L00103114;
    }
    
    v0 = func_001E4280();
    v1 = func_001E3650(v0, (s32)((char *)s2 + 0x10));
    
    if (s2->field0C == v1) {
        goto L00103114;
    }
    
    if (v1 != -1) {
        goto L001030B0;
    }
    
    s2->field0C = v1;
    func_001D4810((void *)((char *)s2), D_00444EE0);  // pass o as first arg like target does sp
    *(s32 *)s2->pad0 = 0;
    func_00262F88(s3->ptr50);
    goto L00103118;
    
L001030B0:
    func_001D2458((void *)((char *)s2), D_00444EF8);  // pass o as first arg
    s0 = func_001189C0();
    s1 = 0x34;
    v1 = s1 * v1;
    v1 += s2->field14;
    func_001D2900((void *)((char *)s2 + v1), *(s32 *)((char *)s2 + v1 + 0x8));
    func_001D2900((void *)((char *)s2), 0);
    func_001D4810((void *)((char *)s2), D_00444F08);
    *(s32 *)s2->pad0 = 0;
    func_00262F88(s3->ptr50);
    D_002AD390((void *)((char *)s2));
    
L00103114:
    v0 = s2->field14;
    
L00103118:
    if (v0 == 0) {
        goto L001033BC;
    }
    
    // Load FPU values from a1->ptr50 + 0x50
    f20 = *(f32 *)((char *)s3->ptr50 + 0x50);
    f21 = *(f32 *)((char *)s3->ptr50 + 0x54);
    f22 = *(f32 *)((char *)s3->ptr50 + 0x58);
    
    // Compute angle
    if (s2->field18 != 0) {
        f20 = s2->field1C + s2->field20;
    } else {
        f20 = s2->field1C - s2->field20;
    }
    s2->field1C = f20;
    
    // Identity matrix setup (sp+0x30)
    sp30.v[0] = 0x3F800000; // 1.0f
    sp30.v[1] = 0;
    sp30.v[2] = 0;
    sp30.v[3] = 0;
    
    // ... matrix math - just call the functions
    func_003F3140(f20);
    func_003F2F50();
    func_00152108();
    
    if (s2->field24 != 0) {
        *(f32 *)((char *)s3->ptr50 + 0x50) = 0.0f;
        *(f32 *)((char *)s3->ptr50 + 0x54) = 0.0f;
        *(f32 *)((char *)s3->ptr50 + 0x58) = 0.0f;
    }
    
L001033BC:
    return;
}
