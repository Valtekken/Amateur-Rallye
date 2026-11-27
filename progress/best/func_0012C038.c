typedef struct { char pad[0x4C]; void *ptr4C; } Arg0;
typedef struct { char pad[8]; s32 count,flag; char data[0x10]; } G658;
typedef struct { s32 x; char pad[0xC]; } ISlot;
typedef struct { void *p; char pad[0xC]; } PSlot;
extern G658 D_0040E658;
extern char D_0040E618[], D_004481B8[];
extern void func_001D4040(void *, const char *);
extern void *func_001E3700(s32, void *);
extern s32 func_001D4010(void *);
extern void func_00151A28(void **, s32, u32, s32, s32);
extern s32 func_003FA9B8(s32);
extern void func_001537E8(void **, s32, s32);
extern void func_00154E10(void **, void *, void *);
extern void func_0012C2B8(void *, s16, s32);
extern void func_002B2028(void *, void *);
void func_0012C038(Arg0 *arg0) {
 ISlot saved; PSlot sp10,sp20;
 s32 temp,temp17,n,i,one; void *var3,*old;
 temp=func_001E4280();
 func_001D4040(&sp10.p,D_004481B8);
 saved.x=*(s32*)func_001E3700(temp,&sp10.p);
 temp=func_001E4280();
 temp17=func_001D4010(func_001E3700(temp,&saved.x));
 if(D_0040E658.flag!=0) var3=(void*)func_00151930(&D_0040E658);
 else {
  var3=(char*)&D_0040E658+0x10;
  D_0040E658.count++;
 }
 sp10.p=var3;
 func_00151A28(&sp10.p,0,0xFFFFFFFFU,temp17,func_003FA9B8(temp17));
 n=*(s32*)((char*)sp10.p-0x10);
 if(n>0) {
  one=1;
  for(i=0;i<n;i++) {
   if((u32)*(s32*)((char*)sp10.p-8)<2) func_001537E8(&sp10.p,n,1);
   *(s32*)((char*)sp10.p-4)=1;
   func_00154E10(&sp20.p,(char*)arg0+0x4C,(char*)sp10.p+i);
   old=sp20.p; sp20.p=*(void**)((char*)arg0+0x4C);
   if(old!=sp20.p) {
    *(void**)((char*)arg0+0x4C)=old;
    func_0012C2B8(arg0,*(s16*)((char*)old+0x12),0);
   }
  }
 }
 if(--*(s32*)((char*)sp10.p-4)==0) {
  void *obj=(char*)sp10.p-0x10;
  if(*(s32*)((char*)obj+4)+0x10!=0) func_002B2028(obj,sp10.p);
  else {
   *(s32*)((char*)sp10.p-0x10)=*(s32*)(D_0040E618-4);
   *(void**)(D_0040E618-4)=obj;
  }
 }
}
