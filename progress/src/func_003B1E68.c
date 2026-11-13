extern int D_004883C0[];
#define F(p,t,o) (*(t*)((s8*)(p)+(o)))
void *func_003BFDD0(s8*p){volatile f32 x,y,z; f32 v; volatile f32*q=(volatile f32*)(p+24); x=0;F(p,volatile s32,0)=0;v=x;F(p,void* volatile,16)=D_004883C0;z=0;F(p,volatile s32,8)=0;F(p,volatile s32,12)=0;F(p,volatile s32,4)=0;F(p,volatile s32,20)=0;y=0;q[0]=v;q[1]=v;q[2]=z;q[4]=1.0f;q[3]=-1.0f;return p;}
extern s32 func_003B3560(u32);void func_003B1E68(register u32 a,register u32 b,register s32 c){while(a<b){func_003B3560(a);a+=8;}}
extern s32 func_003B34A8(u32);void func_003B1D40(register u32 a,register u32 b,register s32 c){while(a<b){func_003B34A8(a);a+=8;}}
extern s32 func_003B3480(u32);void func_003B1C08(register u32 a,register u32 b,register s32 c){while(a<b){func_003B3480(a);a+=8;}}
