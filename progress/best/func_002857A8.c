typedef struct{s32 value;}CopyTag;extern s32 func_002C5160(s32,s32,s32,CopyTag);s32 func_003978C8(register s32 a,register s32 b,register s32 c,register s32 d){return func_002C5160(a,b,c,(CopyTag){0U & 1U});}
extern char D_0047AD68[],D_0047B028[],D_0047B040[],D_0047D1F8[];extern void func_001D4040(void*,const char*);extern volatile unsigned char func_00289698(void*,int);
void*func_00286A20(int*p){int k[4];void*s2=p+4;void*s1=p+21;func_001D4040(k,D_0047B028);p[0]=-1;p[4]=0;p[1]=k[0];p[2]=(int)D_0047D1F8;func_00289698(p+5,k[0]);p[21]=0;func_001D4040(s2,D_0047B040);p[3]=0;func_001D4040(s1,D_0047AD68);return p;}
extern float func_003F33C8(float);
float func_00285808(float f){if(!(f>=1.0f))goto calc;goto zero;calc:return func_003F33C8(f);zero:return 0.0f;}
void func_002857A8(void*a,float*b,void*c,float*d){float x[3],y[3],z[3];float f2=d[1],f5=b[1];float diff=f2-f5;float f1=b[2],f0=d[0],f4=b[0],f6=d[2];x[2]=f1;z[0]=f4;y[0]=f0;y[1]=f2;y[2]=f6;x[0]=f4;x[1]=f5;z[2]=f1;{float out=f2-diff* *(float*)((char*)a+100);z[1]=out;b[1]=out;b[2]=z[2];}}
