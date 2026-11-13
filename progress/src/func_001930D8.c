extern void func_001D4040(void *, void *);
extern void func_001E3598(s32, void *);
extern void func_001E3EC0(s32, void *, s32);
extern void func_00192FD8(void);
extern void func_001D2900(void *, s32);
typedef struct 
{
  s32 v[4];
} Key16;
void func_0016D178(void *arg0, f32 *arg1);
void func_00193038(void *arg0);
void func_00193080(void *arg0, s32 arg1);
void func_001930D8(void *arg0)
{
  s32 tmp;
  char buf[16];
 do { func_00192FD8(); func_001D2900(((u8 *) arg0) + 0xC, *((s32 *) (((u8 *) arg0) + 0x98))); tmp = func_001E4280(); func_001D4040(buf, *((void **) (((u8 *) arg0) + 0xC))); } while (0);
  func_001E3650(tmp, (s32) buf);
}
