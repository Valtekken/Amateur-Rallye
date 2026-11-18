extern void func_001D4040(void*,const char*),func_001E2460(void*,void*),func_001E25B0(void*,const char*,void*),func_001E2470(void*,const char*,void*);
extern char D_0044BC38[],D_0044C238[],D_0044C258[],D_0044C220[],D_0044C9C0[],D_0044C468[],D_0044C800[],D_0044C4B8[],D_0044C7C0[];
void func_0014A518(s32*p,s32 u,void*a){s32 k[4];func_001E2460(k,a);func_001E25B0(k,D_0044BC38,p+3);func_001E25B0(k,D_0044C238,p+4);func_001E2470(k,D_0044C258,p+5);if(p[4]<=0)p[4]=1;}
void*func_0014A3E8(s32*p){u32 k[4];func_001D4040(k,D_0044C220);p[0]=-1;p[1]=k[0];p[2]=(s32)D_0044C9C0;p[4]=40;p[3]=0;p[5]=0;return p;}
void*func_0014C208(s32*p){u32 k[4];func_001D4040(k,D_0044C468);p[0]=-1;p[1]=k[0];p[2]=(s32)D_0044C800;*(float*)(p+13)=0.0333333f;p[3]=0;p[12]=0;p[14]=0;p[15]=0;p[16]=0;p[17]=0;p[18]=0;p[19]=0;p[20]=0;p[4]=0;p[5]=0;p[6]=0;p[7]=0;p[8]=0;p[9]=0;p[10]=0;return p;}
static inline void z(s32*p){p[0]=0;p[1]=0;p[2]=0;}
static inline void col(float*p){p[0]=0.9f;p[1]=0.9f;p[2]=0.9f;*(s32*)(p+3)=0;}
void*func_0014CF08(s32*p){u32 k[8];func_001D4040(k,D_0044C4B8);p[1]=k[0];p[0]=-1;p[2]=(s32)D_0044C7C0;p[3]=0;z(p+4);z(p+7);p[10]=0;col((float*)(p+11));p[16]=0;p[17]=0;p[18]=0;p[19]=0;p[15]=0;return p;}
