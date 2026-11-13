extern void func_00192FD8(void);
extern void func_001D2900(void *, s32);
extern void func_001D4040(void *, const char *);
extern void func_001E3850(s32, void *);
extern s32 func_001E3650(s32, void *);
extern s32 func_001E4280(void);
extern s32 D_00425D70;
extern char D_004716C8[];
extern unsigned char D_0048DDD0[24];
void func_001933A0(void *arg0);
s32 func_00193400(void);
void func_00193468(void *arg0)
{
  s32 temp;
  const char **new_var;
  char buf[16];
 do { func_00192FD8(); func_001D2900(((char *) arg0) + 0xC, *((s32 *) (((char *) arg0) + 0xBC))); temp = func_001E4280(); new_var = &(*((const char **) (((char *) arg0) + 0xC))); func_001D4040(buf, *new_var); } while (0);
  func_001E3650(temp, buf);
}
