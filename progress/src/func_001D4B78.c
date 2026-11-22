extern s32 func_002B1FC0(s32); extern s32 D_00476660;
void *func_001D4B78(void *p,s32 n){s32 x; *(s32**)p=&D_00476660; x=func_002B1FC0(n); ((s32*)p)[1]=x+n; ((s32*)p)[2]=x; ((s32*)p)[3]=x; ((s32*)p)[4]=x; return p;}
