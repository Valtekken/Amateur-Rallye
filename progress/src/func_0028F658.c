extern s32 D_004262B0;
extern s32 func_001D4010(s32);
extern s32 func_001D65A0(s32*,s32);
extern s32 func_001D65D0(s32);
extern s32 func_002060F8(s32);
extern s32 func_002062A8(s32,s32);
extern s32 func_001D6588(s32*,s32);
s32 func_0028F658(s32 dummy, void *arg1, s32 arg2, s32 arg3){
 s32 temp_18,temp_17;
 if(arg1!=NULL){
  temp_18=*(s32*)((char*)arg1+0x4C);
  if(temp_18!=0){
   temp_17=func_001D65A0(&D_004262B0,temp_18);
   func_002062A8(temp_18,arg2);
   func_002060F8(temp_18);
   func_001D65D0(func_001D4010(arg3));
   func_001D6588(&D_004262B0,temp_17);
   return 1;
  }
 }
 return 0;
}
