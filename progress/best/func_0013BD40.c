typedef struct {
    char pad[0x10];
    s32 unk_10;
    s32 array[11];
    s32 unk_40;
} VehicleList;

extern char D_0044B2F8[];
extern void func_0013B560(void *arg0, s32 *arg1, s32 arg2);
extern void func_0013B638(void *arg0);
extern void func_0013BAD0(void *arg0);
extern s32 func_001E4280(void);
extern void func_001D4040(void *arg0, const char *arg1);
extern void *func_001E37E8(s32 arg0, void *arg1);

void func_0013BD40(void *arg0, s32 *arg1, s32 arg2) {
    VehicleList *v = (VehicleList *)arg0;
    s32 *array_ptr;
    s32 val;
    s32 temp;
    void *result;
    u32 field_0;
    u32 field_4;
    
    if (arg1 != NULL) {
        array_ptr = &v->array[v->unk_10];
        val = *array_ptr;
        if (val > 0) {
            *array_ptr = val - 1;
            goto block_5;
        }
    } else {
        temp = func_001E4280();
        func_001D4040(&temp, D_0044B2F8);
        result = func_001E37E8(temp, &temp);
        field_0 = *(u32 *)result;
        field_4 = *(u32 *)((char *)result + 4);
        array_ptr = &v->array[v->unk_10];
        val = *array_ptr + 1;
        if (val < (s32)((field_4 - field_0) >> 2)) {
            *array_ptr = val;
            goto block_5;
        }
    }
    return;

block_5:
    func_0013B560(v, array_ptr, arg2);
    func_0013B638(v);
    func_0013BAD0(v);
    v->unk_40 = 2;
}
