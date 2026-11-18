extern void func_003CB668(f32);
extern void func_003CB7B8(s32, s32, f32);
extern void func_003CB710(s32, s32, f32);

void func_003CB860(s32 arg0, s32 arg1, void* arg2) {
    func_003CB668(*(f32*)((char*)arg2 + 8));
    func_003CB7B8(arg0, arg0, *(f32*)((char*)arg2 + 4));
    func_003CB710(arg0, arg0, *(f32*)((char*)arg2 + 0));
}
