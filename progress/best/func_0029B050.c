extern char D_0047BE50[];
extern char D_0047C8B8[];
extern void func_001D4040(void*, const char*);
void *func_0029B050(s32 *p){
  s32 k[4];
  s32 *t4; s32 *t3;
  func_001D4040(k, D_0047BE50);
  p[1] = k[0];
  p[0] = -1;
  t4 = (s32*)((char*)p+0x54);
  p[2] = (s32)D_0047C8B8;
  t3 = (s32*)((char*)p+0x60);
  *(f32*)((char*)p+0x14) = 3.0f;
  p[7] = 0xA;
  *(f32*)((char*)p+0x48) = 1.0f;
  p[3] = 0;
  *(f32*)((char*)p+0x10) = 1.0f;
  p[6] = 0;
  p[8]=0; p[9]=0; p[10]=0; p[11]=0; p[12]=0; p[13]=0; p[14]=0; p[15]=0; p[16]=0; p[17]=0;
  p[19]=0; p[20]=0; p[21]=0;
  t4[2]=0; t4[1]=0;
  p[24]=0;
  t3[2]=0; t3[1]=0;
  p[27]=0; p[28]=0; p[29]=0;
  return p;
}
