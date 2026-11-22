extern void func_001D4040(void*,const char*),func_001E2460(void*,void*),func_001E2C78(void*,const char*,s32);
extern void *D_002AD408(u32); extern char D_0044C3F0[],D_0044DD18[],D_0044BC38[];
void *func_0014B5E0(char *a) {u32 k[8],c[4]; u32 *p=D_002AD408(0x24),*q; u32 v;
func_001D4040(k,D_0044C3F0); p[2]=p[3]=0; v=(u32)D_0044DD18; p[1]=0; q=p+5; p[0]=0; q[0]=0; q[1]=q[2]=0; p[4]=v; p[8]=k[0];func_001E2460(c,p);func_001E2C78(c,D_0044BC38,*(s32*)(a+12));return p;}
