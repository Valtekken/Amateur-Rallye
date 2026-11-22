extern s32 D_002AD408(s32);
extern s32 func_0011DA70(s32, s32);
extern s32 func_0011E278(s32, s32);
extern void *func_0017E620(void);
extern s32 func_00194218(s32);
extern s32 func_00194C40(void);
extern void func_001D4040(void *, const char *);
extern void func_001E3FB0(s32, void *, void *);
extern s32 func_001E4280(void);
extern char D_00447BB8[];
extern char D_00447BE0[];
typedef s32 (*Method)(void *, s32, s32);
typedef struct { char pad[0x28]; s16 off28; char pad2[2]; Method meth2C; } VT;
static inline void *init(void *p, const char *s) { func_001D4040(p, s); return p; }
static inline s32 call2(s32 id, s32 val) {
    void *obj = func_0017E620();
    VT *vt = *(VT **)obj;
    return vt->meth2C((char *)obj + vt->off28, id, val);
}
static inline s32 call2b(s32 id, s32 val) {
    void *obj = func_0017E620();
    VT *vt = *(VT **)obj;
    return vt->meth2C((char *)obj + vt->off28, id, val + 1);
}
void func_001214A0(void *arg0)
{
  s32 sp0[4];
  s32 sp10[4];
  s32 sp20[4];
  s32 d, k1, k2;
  ((s32 *)arg0)[3] = func_0011DA70(D_002AD408(0x10), 0x1F);
  d = func_00194218(func_00194C40());
  k1 = func_001E4280();
  func_001D4040(sp0, D_00447BB8);
  func_001E3FB0(k1, sp0, init(sp10, (void *)(char *)call2(0x3B, d)));
  k2 = func_001E4280();
  func_001D4040(sp0, D_00447BE0);
  func_001E3FB0(k2, sp0, init(sp20, (void *)(char *)call2b(0x1F, d)));
  func_0011E278(((s32 *)arg0)[3], 0xA);
}
