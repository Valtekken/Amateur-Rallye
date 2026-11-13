extern s32 func_003A3CC8(void*);
extern void func_003AC518(void*);
extern void* func_003A4508(void*);
extern u32 D_004873F8[];

void* func_003A4568(register void* arg0){
  if(func_003A3CC8(arg0)==0) return &D_004873F8;
  func_003AC518(arg0);
  return func_003A4508(arg0);
}
