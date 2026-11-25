extern const char D_00481048[];
extern void func_00404EA8(const char *);

typedef struct {
    s32 saved;
    f32 fpr[32];
    f32 unk80;
    s32 fcr31;
} FPUState;

void func_002C1870(FPUState *state) {
    if (state->saved != 0) {
        func_00404EA8(D_00481048);
    }
    
    state->saved = 1;
    
    // The compiler should generate swc1 for each fpr if we could access them
    // But in pure C we can't access FPU registers directly
    // This is a placeholder - the real function uses inline asm or intrinsics
    
    // Save FCR31
    state->fcr31 = 0; // placeholder
    
    // Clear and save to unk80
    state->unk80 = 0.0f;
}
