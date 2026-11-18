extern char D_0044DD18[],D_0047AF40[],D_0047B288[],D_0047B298[],D_0047B280[];
extern void*D_002AD408(int);extern void func_001D4040(void*,const char*);extern volatile char func_001E2460(void*,int);extern void func_001E2C08(void*,const char*,float);
static inline void z(float*p){p[0]=0;((int*)p)[1]=0;((int*)p)[2]=0;}
static inline void init(int*p,int k){p[2]=0;p[4]=(int)D_0044DD18;p[3]=0;p[1]=0;p[0]=0;z((float*)(p+5));p[8]=k;}
void*func_0028A9B0(char*a){int k[8],r[4];int*p=D_002AD408(36);func_001D4040(k,D_0047B288);init(p,k[0]);func_001E2460(r,(int)p);func_001E2C08(r,D_0047AF40,*(float*)(a+16));func_001E2C08(r,D_0047B298,*(float*)(a+20));return p;}
void*func_0028A788(char*a){int u[4],r[4];int*p=D_002AD408(36);init(p,0);func_001E2460(r,(int)p);func_001E2C08(r,D_0047AF40,*(float*)(a+12));func_001E2C08(r,D_0047B280,*(float*)(a+16));return p;}
extern char D_0047ADC0[],D_0047B218[],D_0047B228[],D_0047B238[],D_0047B248[];
extern void func_001E2A48(void*,const char*,void*),func_001E2470(void*,const char*,void*),func_001E2C78(void*,const char*,s32);
void func_00289840(char*a,s32 b,s32 c){s32 r[4];func_001E2460(r,c);func_001E2A48(r,D_0047B218,a+24);func_001E2A48(r,D_0047B228,a+48);func_001E2A48(r,D_0047B238,a+36);func_001E2470(r,D_0047B248,a+20);func_001E2C78(r,D_0047ADC0,*(s32*)(a+12));}
