typedef struct { f32 x, y, z; } Vec3;
typedef struct { Vec3 *begin; Vec3 *end; } Range;

s32 func_001DBAB0(Range *r, Vec3 *target, s32 start, s32 count, s32 *out)
{
    Vec3 *base, *p, *end;
    if (start < count) {
        if (start < 0) {
            start = 0;
            base = r->begin;
            p = base;
        } else {
            Vec3 *tmp = r->begin;
            base = tmp;
            p = tmp + start;
        }
        if ((u32)(r->end - base) < (u32)count)
            end = base + count;
        else
            end = r->end;
        while (p != end) {
            if (p->x == target->x && p->y == target->y && p->z == target->z) {
                *out = p - base;
                return 1;
            }
            p++;
        }
    }
    return 0;
}
