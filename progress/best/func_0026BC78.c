typedef float f32;
typedef int s32;

typedef struct {
    f32 x;
    f32 pad;
    f32 y;
    s32 unk[4];
} Elem1C;

typedef struct {
    Elem1C *start;
    Elem1C *end;
} Range1C;

s32 func_0026BC78(Range1C *arg0, Elem1C *arg1) {
    s32 count = ((s32)((s32)arg0->end - (s32)arg0->start) * (s32)0xB6DB6DB7) >> 2;
    s32 j = 0;
    s32 i;
    Elem1C *p;
    f32 ax, ay;

    if (count == 0) {
        return 1;
    }

    i = count - 1;
    p = arg0->start;
    ax = arg1->x;
    ay = arg1->y;

    for (j = 0; j < count; j++, i--, p++) {
        Elem1C *q = &arg0->start[i];
        f32 px = p->x;
        f32 py = p->y;
        f32 dx = px - ax;
        f32 dy = py - ay;
        f32 qx = q->x - px;
        f32 qy = q->y - py;

        if ((qx * dy) < (qy * dx)) {
            return 0;
        }
    }

    return 1;
}
