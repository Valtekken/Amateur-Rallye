typedef struct{s32 value;}CopyTag;extern s32 func_002C5160(s32,s32,s32,CopyTag);
s32 func_003978C8(register s32 a,register s32 b,register s32 c,register s32 d){return func_002C5160(a,b,c,(CopyTag){0});}
extern int D_0047C938,D_0047CAB8,D_0044DCD8;extern void D_002AD390(void*);
#define F(p,t,n) (*(t*)((char*)(p)+(n)))
void func_002A9C90(void*p,int flags){F(p,void*,8)=&D_0047C938;D_002AD390(F(p,void*,60));D_002AD390(F(p,void*,56));F(p,void*,8)=&D_0044DCD8;if(flags&1)D_002AD390(p);}
void func_002A9908(void*p,int flags){F(p,void*,8)=&D_0047CAB8;D_002AD390(F(p,void*,48));F(p,void*,8)=&D_0044DCD8;if(flags&1)D_002AD390(p);}
typedef struct{float x,y,z;}V3;
void func_002A98D8(void*p,float x,float y){V3 v;v.x=x;v.y=y;v.z=0;F(p,float,12)=v.x;p=(char*)p+12;F(p,float,4)=v.y;F(p,float,8)=v.z;}
