extern s32 func_00297500(void);
extern s32 func_002971B0(s32);
extern s32 func_0021F4B0(void);
extern void func_001D4040(void*,const char*);
extern void *func_0021E9C0(s32,void*);
extern char D_00448540[];
typedef struct { s32 d[6]; } S24;
extern S24 D_00448528;
typedef struct { s32 pad[5]; s32 unk14; } Obj;
typedef struct { S24 arr; char pad[8]; char key[16]; } Locals;
void func_001254E8(Obj *arg0){
 Locals l;
 s32 sel,lang,n; void *x,*y;
 l.arr = D_00448528;
 sel=func_002971B0(func_00297500());
 if(sel!=arg0->unk14){
  arg0->unk14=sel;
  lang=func_0021F4B0();
  func_001D4040(l.key,D_00448540);
  x=func_0021E9C0(lang,l.key);
  if(x){
   y=*(void**)((char*)x+0x4C);
   if(y){
    n=arg0->unk14-1;
    *(f32*)((char*)y+0x54)=(f32)(0x154-l.arr.d[n]*0x32);
   }
  }
 }
}
