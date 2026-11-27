extern void func_001E2460(void*,s32),func_001E2470(void*,const char*,void*),func_001E2510(void*,const char*,void*),func_001E25B0(void*,const char*,void*),func_001E28F8(void*,const char*,void*);
extern char D_00472930[],D_00472940[],D_00472950[],D_00472960[],D_00472978[],D_00472990[],D_004729A0[],D_004729B8[],D_004729D0[],D_004729E0[],D_004729E8[];
void func_001A7DC8(void *a,s32 b,s32 c){char sp[16];char *p=a;
func_001E2460(sp,c);
func_001E28F8(sp,D_00472930,p+0xc);
func_001E2470(sp,D_00472940,p+0x1c);
func_001E2470(sp,D_00472950,p+0x28);
func_001E2470(sp,D_00472960,p+0x2c);
func_001E2510(sp,D_00472990,p+0x40);
func_001E2510(sp,D_004729A0,p+0x44);
func_001E2510(sp,D_00472978,p+0x38);
func_001E2470(sp,D_004729B8,p+0x30);
func_001E25B0(sp,D_004729D0,p+0x58);
func_001E2510(sp,D_004729E0,p+0x50);
func_001E25B0(sp,D_004729E8,p+0x120);
*(s32*)(p+0x58)*=30;
*(float*)(p+0x48)=__builtin_fabsf(*(float*)(p+0x48));
*(float*)(p+0x4c)=__builtin_fabsf(*(float*)(p+0x4c));
}
