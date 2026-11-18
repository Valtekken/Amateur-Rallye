extern void *func_001D6E40(void);
extern void *func_001D6DF8(void *, s32);

typedef struct { s16 adj; s16 pad; void *fn; } VEnt;
typedef s32 (*FnI)(char *, s32);
typedef f32 (*FnF)(char *, s32);

void func_001AADF0(char *arg0) {
    char *cfg = (char *)func_001D6DF8(func_001D6E40(), 0);
    VEnt *vt;
    s32 r;
    f32 f;

    vt = *(VEnt **)cfg;
    r = ((FnI)(vt[1].fn))(cfg + vt[1].adj, 0);
    if (r == 0) goto L1;
    { s32 t = *(s32*)(arg0+0x124); *(s32*)(arg0+0x124) = t ^ 1; }
L1:
    vt = *(VEnt **)cfg;
    r = ((FnI)(vt[2].fn))(cfg + vt[2].adj, 1);
    if (r != 0) *(s32*)(arg0+0x150) = 1; else *(s32*)(arg0+0x150) = 0;
    vt = *(VEnt **)cfg;
    r = ((FnI)(vt[2].fn))(cfg + vt[2].adj, 2);
    if (r != 0) *(s32*)(arg0+0x154) = 1; else *(s32*)(arg0+0x154) = 0;
    vt = *(VEnt **)cfg;
    r = ((FnI)(vt[2].fn))(cfg + vt[2].adj, 3);
    if (r == 0) goto L2;
    *(f32*)(arg0+0x164) = *(f32*)(arg0+0x68);
L2:
    vt = *(VEnt **)cfg;
    f = ((FnF)(vt[7].fn))(cfg + vt[7].adj, 0);
    if (f > 0.4f) *(s32*)(arg0+0x138) = 1; else *(s32*)(arg0+0x138) = 0;
    vt = *(VEnt **)cfg;
    f = ((FnF)(vt[7].fn))(cfg + vt[7].adj, 0);
    if (f < -0.4f) *(s32*)(arg0+0x134) = 1; else *(s32*)(arg0+0x134) = 0;
    vt = *(VEnt **)cfg;
    f = ((FnF)(vt[7].fn))(cfg + vt[7].adj, 1);
    if (f < -0.4f) *(s32*)(arg0+0x130) = 1; else *(s32*)(arg0+0x130) = 0;
    vt = *(VEnt **)cfg;
    f = ((FnF)(vt[7].fn))(cfg + vt[7].adj, 1);
    if (f > 0.4f) *(s32*)(arg0+0x12C) = 1; else *(s32*)(arg0+0x12C) = 0;
    vt = *(VEnt **)cfg;
    f = ((FnF)(vt[7].fn))(cfg + vt[7].adj, 2);
    if (f > 0.4f) *(s32*)(arg0+0x144) = 1; else *(s32*)(arg0+0x144) = 0;
    vt = *(VEnt **)cfg;
    f = ((FnF)(vt[7].fn))(cfg + vt[7].adj, 2);
    if (f < -0.4f) *(s32*)(arg0+0x140) = 1; else *(s32*)(arg0+0x140) = 0;
    vt = *(VEnt **)cfg;
    f = ((FnF)(vt[7].fn))(cfg + vt[7].adj, 3);
    if (f < -0.4f) *(s32*)(arg0+0x14C) = 1; else *(s32*)(arg0+0x14C) = 0;
    vt = *(VEnt **)cfg;
    f = ((FnF)(vt[7].fn))(cfg + vt[7].adj, 3);
    if (f > 0.4f) *(s32*)(arg0+0x148) = 1; else *(s32*)(arg0+0x148) = 0;
}
