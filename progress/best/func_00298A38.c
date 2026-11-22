typedef struct { f32 x, y, z; } V3;
static inline void zero3(V3 *v) { v->x = 0.0f; v->z = 0.0f; v->y = 0.0f; }
extern void *D_0044DCD8;
extern void *D_0047CBB8;
extern void *D_00494B88;

void *func_00298A38(void *arg0) {
    *(s32 *)((u8 *)arg0 + 4) = 0;
    *(void **)((u8 *)arg0 + 8) = &D_0044DCD8;
    {
        V3 z;
        void *v = D_00494B88;
        void *vt = &D_0047CBB8;
        V3 *p = (V3 *)((u8 *)arg0 + 0x10);
        V3 *q = (V3 *)((u8 *)arg0 + 0x2C);
        zero3(&z);
        *(s32 *)((u8 *)arg0 + 4) = (s32)v;
        *(void **)((u8 *)arg0 + 8) = vt;
        p->x = z.x;
        *(s32 *)((u8 *)arg0 + 0) = -1;
        p->y = z.y;
        p->z = z.z;
        z.z = z.x;
        *(s32 *)((u8 *)arg0 + 0x1C) = 0;
        *(s32 *)((u8 *)arg0 + 0x20) = 0;
        *(s32 *)((u8 *)arg0 + 0x24) = 0;
        *(s32 *)((u8 *)arg0 + 0x28) = 0;
        *(s32 *)((u8 *)arg0 + 0x38) = 0;
        *(s32 *)((u8 *)arg0 + 0x3C) = 0;
        z.x = z.x; z.y = z.x;
        q->x = z.x;
        q->y = z.y;
        q->z = z.z;
        *(s32 *)((u8 *)arg0 + 0x40) = 0;
        *(s32 *)((u8 *)arg0 + 0x44) = 0;
        *(s32 *)((u8 *)arg0 + 0x48) = 0;
        *(s32 *)((u8 *)arg0 + 0x50) = 0;
        *(s32 *)((u8 *)arg0 + 0x54) = 0;
        *(s32 *)((u8 *)arg0 + 0x60) = 0;
    }
    return arg0;
}
