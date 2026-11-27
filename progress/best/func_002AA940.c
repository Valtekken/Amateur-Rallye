typedef struct { f32 f0, f4, f8, fC; } Vec4;
typedef struct Q { s32 x; s32 pad8; s32 n2; s32 n1; } Q;
typedef struct Obj { char pad[8]; void *v; } Obj;
typedef s32 (*F48)(void *, s32, s32, s32);
typedef void (*F78f)(void *, f32);
typedef void (*F8C)(void *, s32);
typedef void (*F74)(void *, void *, s32);
typedef s32 (*F70)(void *, void *, s32);
typedef void (*Frel)(void *, s32);

extern s32 *func_001C67A0(void *, s32, s32);
extern s32 func_002AB868(void *);
extern void *func_002B8C18();

s32 func_002AA940(s32 unused, s32 arg1, Vec4 *arg2) {
    s8 sp1;
    s32 sp4, sp8;
    s32 n16, n17, n22, n30;
    s32 i, j, rc;
    void *obj, *vt, *p, *q;
    s32 *r;
    s16 vo;
    F48 f48; F78f f78; F8C f8c; F74 f74; F70 f70; Frel frel;

    obj = func_002B8C18();
    sp4 = 0;
    vt = *(void **)((char *)obj + 8);
    vo = *(s16 *)((char *)vt + 0x48); f48 = *(F48)((char *)vt + 0x4C);
    rc = f48((char *)obj + vo, arg1, 1, 0);
    if (rc != 0) {
        vt = *(void **)((char *)obj + 8);
        vo = *(s16 *)((char *)vt + 0x78); f78 = *(F78f)((char *)vt + 0x7C);
        f78((char *)obj + vo, arg2->fC);
        vt = *(void **)((char *)obj + 8);
        vo = *(s16 *)((char *)vt + 0x78); f78 = *(F78f)((char *)vt + 0x7C);
        f78((char *)obj + vo, arg2->f4);
        vt = *(void **)((char *)obj + 8);
        vo = *(s16 *)((char *)vt + 0x78); f78 = *(F78f)((char *)vt + 0x7C);
        f78((char *)obj + vo, arg2->f8);
        p = *(void **)arg2;
        q = *(void **)((char *)p + 8);
        n16 = *(s32 *)q;
        n22 = ((Q *)q)->n1;
        n30 = ((Q *)q)->n2;
        n17 = func_002AB868(p);
        sp8 = n16 * n16;
        vt = *(void **)((char *)obj + 8);
        vo = *(s16 *)((char *)vt + 0x8C); f8c = *(F8C)((char *)vt + 0x90);
        f8c((char *)obj + vo, n30);
        vt = *(void **)((char *)obj + 8);
        vo = *(s16 *)((char *)vt + 0x8C); f8c = *(F8C)((char *)vt + 0x90);
        f8c((char *)obj + vo, n22);
        vt = *(void **)((char *)obj + 8);
        vo = *(s16 *)((char *)vt + 0x8C); f8c = *(F8C)((char *)vt + 0x90);
        f8c((char *)obj + vo, n16);
        vt = *(void **)((char *)obj + 8);
        vo = *(s16 *)((char *)vt + 0x8C); f8c = *(F8C)((char *)vt + 0x90);
        f8c((char *)obj + vo, n17);
        sp1 = 0;
        if (n30 > 0) {
            for (i = 0; i < n30; i++) {
                if (n22 > 0) {
                    for (j = 0; j < n22; j++) {
                        r = func_001C67A0(*(void **)((char *)p + 8), i, j);
                        vt = *(void **)((char *)obj + 8);
                        vo = *(s16 *)((char *)vt + 0x74); f74 = *(F74)((char *)vt + 0x78);
                        if (*r != 0) f74((char *)obj + vo, &sp4, 1);
                        else f74((char *)obj + vo, &sp1, 1);
                    }
                }
            }
        }
        if (n30 > 0) {
            for (i = 0; i < n30; i++) {
                for (j = 0; j < n22; j++) {
                    r = func_001C67A0(*(void **)((char *)p + 8), i, j);
                    if (*r != 0) {
                        vt = *(void **)((char *)obj + 8);
                        vo = *(s16 *)((char *)vt + 0x70); f70 = *(F70)((char *)vt + 0x74);
                        sp4 = f70((char *)obj + vo, *r, sp8);
                    }
                }
            }
        }
    }
    vt = *(void **)((char *)obj + 8);
    vo = *(s16 *)((char *)vt + 0xC); frel = *(Frel)((char *)vt + 0x10);
    frel((char *)obj + vo, 3);
    return sp4;
}
