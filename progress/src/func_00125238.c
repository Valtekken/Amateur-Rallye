extern void D_002AD390(void*);
extern void func_0011DFB8(s32);
extern void func_0011E278(s32,s32);
extern s32 func_0011E2B8(s32,s32);
extern s32 func_0011E528(s32);
extern void func_0011E650(s32,s32,s32);
extern void func_0011E808(s32,s32);
extern void func_0011E880(s32,s32);
extern void func_001253D8(void*,s32,s32);
extern void func_001254E8(void*);
extern void **func_0017E620(void);
extern void func_001D2458(void*,void*);
extern void func_001E3FE0(s32,void*,void*);
extern s32 func_001E4280(void);
extern s32 func_002971B0(s32);
extern s32 func_00297500(void);
typedef struct { s32 pad[3]; s32 unkC; s32 unk10; } Obj;
typedef char *(*Fn1)(void*,s32,s32);
typedef void (*Fn2)(void*,s32);
void func_00125238(Obj *arg0){
 s32 sp[4]; s32 a,b,mgr,mgr1,i,chosen; void **obj; void *vt; s16 off; Fn1 f1; Fn2 f2; char *str; s32 *argp;
 func_0011E650(arg0->unkC,0,0);
 func_0011DFB8(arg0->unkC);
 if(func_0011E528(arg0->unkC)!=0)return;
 argp=&arg0->unk10;
 i=1;
 func_0011E808(arg0->unkC,0);
 func_0011E880(arg0->unkC,0);
 a=func_002971B0(func_00297500());
 mgr=func_001E4280();
 mgr1=a-1;
 obj=(void**)func_0017E620();
 vt=*obj;
 off=*(s16*)((char*)vt+0x28);
 f1=*(Fn1*)((char*)vt+0x2C);
 str=f1((char*)obj+off,0x10,a);
 func_001D2458(sp,str);
 func_001E3FE0(mgr,argp,sp);
 D_002AD390((void*)sp[0]);
 func_001254E8(arg0);
 b=func_002971B0(func_00297500());
 do{
  if(i==b)func_001253D8(arg0,i,1);
  else func_001253D8(arg0,i,0);
  i++;
 }while(i<7);
 chosen=func_0011E2B8(arg0->unkC,1);
 if(chosen<7){
  if(chosen>0){
   void **obj2=(void**)func_0017E620();
   void *vt2=*obj2;
   s16 off2=*(s16*)((char*)vt2+0x38);
   Fn2 f2b=*(Fn2*)((char*)vt2+0x3C);
   f2b((char*)obj2+off2,mgr1);
   func_0011E278(arg0->unkC,0x1A);
  }
 }
}
