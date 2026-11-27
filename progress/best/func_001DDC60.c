typedef struct { s16 a; u16 b; u16 c; u16 d; } S8;
typedef struct { u8 pad[8]; void *vt; } Obj;
typedef struct {
    u8 b0[0x10]; s16 o10; u16 b12; void *f14; u8 b18[0x30];
    s16 o48; u16 b4A; void *f4C; s16 o50; u16 b52; void *f54;
} VT;
#define VT_OF(p) ((VT *)((Obj *)(p))->vt)
extern void *D_002AD408(s32);
extern void D_002AD530(void *);
extern void *D_002AD5A8(s32);
extern void *func_001DCB48(void *, s16, s16);
extern void func_003F931C(void *, void *, s32);
typedef s32 (*FN48)(void *, void *, s32, s32);
typedef s32 (*FN54)(void *, void *, s32, void *);
typedef s32 (*FN14)(void *, void *);

void *func_001DDC60(Obj **arg0, void *arg1) {
    S8 sp;
    void *ret = NULL;
    void *ptr;
    s32 n;

    if (((FN48)VT_OF(*arg0)->f4C)((u8 *)*arg0 + VT_OF(*arg0)->o48, arg1, 0, 1) == 0) goto done;
    if (((FN54)VT_OF(*arg0)->f54)((u8 *)*arg0 + VT_OF(*arg0)->o50, &sp, 8, (void *)*arg0) != 0 &&
        sp.a == 0x3039 && (s16)sp.b == 1) {
        n = (s16)sp.c * (s16)sp.d * 4;
        ptr = D_002AD5A8(n);
        if (((FN54)VT_OF(*arg0)->f54)((u8 *)*arg0 + VT_OF(*arg0)->o50, ptr, n, (void *)*arg0) != 0) {
            ret = func_001DCB48(D_002AD408(0x14), (s16)sp.c, (s16)sp.d);
            func_003F931C(*(void **)((u8 *)ret + 8), ptr, (s16)sp.c * (s16)sp.d * 4);
        }
        if (ptr != NULL) D_002AD530(ptr);
    }
    ((FN14)VT_OF(*arg0)->f14)((u8 *)*arg0 + VT_OF(*arg0)->o10, (void *)*arg0);
done:
    return ret;
}
