typedef struct{s32 value;}CopyTag;extern s32 func_002C5160(s32,s32,s32,CopyTag);
s32 func_003978C8(register s32 a,register s32 b,register s32 c,register s32 d){return func_002C5160(a,b,c,(CopyTag){0});}
extern s32 func_003FA760();s32 func_002AD780(s32 a,s32 b,s32 c){return func_003FA760()!=0?0:c;}
extern void(*D_00426AC0)(void);void func_002AD758(void){D_00426AC0();}
extern s32 D_00494CA8;extern void func_002AD678(void);void func_002AD728(void){if(!D_00494CA8){D_00494CA8=1;func_002AD678();}}
