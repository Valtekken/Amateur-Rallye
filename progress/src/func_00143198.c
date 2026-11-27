extern void func_001D4040(char *, const char *);
extern f32 func_001E3610(s32, char *);
extern s32 func_001E3650(s32, void *);
extern s32 func_001E38F0(s32, void *);
extern s32 func_001E4280(void);
extern void func_002624A0(s32, void *, f32, f32);
extern s32 func_00262838(void);
extern void func_0029EA38(s32);
extern void func_0029EB50(s32, f32);
extern void func_0029EC30(s32, s32);
extern char D_0044BD98[];

typedef struct {
    char pad0[0x10]; s32 f10, f14, f18, f1C, f20, f24, f28; f32 f2C;
} A;
typedef struct { char pad[4]; s32 f4; } B;

void func_00143198(A *a, B *b) {
    char buf[16];
    s32 sound, n, v, counter;
    f32 f, step;
    if (func_001E38F0(func_001E4280(), &a->f24) != 0) return;
    sound = b->f4;
    if (sound == 0) return;
    step = 0.05f;
    n = func_001E3650(func_001E4280(), &a->f24);
    if (a->f28 < n) {
        if (a->f2C + step < 1.0f) {
            a->f2C = a->f2C + step;
            func_0029EB50(sound, a->f2C);
            if (a->f1C == 0) {
                a->f1C = 1;
                func_0029EC30(sound, 0xCD);
            }
        }
    } else {
        if (0.0f < a->f2C - step) {
            a->f2C = a->f2C - step;
            func_0029EB50(sound, a->f2C);
        } else {
            a->f2C = 0.0f;
            if (a->f1C != 0) {
                a->f1C = 0;
                func_0029EA38(sound);
            }
        }
    }
    if (1.0f < a->f2C + step) {
        counter = a->f20 + 1;
        a->f20 = counter;
        if (counter >= a->f14) {
            a->f28 = n;
            a->f18 = 1;
            a->f20 = 0;
        }
        if (a->f18 != 0) {
            s32 id;
            a->f18 = 0;
            id = func_001E4280();
            func_001D4040(buf, D_0044BD98);
            f = func_001E3610(id, buf);
            func_002624A0(func_00262838(), &a->f10, f * 0.6f, 0.0f);
        }
    }
}
