extern void func_001D4040(void*,const char*);
extern void *D_002AD408(s32);
extern void func_001E2460(void*,void*);
extern void func_001E2C78(void*,const char*,s32);
extern void func_001E2B98(void*,const char*,s32);
extern void func_001E25B0(void*,const char*,void*);
extern s32 func_00193B60(void);
extern s32 func_001930D8(s32,s32);
extern char D_0044BEF0[],D_0044BF00[],D_0044BF18[],D_0044BC38[],D_0044CB40[],D_0044DD18[];
extern s32 func_0021E290(s32);
extern void *func_00205BF8(s32);
extern void func_0021E540(void*,void*,s32,s32,s32);
extern void func_0021E740(void*,s32);

void *func_00145E98(void *arg0){u32 tmp[4];s32*p=arg0;func_001D4040(tmp,D_0044BEF0);p[3]=0;p[4]=0;p[5]=0;p[1]=tmp[0];p[0]=-1;p[2]=(s32)D_0044CB40;func_001D4040(p+5,D_0044BF00);return p;}
void *func_00145F08(void *arg0){u32 tmp[8];u32 reg[4];s32*p; s32*v1; s32 id; p=D_002AD408(0x24);func_001D4040(tmp,D_0044BEF0);id=tmp[0];v1=p+5;p[2]=0;p[4]=(s32)D_0044DD18;p[3]=0;p[1]=0;p[0]=0;p[5]=0;v1[2]=0;v1[1]=0;p[8]=id;func_001E2460(reg,p);func_001E2C78(reg,D_0044BC38,*(s32*)((char*)arg0+0xC));func_001E2B98(reg,D_0044BF18,*(s32*)((char*)arg0+0x10));return p;}
void func_0014ED38(void *arg0,s32 arg2){s32 sp[6];func_001E2460(sp,(void*)arg2);func_001E25B0(sp,D_0044BC38,sp+1);*(s32*)((char*)arg0+0x28)=func_001930D8(func_00193B60(),sp[1]);}
void *func_0014ED90(void){void*p;void*q;s32 n;p=func_0021E290(D_002AD408(0x7C));q=func_00205BF8(D_002AD408(0x90));n=*(s32*)((char*)q+0x88)+1;*(s64*)((char*)q+0x78)=((*(s64*)((char*)q+0x78))&~3)|1;*(s32*)((char*)q+0x64)=2;*(s32*)((char*)q+0x88)=n;func_0021E540(p,q,n,1,2);func_0021E740(p,2);*(s32*)p&=~2;return p;}
