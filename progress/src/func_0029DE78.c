extern void func_001E2460(void *,void *),func_001E2470(void *,const char *,void *),func_001E2510(void *,const char *,void *),func_001E25B0(void *,const char *,void *),func_001E28F8(void *,const char *,void *),func_001E2A48(void *,const char *,void *);
extern char D_0047BB50[],D_0047C120[],D_0047C128[],D_0047BC10[],D_0047BCA8[],D_0047C130[],D_0047C140[],D_0047B4A8[],D_0047C150[],D_0047C160[],D_0047C170[];
extern int func_001D4010(void *); extern void func_001D2CD8(void *,int); extern void *func_0017E620(void); extern void func_001D4810(void *,int);
void func_0029DE78(char *a,void *b,void *c) {
 int z[4]; char sp[16]; char *p=a+0x40,*q=a+0x44; void *obj,*vt; int r;
 func_001E2460(sp,c);
 func_001E25B0(sp,D_0047BB50,a+0x30);
 func_001E28F8(sp,D_0047C120,p);
 func_001E25B0(sp,D_0047C128,a+0x48);
 func_001E28F8(sp,D_0047BC10,a+0x50);
 func_001E2A48(sp,D_0047BCA8,a+0x18);
 func_001E2510(sp,D_0047C130,a+0x34);
 func_001E2510(sp,D_0047C140,a+0x38);
 func_001E2510(sp,D_0047B4A8,a+0x3c);
 func_001E2470(sp,D_0047C150,a+0x28);
 func_001E25B0(sp,D_0047C160,a+0x2c);
 func_001E28F8(sp,D_0047C170,a+0x64);
 func_001D2CD8(q,func_001D4010(p));
 obj=func_0017E620(); vt=*(void **)obj;
 r=(*(int (**)(void *,int))((char *)vt+0x24))((char *)obj+*(short *)((char *)vt+0x20),*(int *)(a+0x30));
 z[0]=0; func_001D4810(z,r); *(int *)(a+0x68)=z[0];
}
