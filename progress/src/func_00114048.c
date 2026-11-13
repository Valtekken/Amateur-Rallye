extern void func_00114460(void*); extern void func_001D4040(void*,const char*); extern void func_001E3EC0(s32,void*,s32); extern void func_002623F0(s32,void*); extern s32 func_00262838(void); extern char D_004448F8[],D_00445DA8[];
void func_00114048(char *p){s32 tmp[4]; s32 h;
if(*(s32*)(p+48)==0){if((*(s32**)(p+56))[1]){h=func_001E4280();func_001D4040(tmp,D_004448F8);func_001E3EC0(h,tmp,(*(s32**)(p+56))[1]);h=func_00262838();func_001D4040(tmp,D_00445DA8);func_002623F0(h,tmp);}}else func_00114460(p);}
