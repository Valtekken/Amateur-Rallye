typedef struct { float x, y, z; } V3;
void func_0035FEF0(V3 *arg0, V3 *arg1, V3 *arg2) {
    while (arg0 != arg1) {
        arg0->x = arg2->x;
        arg0->y = arg2->y;
        arg0->z = arg2->z;
        arg0++;
    }
}
