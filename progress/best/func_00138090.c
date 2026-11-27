extern s32 func_00194C40(void *, void *);
extern s32 func_00193CC8(s32);
extern void func_001377D0(void *);
extern void func_001378A8(void *);
extern void func_00137CF0(void *);
extern s32 func_00110430(void);
extern s32 func_00137D30(void *);
extern void func_00110238(s32, s32);

typedef struct {
    char pad[16];
    s32 index;
} A;

#define AT(base, off) (*(s32 *)((char *)(base) + (off)))

void func_00138090(A *a, s32 dir) {
    if (dir) {
        s32 *items = (s32 *)((char *)a + 0x14);
        s32 off = a->index * 4;
        if (AT(items, off) > 0 && func_00193CC8(func_00194C40(a, (void *)dir)) == 0) {
            s32 off2 = a->index * 4;
            AT(items, off2) -= 1;
            func_001377D0(a);
            func_001378A8(a);
            func_00137CF0(a);
            {
                s32 x = func_00110430();
                func_00110238(x, func_00137D30(a));
            }
        }
    } else {
        s32 *items = (s32 *)((char *)a + 0x14);
        s32 off = a->index * 4;
        void *q = (char *)a + off;
        if (AT(items, off) < *(s32 *)((char *)q + 0x54) - 1 &&
            func_00193CC8(func_00194C40(&AT(items, off), q)) == 0) {
            s32 off2 = a->index * 4;
            AT(items, off2) += 1;
            func_001377D0(a);
            func_001378A8(a);
            func_00137CF0(a);
            {
                s32 x = func_00110430();
                func_00110238(x, func_00137D30(a));
            }
        }
    }
}
