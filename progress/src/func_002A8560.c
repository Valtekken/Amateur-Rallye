typedef struct{s32 value;}CopyTag;extern s32 func_002C5160(s32,s32,s32,CopyTag);
s32 func_003978C8(register s32 a,register s32 b,register s32 c,register s32 d){return func_002C5160(a,b,c,(CopyTag){0});}
extern char D_0047D4F8[],D_0044DCD8[];extern void D_002AD390(void*),func_001D1900(void*);
void func_002A8560(void*p,int f){((void**)p)[2]=D_0047D4F8;func_001D1900((char*)p+24);((void**)p)[2]=D_0044DCD8;if(f&1)D_002AD390(p);}
extern void func_0027E698(void*,float);
#define F(p,o) (*(float*)((char*)(p)+(o)))
void func_002A8358(void*p,float f){if(f<-1.0f)F(p,52)=-1.0f;else{if(f>1.0f)F(p,52)=1.0f;else F(p,52)=f;}func_0027E698((char*)p+100,F(p,52));}
void func_002A82A8(void*p,float f){if(f<-1.0f)F(p,60)=-1.0f;else{if(f>1.0f)F(p,60)=1.0f;else F(p,60)=f;}func_0027E698((char*)p+132,F(p,60));}
