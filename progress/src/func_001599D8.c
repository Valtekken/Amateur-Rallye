typedef struct { u32 w[4]; } S16;
extern s32 func_00296710(void);
extern void func_00296640(s32, s32, void *);
void func_001599D8(s32 a0, s32 a1, void *a2) {
    S16 buf;
    buf = *(S16 *)a2;
    func_00296640(func_00296710(), a1, &buf);
}
