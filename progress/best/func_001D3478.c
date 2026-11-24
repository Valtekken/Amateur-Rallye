extern void *D_002AD408(s32);
extern s32 D_002AD5A8(s32);
extern void func_001DAD18(s32, void *);
extern void *func_002C7190(void);
extern s32 func_003F931C(s32, s32, s32);
extern u32 D_00476718;

void func_001D3478(void *arg0, s32 *arg1, s32 arg2, s32 arg3) {
    void *temp_2;
    void *temp_6;
    s32 d_res;
    s32 val;
    void *r;

    d_res = D_002AD5A8(arg3);
    func_003F931C(d_res, arg2, arg3);
    temp_2 = D_002AD408(0x10);
    temp_6 = *(void **)arg0;
    
    *(s32 *)((char *)temp_2 + 8) = d_res;
    *(s32 *)((char *)temp_2 + 0xC) = arg3;
    *(u32 *)((char *)temp_2 + 4) = &D_00476718;
    *(s32 *)temp_2 = 0;
    
    if (temp_6 != temp_2) {
        if (temp_6 != NULL) {
            s32 t = *(s32 *)temp_6 - 1;
            *(s32 *)temp_6 = t;
            if (t == 0) {
                void *v = *(void **)((char *)temp_6 + 4);
                ((void (*)(void *, s32, void *))(*(void **)((char *)v + 0xC)))((char *)temp_6 + *(s16 *)((char *)v + 8), 3, temp_6);
            }
        }
        *(void **)arg0 = temp_2;
        if (temp_2 != NULL) {
            *(s32 *)temp_2 = *(s32 *)temp_2 + 1;
        }
    }
    
    val = *arg1;
    *(s32 *)((char *)arg0 + 0x10) = val;
    
    r = func_002C7190();
    func_001DAD18(*(s32 *)((char *)r + 0x2C), (char *)arg0 + 4);
}
