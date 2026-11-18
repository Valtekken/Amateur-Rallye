extern void func_003CB318(void*, void*, void*);
extern void func_003CB360(void*, void*);
extern void func_003CB3E8(void*, void*);
extern void func_003CB520(void*, void*, void*);
extern void func_003CB5C8(void*);

void func_003CB8D8(void* arg0, void* arg1, void* arg2, void* arg3) {
    f32 sp[20];
    
    func_003CB5C8(sp);
    func_003CB318(sp + 16, arg3, arg2);
    func_003CB360(sp, sp + 16);
    func_003CB360(sp + 8, arg2);
    func_003CB318(sp + 4, sp + 8, sp);
    func_003CB520(sp, sp, arg1);
    func_003CB3E8(arg0, sp);
}
