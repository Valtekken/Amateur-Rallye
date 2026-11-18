extern s32 D_0042684C,D_0047AD68,D_00494B40;
extern void func_001D4040(s32*,s32*),func_0029ACF8(s32,s32);
void func_0029AC68(s32 a,s32 b){if(!D_0042684C){func_001D4040(&D_00494B40,&D_0047AD68);D_0042684C=1;}if(func_001E3650(func_001E4280(),(s32)&D_00494B40)<=0)func_0029ACF8(a,b);}
extern void *D_0044DCD8,*D_0047CB38,*D_00494B98;
void *func_0029A698(void*a){s32*p; s32 i;void*v,*vt;*(s32*)(a+4)=0;*(void**)(a+8)=&D_0044DCD8;v=D_00494B98;vt=&D_0047CB38;*(s32*)a=-1;p=a+20;*(void**)(a+8)=vt;i=3;*(void**)(a+4)=v;do{*p=0;i--;p++;}while(i!=-1);*(s32*)(a+12)=0;*(s32*)(a+16)=0;*(s32*)(a+40)=0;*(s32*)(a+36)=0;return a;}
#define F(a,o) (*(volatile float*)((char*)(a)+(o)))
#define I(a,o) (*(s32*)((char*)(a)+(o)))
#define P(a,o) (*(void**)((char*)(a)+(o)))
void func_0029B3E0(void*a,void*b){void*d=a+84,*p;float f=F(a,16);F(a,72)=f;I(a,60)=0;I(a,64)=0;F(a,76)=(F(a,20)-f)/(float)(I(a,28)-I(a,24));p=P(b,80);F(a,84)=F(p,80);p+=80;F(d,4)=F(p,4);F(d,8)=F(p,8);p=P(b,76);if(p){F(a,84)=F(p,80);p+=80;F(d,4)=F(p,4);F(d,8)=F(p,8);}I(a,108)=1;}
void func_0029B5E8(s32 unused,void*b,float scale){volatile float t[4];float z;void*p=b+16,*q=b+32,*r=b+48;t[1]=0;F(b,0)=1;z=t[1];t[1]=1;t[2]=z;t[3]=z;t[0]=z;F(b,4)=z;F(b,8)=z;F(b,12)=z;F(b,16)=z;F(p,4)=1;F(p,8)=t[2];F(p,12)=t[3];t[2]=1;t[3]=z;t[0]=z;t[1]=z;F(b,32)=z;F(q,4)=z;F(q,8)=t[2];F(q,12)=t[3];t[2]=z;t[0]=z;t[1]=z;t[3]=1;F(b,48)=z;F(r,4)=z;F(r,8)=t[2];F(r,12)=t[3];F(b,40)=scale;F(b,0)=scale;F(b,20)=scale;}
