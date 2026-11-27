extern int func_001930D8(int,int), func_00193138(int,int), func_00193B60(void);
extern void func_001D4040(void *, const char *), func_0021E4F0(void *), func_003FA310(char *, const char *, int);
extern char D_0044BC40[], D_0044BC48[];
extern int D_0040E5DC, D_0048D718;
#define A(p,t,o) (*(t*)((char*)(p)+(o)))
typedef struct { f32 x, y, z; } V3;
typedef struct { f32 x, y, z, w; } V4;

void func_00144FE8(void *arg0, void *arg1) {
    V4 a, b, c;

    if (func_00193138(func_00193B60(), A(arg0,int,0xC)) == 0) func_0021E4F0(arg1);
    if (A(arg1, void *, 0x4C) != 0) {
        V3 *dst = (V3 *)((char *)arg0 + 0x18C);
        V3 *src = (V3 *)((char *)A(arg1, void *, 0x4C) + 0x50);
        V3 *q = (V3 *)((char *)A(arg1, void *, 0x4C) + 0x30);
        f32 scale = A(arg0, f32, 0x1C);
        dst->x = src->x;
        dst->y = src->y;
        dst->z = src->z;
        a.x = q->x;
        a.y = q->y;
        a.z = q->z;
        c.x = a.x * scale;
        c.y = a.y * scale;
        c.z = a.z * scale;
        b.x = dst->x + c.x;
        b.y = dst->y + c.y;
        b.z = dst->z + c.z;
        src->x = b.x;
        src->y = b.y;
        *(f32 *)((char *)A(arg1, void *, 0x4C) + 0x5C) = 1.0f;
        src->z = b.z;
    }
    func_003FA310((char *)&a, D_0044BC40, func_001930D8(func_00193B60(), A(arg0,int,0xC)));
    func_001D4040((char *)arg0 + 0x198, (char *)&a);
    if (D_0040E5DC == 0) {
        func_001D4040(&D_0048D718, D_0044BC48);
        D_0040E5DC = 1;
    }
    A(arg0, int, 0x19C) = D_0048D718;
}
