/* identical to func_00288E40 (matched), with its names changed by decompdecomp */
extern char D_0044DD18[],D_0047B688[],D_0047B698[];
extern void*D_002AD408(int);extern volatile char func_001E2460(void*,int);extern void func_001E2B98(void*,const char*,int);
static inline void z(float*p){p[0]=0;((int*)p)[1]=0;((int*)p)[2]=0;}
static inline void init(int*p,int k){p[2]=0;p[4]=(int)D_0044DD18;p[3]=0;p[1]=0;p[0]=0;z((float*)(p+5));p[8]=k;}
void*func_0028F920(char*a){int u[4],r[4];int*p=D_002AD408(36);init(p,0);func_001E2460(r,(int)p);func_001E2B98(r,D_0047B688,*(int*)(a+12));func_001E2B98(r,D_0047B698,*(int*)(a+16));return p;}
