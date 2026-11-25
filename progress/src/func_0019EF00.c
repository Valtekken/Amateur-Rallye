extern void *D_002AD408(s32 size);
extern void *func_0026BB88(void *ptr, s32 val);
extern void func_001E3D10(s32 a, void *b, s32 c);
extern s32 func_001E4280(void);
extern void func_001D4040(s32 *sp, const char *str);
extern s32 func_001E3598(s32 a, void *sp);
extern char D_0044E870[];
extern char D_0044EA80[];

typedef struct {
    char pad0[0xC];
    void *unkC;
    char pad10[0x28];
    s32 unk38;
    s32 unk3C;
    s32 unk40;
    char pad44[4];
    s32 unk48;
} MyClass;

void func_0019EF00(MyClass *obj) {
    s32 temp;
    s32 sp_buffer[4];
    
    obj->unkC = func_0026BB88(D_002AD408(0x4C), -1);
    
    temp = func_001E4280();
    func_001E3D10(temp, (char *)obj + 0x2C, 0);
    
    temp = func_001E4280();
    func_001E3D10(temp, (char *)obj + 0x30, 0);
    
    temp = func_001E4280();
    func_001D4040(sp_buffer, D_0044EA80);
    obj->unk3C = func_001E3598(temp, sp_buffer);
    
    temp = func_001E4280();
    func_001D4040(sp_buffer, D_0044E870);
    s32 playback = func_001E3598(temp, sp_buffer);
    
    obj->unk48 = 0;
    obj->unk40 = playback;
    obj->unk38 = (obj->unk3C != 0) | (playback != 0);
}
