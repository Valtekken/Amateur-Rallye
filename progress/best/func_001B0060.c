extern s32 func_001B0410(void *, s32);
extern void *D_002AD408(s32);
extern void *func_001B1030(void *);
extern void func_0021E620(s32, s32, void *, void *);
extern void func_001577C8(void *, s32 *, s32);

typedef struct {
    f32 f0;
    f32 f4;
    f32 f8;
} Vec3;

typedef struct {
    u8 pad[0x44];
    s32 *list44;
    s32 *list48;
} ObjStruct;

typedef struct {
    u8 pad[0x30];
    f32 f30;
    f32 f34;
    f32 f38;
    f32 f3C;
    f32 f40;
    f32 f44;
} BufStruct;

void func_001B0060(void *arg0, s32 arg1, void *arg2, void *arg3) {
    ObjStruct *obj = (ObjStruct *)arg0;
    Vec3 *v2 = (Vec3 *)arg2;
    Vec3 *v3 = (Vec3 *)arg3;
    BufStruct *buf;

    func_001B0410(arg0, 1);
    buf = (BufStruct *)func_001B1030(D_002AD408(0x60));
    buf->f30 = v2->f0;
    buf->f34 = v2->f4;
    buf->f38 = v2->f8;
    buf->f3C = v3->f0;
    buf->f40 = v3->f4;
    buf->f44 = v3->f8;
    func_0021E620(arg1, 0, &buf->f30, &buf->f3C);

    if (obj->list44 != obj->list48) {
        if (obj->list44 != NULL) {
            *obj->list44 = arg1;
        }
        obj->list44 = (s32 *)((u8 *)obj->list44 + 4);
        return;
    }
    func_001577C8(&obj->list44, obj->list44, arg1);
}
