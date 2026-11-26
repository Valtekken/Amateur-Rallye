extern f32 D_004264A0;

typedef struct { f32 x, y, z, w; } V4;
typedef struct { s32 unk0; s32 flag; s32 unk8; V4 *plane; } Item;

s64 func_00240858(s32 **items, V4 *v) {
    s32 pos = 0, i = 0, neg = 0;
    s32 n = ((s32)items[1] - (s32)items[0]) >> 2;
    if (n > 0) {
        do {
            Item *item = ((Item **)items[0])[i];
            V4 *p = item->plane;
            f32 dot = v->x * p->x + v->y * p->y + v->z * p->z + v->w;
            s32 c = 0;
            if (D_004264A0 <= dot) {
                c = 1;
            } else if (dot <= -D_004264A0) {
                c = -1;
            }
            item->flag = c;
            if (c == -1) {
                neg++;
            } else if ((c ^ 1) == 0) {
                pos++;
            }
            i++;
        } while (i < n);
    }
    s64 ret = 0;
    if (pos != 0) {
        ret = 1;
        if (neg == 0) ret = 0;
    }
    return ret;
}
