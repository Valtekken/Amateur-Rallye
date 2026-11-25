extern void *D_0040E750;
extern s32 func_0021F4B0(void);
extern void *func_0021E9C0(s32, void *);
extern void ***func_002015D8(void);

typedef struct {
    f32 x, y, z;
} Vec3;

typedef struct {
    void *unk0;
    s16 unk40;
    void *unk44;
    s16 unk48;
    void *unk4C;
    s16 unk38;
    void *unk3C;
    void *unk58;
} Object;

typedef struct {
    void *unk0;
    s16 unk38;
    void *unk3C;
    s16 unk40;
    void *unk44;
    s16 unk48;
    void *unk4C;
} VTable;

s32 func_00169310(void *arg1, void *arg2) {
    s32 result = 0;
    void *obj = func_0021E9C0(func_0021F4B0(), D_0040E750);
    
    if (obj != NULL) {
        Object *o = (Object *)obj;
        if (o->unk58 != 0) {
            VTable **vt_ptr = (VTable **)func_002015D8();
            VTable *vt = *vt_ptr;
            
            // First virtual call: vt->unk44(vt_ptr + vt->unk40)
            void (*func1)(void *, void *) = (void (*)(void *, void *))vt->unk44;
            func1((void *)((u8 *)vt_ptr + vt->unk40), (void *)((u8 *)vt_ptr + vt->unk40));
            
            // Load floats from arg1 and arg2 to stack
            f32 stack[6];
            Vec3 *v1 = (Vec3 *)arg1;
            Vec3 *v2 = (Vec3 *)arg2;
            stack[0] = v1->x;
            stack[1] = v1->y;
            stack[2] = v1->z;
            stack[3] = v2->x;
            stack[4] = v2->y;
            stack[5] = v2->z;
            
            // Second virtual call: vt->unk4C(vt_ptr + vt->unk48)
            void (*func2)(void *, void *) = (void (*)(void *, void *))vt->unk4C;
            func2((void *)((u8 *)vt_ptr + vt->unk48), (void *)((u8 *)vt_ptr + vt->unk48));
            
            // Third virtual call: vt->unk3C(vt_ptr + vt->unk38)
            s32 (*func3)(void *, void *) = (s32 (*)(void *, void *))vt->unk3C;
            result = func3((void *)((u8 *)vt_ptr + vt->unk38), (void *)((u8 *)vt_ptr + vt->unk38));
        }
    }
    
    return result;
}
