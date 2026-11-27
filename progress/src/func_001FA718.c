typedef struct { u8 *start; u8 *end; } R718;
typedef struct { s32 f0; u8 *ptr; u8 *end; } S718;
typedef struct { f32 x, y, z; s32 w; } V718;
extern void func_00214C40(void *, s32, void *);

void func_001FA718(u8 *arg0, S718 *arg1, R718 *arg2, s32 arg3) {
    u8 *i = arg2->start;
    while (i != arg2->end) {
        V718 v;
        u8 *p0, *p1, *p2;
        p0 = i; p0 += arg3 * 4; v.x = *(f32 *)p0;
        p1 = i; p1 += ((arg3 + 1) % 3) * 4; v.y = *(f32 *)p1;
        p2 = i; p2 += ((arg3 + 2) % 3) * 4; v.z = *(f32 *)p2;
        v.w = (s32)((u32)(i - arg2->start) * 0xAAAAAAABu) >> 2;
        if (arg1->ptr != arg1->end) {
            if (arg1->ptr) *(V718 *)arg1->ptr = v;
            arg1->ptr += 16;
        } else {
            func_00214C40(arg1, (s32)arg1->ptr, &v);
        }
        i += 12;
    }
}
