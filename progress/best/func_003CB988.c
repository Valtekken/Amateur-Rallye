extern void func_003CB508(void*, void*, f32);
extern void func_003CB360(void*, void*);
extern void func_003CB3A0(void*, void*);

void func_003CB988(void* arg0, void* arg1_unused, void* arg2, void* arg3) {
    f32 sp[4];
    f32 neg_one = -1.0f;
    
    func_003CB508(sp, 0, neg_one);
    func_003CB360(arg0, sp);
    func_003CB508(sp, arg2, neg_one);
    func_003CB360((char*)arg0 + 0x10, sp);
    func_003CB508(sp, arg3, neg_one);
    func_003CB360((char*)arg0 + 0x20, sp);
    
    f32 zero = 0.0f;
    f32 one = 1.0f;
    *(f32*)((char*)arg0 + 0x30) = zero;
    *(f32*)((char*)arg0 + 0x3C) = one;
    *(f32*)((char*)arg0 + 0x38) = zero;
    func_003CB3A0(arg0, arg0);
    *(f32*)((char*)arg0 + 0x34) = zero;
}
