extern s32 func_00206588(void*);
extern void func_002068C0(s32,s32,s32*,s32*);
extern void func_002063A0(void*,void*,f32,f32,s32);
typedef struct { f32 f0,f1; s32 z,pad,v10,v14; } Loc;
void func_00112820(void *arg0, void *arg1, s32 arg2, s32 arg3, f32 fp) {
  Loc loc;
  s32 obj = func_00206588(arg1);
  if (!obj) return;
  func_002068C0(obj, arg2, &loc.v10, &loc.v14);
  loc.f0 = -(f32)loc.v10 * 0.5f;
  loc.f1 = fp;
  loc.z = 0;
  func_002063A0(arg1, &loc, loc.f0, fp, 0);
  {
    void *v = *(void**)arg1;
    s16 off = *(s16*)((char*)v+0x10);
    void (*fn)(void*,s32) = *(void**)((char*)v+0x14);
    fn((char*)arg1+off, arg2);
  }
  if (arg3) {
    void *p = *(void**)((char*)arg0+0x5C);
    void *q = *(void**)((char*)p+0x4C);
    *(f32*)((char*)q+0x50) = loc.f0 + (-20.0f) + *(f32*)((char*)arg1+0x50);
    *(f32*)((char*)q+0x54) = fp + 20.0f + *(f32*)((char*)arg1+0x54);
  }
}
