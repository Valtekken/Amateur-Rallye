typedef struct {s32 value;} CopyTag;extern s32 func_002C5160(s32,s32,s32,CopyTag);
s32 func_003978C8(register s32 a,register s32 b,register s32 c,register s32 d){return func_002C5160(a,b,c,(CopyTag){0});}
extern s32 *D_0049E564,*D_0049E56C;
void func_00405298(s32 a){s32 off=a*8;if(a<0)a=(s32)D_0049E564;else a=(s32)D_0049E56C;*(s32*)(off+a)=0;}
extern s32 func_004052C0(s32,s32,s32,s32,s32,s32,s32);
s32 func_004053F8(s32 a,s32 b,s32 c,s32 d,s32 e,s32 f){return func_004052C0(a,0,b,c,d,e,f);}
s32 func_00405438(s32 a,s32 b,s32 c,s32 d,s32 e,s32 f){return func_004052C0(a,1,b,c,d,e,f);}
