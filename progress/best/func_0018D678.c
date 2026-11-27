extern s32 func_00151930(void*);
extern void func_00151A28(void*,u32,u32,void*,u32);
extern void func_003FA310(void*,void*,s32);
extern s32 func_003FA9B8(void*);
extern void *func_001D4010(s32);
extern void func_002B2028(void*);
extern char D_0044E918[], D_004711E0[], D_00471200[];
extern u32 D_0040E618[];
extern u32 D_0040E658[];

struct Aligned { u32 value; } __attribute__((aligned(16)));
static inline void initstr(u32*out,char*name){
  s32 var3;
  if(D_0040E658[3]!=0){ var3=func_00151930(D_0040E658); }
  else { var3=(s32)D_0040E658+0x10; D_0040E658[2]=D_0040E658[2]+1; }
  *out=var3;
  func_00151A28(out,0,-1,name,func_003FA9B8(name));
}

void **func_0018D678(void **arg0, s32 arg1, s32 arg2, s32 arg3) {
  char text[32];
  struct Aligned str;
  void *t;
  func_003FA310(text, D_0044E918, arg3);
  initstr(&str.value, D_004711E0);
  t = func_001D4010(arg2);
  func_00151A28(&str.value, *(u32*)((char*)str.value-0x10), 0, t, func_003FA9B8(t));
  func_00151A28(&str.value, *(u32*)((char*)str.value-0x10), 0, D_00471200, func_003FA9B8(D_00471200));
  func_00151A28(&str.value, *(u32*)((char*)str.value-0x10), 0, text, func_003FA9B8(text));
  {
    u32 *t4 = (u32*)str.value-4;
    if (t4[3] != 0) *arg0 = (void*)func_00151930(t4);
    else { t4[2] = t4[2]+1; *arg0 = (void*)str.value; }
  }
  {
    u32 *t4 = (u32*)str.value-4;
    u32 n = t4[2]-1;
    t4[2] = n;
    if (n == 0) {
      if ((s32)t4[1]+0x10 != 0) func_002B2028(t4);
      else { u32 old = D_0040E618[-1]; t4[0]=old; D_0040E618[-1]=(u32)t4; }
    }
  }
  return arg0;
}
