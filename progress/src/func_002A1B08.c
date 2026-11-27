extern void func_001D1AD8(void*);
extern void *func_001DF720(void*,s32,s32);
extern void func_003F94D0(s32,s32,s32);
extern void *func_002A2458(void);
extern void func_002A1EA8(void*);
extern void *func_00293668(void);
extern void func_00293190(void*);
extern s32 func_002A24A0(void*,void*);
extern void func_002A2328(void*,s32);
extern void *func_001D21D8(void);
extern void func_001D20F8(void*,void*);
extern void func_002934F8(void*);
typedef struct { u8 pad[8]; s16 off; u8 pad2[2]; void (*fn3)(void*,s32); } VT;
typedef struct { s32 ref; VT *vt; s32 a, b; } Ref;
typedef struct { u8 pad[0x10]; VT *vt; } Obj17;
typedef struct { u8 pad[0x18]; s16 off; u8 pad2[2]; void (*fn)(void*); } Cb;
typedef struct { Ref *p0; u8 pad[0x10]; Cb *p14; s32 f18, f1C, f20; } This;
void func_002A1B08(This *arg0){
u8 sp[0x90];
void *t17;VT *v;s32 var18;
if (1 == arg0->f20) func_002A1EA8(func_002A2458());
else func_00293190(func_00293668());
func_001D1AD8(sp+0x64);
var18 = 0;
{
 Ref *r = arg0->p0; s32 c = (r != 0);
 t17 = func_001DF720(sp, c ? *(s32*)((u8*)r+8) : 0, c ? *(s32*)((u8*)r+0xC) : 0);
}
{
 Ref *r = arg0->p0; s32 c = (r != 0);
 func_003F94D0(c ? *(s32*)((u8*)r+8) : 0, 0, c ? *(s32*)((u8*)r+0xC) : 0);
}
{
 Ref *r = arg0->p0;
 if (r) {
  s32 n = --r->ref; r->ref = n;
  if (n == 0) { VT *vt0 = r->vt; vt0->fn3((u8*)r + vt0->off, 3); }
  arg0->p0 = 0;
 }
}
if (t17) {
  var18 = func_002A24A0(sp+0x80, t17);
  v = ((Obj17*)t17)->vt;
  v->fn3((u8*)t17 + v->off, 3);
  if (arg0->f1C == 1) func_002934F8(func_00293668());
}
func_002A2328(func_002A2458(), var18);
func_001D20F8(func_001D21D8(), (u8*)arg0 + 0x10);
if (!var18) { Cb *cb = arg0->p14; cb->fn((u8*)arg0 + cb->off); }
}
