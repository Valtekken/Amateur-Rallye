extern s32 D_002AD408(s32);
extern s32 func_0011DA70(s32,s32);
extern void func_001525D8(void*,void*,f32);
extern void func_00194BB0(s32,s32);
extern s32 func_00194C40(void);
extern void func_001D4040(void*,const char*);
extern void func_001E3EC0(s32,void*,s32);
extern s32 func_001E4280(void);
extern void func_00200270(s32);
extern s32 func_002003C0(void);
extern void func_003ED178(void);
extern void func_003F9698(const char*,const char*,s32);
extern s32 D_0040DCD4;
extern char D_00448568[],D_004485B8[],D_00448608[];
typedef struct { s32 unkC,unk10,unk14; } A;
typedef struct { char pad[0x4C]; void *p; } B;
void func_00125698(A *arg0,B *arg1){
 f32 sp0,sp4,sp8,spC,sp10,sp14,sp18;
 s32 k; void *p,*q;
 func_00200270(func_002003C0());
 func_003ED178();
 func_003F9698(D_00448568,D_004485B8,0x28);
 arg0->unk10=0;
 arg0->unk14=0;
 arg0->unkC=func_0011DA70(D_002AD408(0x10),0xA);
 if(D_0040DCD4&1){
  k=func_001E4280();
  func_001D4040(&sp0,D_00448608);
  func_001E3EC0(k,&sp0,1);
 }
 p=arg1->p;
 D_0040DCD4++;
 if(p){
  q=(char*)p+0x20;
  func_001525D8(q,q,80.0f);
  sp10=0.0f; sp14=0.0f; sp18=0.0f;
  *(f32*)((char*)p+0x50)=sp10;
  *(f32*)((char*)p+0x54)=sp14;
  *(f32*)((char*)p+0x58)=sp18;
  *(f32*)((char*)p+0x5C)=1.0f;
  spC=1.0f;
  sp4=sp10; sp8=sp10;
  *(f32*)((char*)p+0x10)=sp10;
  *(f32*)((char*)p+0x14)=sp4;
  *(f32*)((char*)p+0x18)=sp8;
  *(f32*)((char*)p+0x1C)=spC;
 }
 func_00194BB0(func_00194C40(),0);
}
