extern s32 func_00193B60(void);
extern s32 func_001918C0(s32);
extern s32 func_00196E10(void);
extern s32 func_001968D0(s32, s32);
extern s32 func_00196730(s32, s32);
extern s32 func_00196DB0(s32, s32);
extern void *D_002AD408(s32);
extern s32 func_00134BE8(void *);
extern void func_00134C00(s32, s32, s32, s32, s32, f32);
extern void func_001356E8(void *, s32);
extern void func_00155718(void *, void *, void *);
extern void func_00196BA0(s32, s32, s32);

typedef struct Obj {
    s32 f0;
    char pad[0x14];
    s32 f18;
} Obj;
typedef struct Vec {
    Obj **begin;
    Obj **end;
    Obj **cap;
} Vec;
typedef struct A0 {
    char pad[0x24];
    Vec vec;
} A0;

void func_00136340(A0 *arg0) {
    s32 count = func_001918C0(func_00193B60());
    if (count != 0) {
        s32 i, ni, off;
        Vec *vec = &arg0->vec;
        for (i = 0; i < count; i++) {
            s32 a = func_001968D0(func_00196E10(), i);
            s32 b = func_00196730(func_00196E10(), i);
            s32 c = func_00196DB0(func_00196E10(), i);
            s32 obj = func_00134BE8(D_002AD408(0x1C));
            func_00134C00(obj, i, a, b, c, 0.0f);
            if (vec->end != vec->cap) {
                if (vec->end) *vec->end = (Obj *)obj;
                vec->end++;
            } else {
                func_00155718(vec, vec->end, &obj);
            }
        }
        func_001356E8(arg0, 1);
        for (i = 0; i < count; i++) {
            ni = i + 1;
            off = i * 4;
            (*(Obj **)((char *)arg0->vec.begin + off))->f18 = i;
            func_00196BA0(func_00196E10(), (*(Obj **)((char *)arg0->vec.begin + off))->f0, ni);
        }
    }
}
