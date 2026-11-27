extern void func_001E2460(void*,s32),func_001E2510(void*,const char*,void*),func_001E25B0(void*,const char*,void*),func_001E28F8(void*,const char*,void*),func_001E2B98(void*,const char*,s32);
extern char D_00472BD8[],D_00472BF0[],D_00472C08[],D_00472C18[],D_00472C28[],D_00472C38[],D_00472C48[],D_00472C58[],D_00472C60[];
void func_001AF0B0(void *a,s32 b,s32 c){char sp[16];char *p=a;
func_001E2460(sp,c);
func_001E28F8(sp,D_00472BD8,p+0xa0);
func_001E28F8(sp,D_00472BF0,p+0xa4);
func_001E2510(sp,D_00472C08,p+0x14);
func_001E2510(sp,D_00472C18,p+0x18);
func_001E2510(sp,D_00472C28,p+0xc);
func_001E2510(sp,D_00472C38,p+0x10);
func_001E2B98(sp,D_00472C48,*(s32*)(p+0x94));
func_001E25B0(sp,D_00472C58,p+0x30);
func_001E25B0(sp,D_00472C60,p+0x2c);
if(*(s32*)(p+0x30)>=11) *(s32*)(p+0x30)=10;
if(*(s32*)(p+0x2c)>=11) *(s32*)(p+0x2c)=10;
}
