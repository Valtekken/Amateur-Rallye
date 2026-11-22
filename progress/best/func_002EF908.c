extern f32 func_0015ACC8(void);
extern f32 func_003F2F50(f32);
extern f32 func_003F3140(f32);
extern f32 func_003F36F0(s32,s32,s32,s32,s32,void*,s32,s32,f32,s32);
extern s32 D_0042A950[];
typedef struct { u64 v; } __attribute__((packed)) U64P;
void func_002EF908(s32 a0,s32 a1,s32 a2,s32 a3,s32 a4,s32 a5,s32 a6,f32 f0,f32 f1,f32 f2,f32 f3){
    s32 i; f32 w=(f32)D_0042A950[0x2940>>2]/640.0f, h=(f32)D_0042A950[0x2944>>2]/480.0f;
    s32 sp4=(s32)(w*256.0f+2048.0f), sp30=(s32)(h*256.0f+2048.0f);
    for(i=31;i>=0;i--){s32 j; *(U64P*)((char*)(a0+0x7C0)+0x60)=*(U64P*)((char*)(a0+0x7C0)+0x40);
      (void)sp4;(void)sp30;(void)f0;(void)f1;(void)f2;(void)f3;}
}
