typedef union{f32 f;s32 i;} FW;
f32 func_003F72D0(f32 x,f32 y){FW a,b;s32 ix,iy;b.f=y;iy=b.i;a.f=x;ix=a.i;a.i=(ix&0x7fffffff)|(iy&0x80000000);return a.f;}
extern char*D_004404DC;void*func_002B1FC0(s32,...);
typedef struct EB{struct EB*next;s32 n;s32 cb[32];}EB;
s32 func_003F7320(s32 cb){EB*p=*(EB**)(D_004404DC+0x148);s32 n;if(!p){p=(EB*)(D_004404DC+0x14c);*(EB**)(D_004404DC+0x148)=p;}n=p->n;if(n>=32){char*r;p=(EB*)func_002B1FC0(0x88,p);if(!p)return -1;r=D_004404DC;n=p->n=0;*(char**)p=*(char**)(r+0x148);*(char**)(r+0x148)=(char*)p;}p->cb[n]=cb;p->n=n+1;return 0;}
s64 func_003FB2B8(const char*,void*,s32);s32 func_003F73B8(const char*s){return (s32)func_003FB2B8(s,0,10);}
