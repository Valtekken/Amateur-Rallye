extern void func_001266E8(void*);
extern void func_00127A60(void*);
extern void func_00127DD8(void*);
extern void func_00127E78(void*);
extern void func_00128238(void*);
extern void func_00128B40(void*);
extern void func_001D4040(void*,const char*);
extern void func_001E3EC0(s32,void*,s32);
extern s32 func_001E4280(void);
extern void func_00297398(s32,s32);
extern void func_002973F0(s32,s32);
extern s32 func_00297500(void);
extern s32 func_002B4570(s32,s32,s32);
extern s32 func_002B4740(void);
extern char D_00448748[];
typedef struct { s32 p0[5]; s32 unk14; s32 unk18; s32 p1[5]; s32 unk30; s32 unk34; s32 p2[2]; s32 unk40; s32 p3[4]; s32 unk54; s32 p4[1]; s32 unk5C; s32 unk60; } Obj;
void func_00126890(Obj *arg0){
 s32 key; char sp[16];
 if(arg0->unk5C!=0 || arg0->unk40!=0){
  func_001266E8(arg0);
  if(arg0->unk14==6){
   arg0->unk34=0; arg0->unk5C=0; arg0->unk30=0; arg0->unk54=1;
   func_00128238(arg0);
   return;
  }
  arg0->unk18=func_002B4570(func_002B4740(),0,0);
  if(arg0->unk40!=0)arg0->unk18=0;
  if(arg0->unk18!=0){func_00127E78(arg0);arg0->unk60=1;}
  else{func_00127DD8(arg0);arg0->unk60=0;}
  func_00128B40(arg0);
  arg0->unk5C=0;
  return;
 }
 func_00127A60(arg0);
 arg0->unk34=1;
 if(arg0->unk18!=0)func_00297398(func_00297500(),5);
 else func_00297398(func_00297500(),4);
 key=func_001E4280();
 func_001D4040(sp,D_00448748);
 func_001E3EC0(key,sp,1);
 func_002973F0(func_00297500(),4);
}
