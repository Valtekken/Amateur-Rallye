typedef struct Entry{s32 w[7];}Entry;extern Entry D_0049B9D0[][4];extern s32 func_003CAD00(s32,s32,s32);
s32 func_003CAE68(s32 a,s32 b){if(!D_0049B9D0[a][b].w[4])return 0;return func_003CAD00(a,b,0);}
extern char D_0049B980[];extern s32 D_0049BBC0[];extern s32 func_00405E90(void*,s32,s32,void*,s32,void*,s32,s32,s32);
s32 func_003CAF90(void){D_0049BBC0[0]=12;if(func_00405E90(D_0049B980,1,0,D_0049BBC0,128,D_0049BBC0,128,0,0)<0)return 0;return D_0049BBC0[3];}
s32 func_003CAFF8(s32 a){D_0049BBC0[1]=a;D_0049BBC0[0]=13;if(func_00405E90(D_0049B980,1,0,D_0049BBC0,128,D_0049BBC0,128,0,0)<0)return 0;return D_0049BBC0[3];}
extern u8 D_00488C08;extern char*D_00436158[];extern void func_003FA8A4(u8*,char*);
void func_003CA558(u32 a,u8*b){if(a<8){func_003FA8A4(b,D_00436158[a]);return;}*b=D_00488C08;}
