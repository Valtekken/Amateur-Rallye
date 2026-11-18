typedef struct {s32 value;}CopyTag;extern s32 func_002C5160(s32,s32,s32,CopyTag);
s32 func_003978C8(register s32 a,register s32 b,register s32 c,register s32 d){return func_002C5160(a,b,c,(CopyTag){0});}
float func_0027DED8(float a,float b,float c){float r=a;if(r<b)return b;if(c<r)r=c;return r;}
extern void*D_002AD408(int);extern void func_001D4040(void*,const char*);extern char D_00479FB8[],D_0047A088[];
void*func_0027DDB0(char*a){int k[4];int*p=D_002AD408(12);int v,k0;func_001D4040(k,D_00479FB8);v=*(int*)(a+8);k0=k[0];p[1]=(int)D_0047A088;p[0]=k0;p[2]=v;return p;}
extern u8*func_001C6750(s32);
float func_0027D708(char*a){return (float)*func_001C6750(*(s32*)a)/ *(float*)(a+16);}
