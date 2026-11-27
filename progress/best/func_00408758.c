extern s32 D_004411A8;
extern u8 D_004A0BC0[64];
extern u8 D_004A1240[40];
typedef struct {
  s32 f0;
  s32 f4;
  s32 f8;
  s32 fC;
  s32 f10;
  u8 name[0x400];
} Work;
extern Work D_0049FF80[3];
typedef struct {
  s32 a0;
  s32 a4;
  s32 a8;
  s32 aC;
  s32 a10;
  s32 a14;
  s32 a18;
  s32 a1C;
} SemaAttr;
extern s32 func_00405E90(void *, s32, s32, void *, s32, void *, s32, s32, s32);
extern s32 func_00406B18(s32);
extern s32 func_00406B48(void);
extern s32 func_00406698(void);
extern s32 CreateSema_2(void *);
extern s32 DeleteSema_2(s32);
extern s32 WaitSema_2(s32);

s32 func_00408758(void)
{
  SemaAttr attr;
  s32 sp30;
  s32 sem;
  s32 temp_16_2;
  s32 *tmp;
  s32 v0;
  Work *wp = &D_0049FF80[0];
  tmp = (s32 *)func_00406698();
  func_00406B18(0xA);
  if (D_004411A8 == 0) {
    func_00406B48();
    return -1;
  }
  if (tmp == 0) {
    func_00406B48();
    return -9;
  }
  v0 = tmp[0];
  if (tmp[1] == 0) {
    func_00406B48();
    return -9;
  }
  attr.a4 = 1;
  wp->fC = v0;
  attr.a8 = 0;
  attr.a14 = 0;
  sem = CreateSema_2(&attr);
  wp->f0 = sem;
  wp->f4 = (s32)&sp30;
  wp->f8 = 4;
  if (func_00405E90(&D_004A1240, 0xA, 0, &D_0049FF80, 0x14, &D_004A0BC0, 4, 0, 0) < 0) {
    DeleteSema_2(sem);
    func_00406B48();
    return -11;
  }
  tmp[1] = 0;
  temp_16_2 = *((s32 *)(((u32)((u64)&D_004A0BC0)) | 0x20000000U));
  func_00406B48();
  if (temp_16_2 == 0) {
    DeleteSema_2(sem);
    return -11;
  }
  WaitSema_2(sem);
  DeleteSema_2(sem);
  if (sp30 < 0) return sp30;
  return 0;
}
