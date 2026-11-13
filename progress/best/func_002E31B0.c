/* func_002DEB80: binary search over u64 array */
u64 *func_002DEB80(u64 *start, u64 *end, u64 *value) {
    s32 n = ((s32)end - (s32)start) >> 3;
    u64 key = *value;
    while (n > 0) {
        s32 half = n >> 1;
        u64 *mid = start + half;
        if (*mid < key) {
            start = mid + 1;
            n = n - half - 1;
        } else {
            n = half;
        }
    }
    return start;
}

/* func_002E31B0 */
typedef struct {
    u8 pad[0x10];
    s32 f10;
} S_E31B0_Item;

typedef struct {
    u8 pad0[0x10];
    void **arr10;
    s32 end14;
    u8 pad18[4];
    void **arr1C;
    s32 end20;
    u8 pad24[4];
    void **p28;
} S_E31B0_Obj;

extern void func_00244270(void *);

void func_002E31B0(S_E31B0_Obj *arg0) {
    s32 n, i;
    n = (arg0->end14 - (s32)arg0->arr10) >> 2;
    for (i = 0; i < n; i++)
        func_00244270(arg0->arr10[i]);
    n = (arg0->end20 - (s32)arg0->arr1C) >> 2;
    for (i = 0; i < n; i++)
        ((S_E31B0_Item *)arg0->arr1C[i])->f10 = 1;
    if (arg0->p28)
        ((s32 *)arg0->p28)[0xC] = 1;
}

/* func_002E46E8 */
extern void *func_002E3630(void *, void *, void *, void *, f32);
extern void func_0024F830(void *);
extern void *func_0024F860(void *, void *, void *, void *, f32);
extern void func_0024F838(void *, s32);

void *func_002E46E8(void *arg0, void *arg1, void *arg2, void *arg3, f32 arg4) {
    u8 sp[0x60];
    void *t = func_002E3630(arg0, arg1, arg2, arg3, arg4);
    if (t == 0) return 0;
    func_0024F830(sp);
    void *r = func_0024F860(sp, t, arg2, arg3, arg4);
    func_0024F838(sp, 2);
    return r;
}

/* func_002E4770 */
typedef struct {
    u8 pad[0x1C];
    s32 f1C;
} S_E4770_ItemA;

typedef struct {
    u8 pad[0x0C];
    s32 f0C;
} S_E4770_ItemB;

typedef struct {
    u8 pad0[0x10];
    void **arr10;
    s32 end14;
    u8 pad18[4];
    void **arr1C;
    s32 end20;
    u8 pad24[4];
    void **p28;
} S_E4770_Obj;

void func_002E4770(S_E4770_Obj *arg0) {
    s32 n, i;
    n = (arg0->end14 - (s32)arg0->arr10) >> 2;
    for (i = 0; i < n; i++) {
        S_E4770_ItemA *e = (S_E4770_ItemA *)arg0->arr10[i];
        if (e) e->f1C = 0;
    }
    n = (arg0->end20 - (s32)arg0->arr1C) >> 2;
    for (i = 0; i < n; i++) {
        S_E4770_ItemB *e = (S_E4770_ItemB *)arg0->arr1C[i];
        if (e) e->f0C = 0;
    }
    ((s32 *)arg0->p28)[0xE] = 0;
}
