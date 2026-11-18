s32 func_003CB150(register void* arg0) {
    register u32* p = *(u32**)arg0;
    register u32* base = *(u32**)((char*)arg0 + 8);
    
    if ((u32)p & 0xC) {
        do {
            *p = 0;
            p++;
        } while ((u32)p & 0xC);
    }
    if (base) {
        s32 diff = ((s32)((char*)p - (char*)base) >> 4) - 1;
        *base += diff;
    }
    *(u32**)arg0 = p;
    *(u32**)((char*)arg0 + 8) = 0;
    return (s32)p;
}

extern void func_003CB668(f32);
extern void func_003CB7B8(s32, s32, f32);
extern void func_003CB710(s32, s32, f32);

void func_003CB860(s32 arg0, void* arg2) {
    func_003CB668(*(f32*)((char*)arg2 + 8));
    func_003CB7B8(arg0, arg0, *(f32*)((char*)arg2 + 4));
    func_003CB710(arg0, arg0, *(f32*)((char*)arg2 + 0));
}

extern void func_003CB318(void*, void*, void*);
extern void func_003CB360(void*, void*);
extern void func_003CB3E8(void*, void*);
extern void func_003CB520(void*, void*, void*);
extern void func_003CB5C8(void*);

void func_003CB8D8(void* arg0, void* arg1, void* arg2, void* arg3) {
    f32 sp[16];
    f32 sp40[4];
    f32 sp10[4];
    f32 sp20[4];
    func_003CB5C8(sp);
    func_003CB318(sp40, arg3, arg2);
    func_003CB360(sp, sp40);
    func_003CB360(sp20, arg2);
    func_003CB318(sp10, sp20, sp);
    func_003CB520(sp, sp, arg1);
    func_003CB3E8(arg0, sp);
}

extern void func_003CB508(void*, void*, f32);
extern void func_003CB360(void*, void*);
extern void func_003CB3A0(void*, void*);

void func_003CB988(void* arg0, void* arg1, void* arg2, void* arg3) {
    f32 sp[4];
    
    func_003CB508(sp, NULL, -1.0f);
    func_003CB360(arg0, sp);
    func_003CB508(sp, arg1, -1.0f);
    func_003CB360((char*)arg0 + 0x10, sp);
    func_003CB508(sp, arg2, -1.0f);
    func_003CB360((char*)arg0 + 0x20, sp);
    
    *(f32*)((char*)arg0 + 0x30) = 0.0f;
    *(f32*)((char*)arg0 + 0x3C) = 1.0f;
    *(f32*)((char*)arg0 + 0x38) = 0.0f;
    func_003CB3A0(arg0, arg0);
    *(f32*)((char*)arg0 + 0x34) = 0.0f;
}
