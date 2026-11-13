/* identical to func_00240440 (matched), with its names changed by decompdecomp */
typedef struct {
    f32 x, y, z;
} Vec3f;

void func_00244A58(Vec3f *, Vec3f *);

void func_00244A20(Vec3f *arg0, Vec3f *arg1) {
    Vec3f sp;
    sp.x = arg1->x;
    sp.y = arg1->y;
    sp.z = arg1->z;
    func_00244A58(arg0, &sp);
}
