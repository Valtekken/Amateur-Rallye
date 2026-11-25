void func_003B2308(void*, void*); void func_003B2378(void*);
void *func_003AF768(register void *arg0, register u8 *arg1, register void *arg2){
  func_003B2308(arg0,arg2);
  *(s32*)((char*)arg0+4)=0;
  *(u8*)((char*)arg0+8)=*arg1;
  func_003B2378(arg0);
  return arg0;
}
