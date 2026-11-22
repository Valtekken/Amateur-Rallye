typedef struct { void *p0; void *p4; void *p8; s32 *pC; } A5AE30;
extern void func_00233988(s32 *);
extern void func_0023F7D8(void *);
extern void func_00233CA8(void *);
void func_0025AE30(void *arg0) {
    A5AE30 *a = (A5AE30 *)arg0;
    *a->pC = 1;
    func_00233988(a->pC);
    *(s32 *)((char *)a->p4 + 0x34) = 1;
    func_0023F7D8(a->p4);
    *(s32 *)((char *)a->p8 + 0x10) = 1;
    func_00233CA8(a->p8);
}
