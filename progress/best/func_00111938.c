typedef struct { void *p0, *p4, *p8; } V;
typedef struct { char pad[0x28]; s16 f28; u16 f2a; void *f2c; } VT;
typedef s32 (*VFn)(void *, s32, s32);
extern void *D_002AD408(s32);
extern void D_002AD390(void *);
extern void *func_0026B7C8(void *, s32);
extern void func_001D4040(void *, const char *);
extern s32 func_001E4280(void);
extern void func_001E3D10(s32, void *, s32);
extern void func_00112730(void *);
extern void *func_0017E620(void);
extern void func_001D2458(void *, s32);
extern void func_001D2488(void *, void *);
extern void func_001535C8(V *, void *, void *);
extern void *func_00111560(const char *);
extern void *func_00111718(const char *);
extern f32 func_001E3610(s32, const void *);
extern void func_001E4040(s32, void *, void *);
extern char D_00445D80[], D_004466C8[], D_004466E0[], D_004466F8[], D_00446708[];
extern s32 D_0040E758, D_0040E788, D_0040E790, D_0040E798;
static inline s32 call_cmd(void *o, s32 a, s32 b) {
  VT *vt = *(VT **)o;
  return ((VFn)vt->f2c)((char *)o + vt->f28, a, b);
}
static inline void push(V *v, void *p) {
  if (v->p4 != v->p8) {
    if (v->p4) func_001D2488(v->p4, p);
    v->p4 = (char *)v->p4 + 4;
  } else {
    func_001535C8(v, v->p4, p);
  }
}
void func_00111938(void *arg0, s32 arg1)
{
  u32 buf[8];
  V *v1, *v2;
  s32 k;
  *(s32 *)((char *)arg0 + 0x58) = arg1;
  *(void **)((char *)arg0 + 0x64) = func_0026B7C8(D_002AD408(0x34), 0);
  func_001D4040(buf, D_00445D80);
  *(s32 *)((char *)arg0 + 0x44) = buf[0];
  func_001E3D10(func_001E4280(), (char *)arg0 + 0x48, 0);
  func_001E3D10(func_001E4280(), &D_0040E758, 0);
  func_00112730(arg0);
  v1 = D_002AD408(0xC);
  v1->p0 = 0; v1->p4 = 0; v1->p8 = 0;
  func_001D2458(buf, call_cmd(func_0017E620(), 0x50, 1));
  push(v1, buf);
  D_002AD390((void *)buf[0]);
  func_001D2458(buf, call_cmd(func_0017E620(), 0x50, 2));
  push(v1, buf);
  D_002AD390((void *)buf[0]);
  k = func_001E4280();
  func_001D4040(buf, D_004466C8);
  func_001E4040(k, buf, v1);
  v2 = D_002AD408(0xC);
  v2->p0 = 0; v2->p4 = 0; v2->p8 = 0;
  func_001D2458(buf, call_cmd(func_0017E620(), 1, 8));
  push(v2, buf);
  D_002AD390((void *)buf[0]);
  func_001D2458(buf, call_cmd(func_0017E620(), 0x2F1, 0));
  push(v2, buf);
  D_002AD390((void *)buf[0]);
  k = func_001E4280();
  func_001D4040(buf, D_004466E0);
  func_001E4040(k, buf, v2);
  *(void **)((char *)arg0 + 0x5C) = func_00111560(D_004466F8);
  *(void **)((char *)arg0 + 0x60) = func_00111718(D_00446708);
  *(f32 *)((char *)arg0 + 0x68) = func_001E3610(func_001E4280(), &D_0040E788);
  *(f32 *)((char *)arg0 + 0x6C) = func_001E3610(func_001E4280(), &D_0040E790);
  *(f32 *)((char *)arg0 + 0x70) = func_001E3610(func_001E4280(), &D_0040E798);
  *(s32 *)((char *)arg0 + 0x34) = 0;
}
