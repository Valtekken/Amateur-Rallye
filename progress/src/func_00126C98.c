extern void func_00127A60(void*),func_00128648(void*),func_00128A00(void*),func_00128AA0(void*),func_00128B58(void*);
extern void func_001D4040(void*,const char*),func_001E3EC0(s32,void*,s32);
extern void func_00297398(s32,s32),func_002973F0(s32,s32);
extern s32 func_00297500(void),func_002B4740(void),func_002B4570(s32,s32,s32),func_002B4658(s32,s32,s32);
extern char D_00448748[];
typedef struct { s32 p[6]; s32 x18; s32 q[7]; s32 x38; s32 r[10]; s32 x64; } Obj;
void func_00126C98(Obj *a) {
 s32 key; char sp[16];
 if(a->x64) {
  a->x18=func_002B4570(func_002B4740(),0,0);
  if(a->x18) {
   if(func_002B4658(func_002B4740(),0,0)) {func_00128648(a);func_00128B58(a);a->x64=0;return;}
   func_00128A00(a);a->x64=0;return;
  }
  func_00128AA0(a);a->x64=0;return;
 }
 func_00127A60(a);a->x38=1;
 func_00297398(func_00297500(),6);
 key=func_001E4280();func_001D4040(sp,D_00448748);func_001E3EC0(key,sp,1);func_002973F0(func_00297500(),4);
}
