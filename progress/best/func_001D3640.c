extern void* D_002AD408(s32);
extern s32 D_002AD5A8(s32);
extern void func_001DAD18(s32, void*);
extern void* func_002C7190(void);
extern s32 func_003F931C(s32, s32, s32);
extern u32 D_00476718;

void func_001D3640(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 var_17 = arg1;
    if (arg3 == 0) {
        var_17 = D_002AD5A8(arg2);
        func_003F931C(var_17, arg1, arg2);
    }
    void *temp_2 = D_002AD408(0x10);
    void *temp_6 = *(void**)arg0;
    *(s32*)((char*)temp_2 + 8) = var_17;
    *(s32*)((char*)temp_2 + 0xC) = arg2;
    *(void**)((char*)temp_2 + 4) = &D_00476718;
    *(s32*)temp_2 = 0;
    if (temp_6 != temp_2) {
        if (temp_6 != 0) {
            s32 t = *(s32*)temp_6 - 1;
            *(s32*)temp_6 = t;
            if (t == 0) {
                void *v = *(void**)((char*)temp_6 + 4);
                ((void(*)(void*,s32,void*))(*(void**)((char*)v + 0xC)))((char*)temp_6 + *(s16*)((char*)v + 8), 3, temp_6);
            }
        }
        *(void**)arg0 = temp_2;
        if (temp_2 != 0) {
            *(s32*)temp_2 = *(s32*)temp_2 + 1;
        }
    }
    void *r = func_002C7190();
    func_001DAD18(*(s32*)((char*)r + 0x14), (char*)arg0 + 4);
    void *t2 = *(void**)((char*)arg0 + 0x14);
    ((void(*)(void*))(*(void**)((char*)t2 + 0x24)))((char*)arg0 + *(s16*)((char*)t2 + 0x20));
}
