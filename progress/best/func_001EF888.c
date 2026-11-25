/* Debug print for animation vector */
extern s32 func_003F9698(const char *fmt, ...);
extern void func_001DB808(s32, s32);
extern s32 D_004262B0[4];
extern char D_004774A8[37];
extern char D_004774D0[6];
extern char D_004774D8[5];

typedef struct {
    void *begin;
    void *end;
    void *cap;
} AnimVec;

void func_001EF888(AnimVec *arg0) {
    void *begin = arg0->begin;
    void *end = arg0->end;
    void *cap = arg0->cap;
    void *it;

    func_003F9698(D_004774A8, ((s32)end - (s32)begin) >> 2, ((s32)cap - (s32)begin) >> 2);
    D_004262B0[3]++;
    for (it = begin; it != end; it = (void *)((s32)it + 4)) {
        func_003F9698(D_004774D0, ((s32)it - (s32)begin) >> 2);
        D_004262B0[3]++;
        func_001DB808(*(s32 *)it, 0);
        D_004262B0[3]--;
    }
    D_004262B0[3]--;
    func_003F9698(D_004774D8);
}
