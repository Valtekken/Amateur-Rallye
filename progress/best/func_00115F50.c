extern s32 func_00296710(void);
extern s32 func_00296530(s32, void *);
extern s32 func_001E4280(void);
extern void func_001D4040(void *, const char *);
extern s32 func_001E3598(s32, void *);
extern void *func_001E3878(s32, void *);
extern char D_00446988[], D_004469A8[];
typedef struct { char pad[0x18]; float x, y, z; } O0;
typedef struct { float x, y, z; } V3;
typedef struct { float x, y, z, w; } V4;
void func_00115F50(O0 *arg0, void *arg1) {
    void *obj;
    char key[16];
    s32 vis, h, h2;
    V3 *pos;
    V4 *p;
    volatile char pad2[0x20];
    obj = *(void **)((char *)arg1 + 0x4C);
    if (func_00296530(func_00296710(), arg1) != 0) {
        *(s64 *)((char *)obj + 0x78) = (s64)(*(s64 *)((char *)obj + 0x78) & (s64)-5);
        h = func_001E4280();
        func_001D4040(key, D_00446988);
        vis = func_001E3598(h, key);
        if (vis != 0) {
            h2 = func_001E4280();
            func_001D4040(key, D_004469A8);
            pos = (V3 *)func_001E3878(h2, key);
            p = (V4 *)((char *)obj + 0x50);
            p->x = pos->x + arg0->x;
            p->y = pos->y + arg0->y;
            p->z = pos->z + arg0->z;
            p->w = 1.0f;
        }
        *(s64 *)((char *)obj + 0x78) = (s64)((*(s64 *)((char *)obj + 0x78) & (s64)-2) | (s64)(vis & 1));
    }
    (void)pad2;
}
