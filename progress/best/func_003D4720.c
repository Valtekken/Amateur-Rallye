#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK;
M2C_UNK func_003D4168(void **, s32, M2C_UNK);
M2C_UNK func_003D4D70(s32);
static inline __attribute__((always_inline)) s32 check_ok(u8 *p){
    if (p[0x1A]) return 0;
    s32 t = *(s32*)((char*)p+4);
    if (t) func_003D4D70(t);
    return 1;
}
void **func_003D4720(void **arg0, s32 arg1) {
    if (check_ok(*(u8 **)arg0)) {
        s32 var_5 = arg1;
        s32 var_6 = 1;
        if ((var_5 < 0) && !(*(u64*)((char*)*(void**)arg0 + 0x10) & 0x60)) {
            var_5 = 0 - var_5;
            var_6 = -1;
        }
        func_003D4168(arg0, var_5, var_6);
    }
    return arg0;
}
