extern char D_004497D0[];
extern char D_004497F0[];
extern char D_00449870[];
extern char D_00449898[];
extern char D_004498C0[];
extern char D_004498E0[];
extern char D_00449908[];
extern char D_00449910[];
extern void func_001D4040(void *, const char *);
extern void func_001E3EC0(s32, void *, s32);
extern void func_001E33C8(s32, void *, s32);
extern s32 func_0021F4B0(void);
extern void *func_0021E9C0(s32, void *);
extern void func_001112F0(s32);
extern void func_0012FBE8(void *);

typedef struct { s32 pad[3]; s32 config; s32 ps2map; s32 vib; } Cfg;

void func_0012F790(Cfg *arg0, s32 arg1) {
    s32 sp[4];
    void *o;

    if (arg0->config != 0) {
        if (arg1 != 0) {
            arg0->config = 0;
            { s32 k = func_001E4280(); func_001D4040(sp, D_004498C0); func_001E3EC0(k, sp, arg0->ps2map); }
            { s32 k = func_001E4280(); func_001D4040(sp, D_004498C0); func_001E33C8(k, sp, 0); }
            { s32 k = func_001E4280(); func_001D4040(sp, D_004497D0); arg0->ps2map = func_001E3650(k, (s32)sp); }
            { s32 k = func_001E4280(); func_001D4040(sp, D_00449870); func_001E3EC0(k, sp, arg0->ps2map); }
            { s32 k = func_001E4280(); func_001D4040(sp, D_004498E0); func_001E3EC0(k, sp, arg0->vib == 0); }
            { s32 k = func_001E4280(); func_001D4040(sp, D_004498E0); func_001E33C8(k, sp, 0); }
            { s32 k = func_001E4280(); func_001D4040(sp, D_004497F0); arg0->vib = func_001E3650(k, (s32)sp) == 0; }
            { s32 k = func_001E4280(); func_001D4040(sp, D_00449898); func_001E3EC0(k, sp, arg0->vib); }
        }
    } else if (arg1 == 0) {
        arg0->config = 1;
        { s32 k = func_001E4280(); func_001D4040(sp, D_004497D0); func_001E3EC0(k, sp, arg0->ps2map); }
        { s32 k = func_001E4280(); func_001D4040(sp, D_004497D0); func_001E33C8(k, sp, 0); }
        { s32 k = func_001E4280(); func_001D4040(sp, D_004498C0); arg0->ps2map = func_001E3650(k, (s32)sp); }
        { s32 k = func_001E4280(); func_001D4040(sp, D_00449870); func_001E3EC0(k, sp, arg0->ps2map); }
        { s32 k = func_001E4280(); func_001D4040(sp, D_004497F0); func_001E3EC0(k, sp, arg0->vib == 0); }
        { s32 k = func_001E4280(); func_001D4040(sp, D_004497F0); func_001E33C8(k, sp, 0); }
        { s32 k = func_001E4280(); func_001D4040(sp, D_004498E0); arg0->vib = func_001E3650(k, (s32)sp) == 0; }
        { s32 k = func_001E4280(); func_001D4040(sp, D_00449898); func_001E3EC0(k, sp, arg0->vib); }
    }

    { s32 k = func_0021F4B0(); func_001D4040(sp, D_00449908); o = func_0021E9C0(k, sp);
      if (o != NULL) { s32 x = ((s32 *)o)[2]; if (x != 0) func_001112F0(x); } }
    { s32 k = func_0021F4B0(); func_001D4040(sp, D_00449910); o = func_0021E9C0(k, sp);
      if (o != NULL) { s32 x = ((s32 *)o)[2]; if (x != 0) func_001112F0(x); } }
    func_0012FBE8(arg0);
}
