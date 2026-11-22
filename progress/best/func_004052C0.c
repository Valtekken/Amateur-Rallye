extern s32 D_0049E560;
extern s32 func_004055A0(void*,s32);
extern s32 isceSifSetDma_2(void*,s32);
extern s32 sceSifSetDma_2(void*,s32);
s32 func_004052C0(s32 a0,s32 a1,u8*a2,s32 a3,void*a4,s32 a5,s32 a6){
  s32 sp[2][4];s32 v18;
  if((u32)(a3-0x10)>=0x61U)return 0;
  v18=0;
  if(a6>0){
    sp[0][0]=(s32)a4;
    *(s32*)(a2+4)=a5;v18=1;
    *(u32*)a2=(*(u8*)a2)|(a6<<8);
    sp[0][1]=a5;sp[0][2]=a6;sp[0][3]=0;
    if(a1&4)func_004055A0(a4,a6);
  }else{
    *(s32*)(a2+4)=0;*(u32*)a2=*(u8*)a2;
  }
  sp[v18][0]=(s32)a2;sp[v18][1]=D_0049E560;sp[v18][2]=a3;
  *(s32*)(a2+8)=a0;*(u8*)a2=(u8)a3;
  sp[v18][3]=0x44;
  func_004055A0(a2,a3);
  v18++;
  if(!(a1&1))return sceSifSetDma_2(sp,v18);
  return isceSifSetDma_2(sp,v18);
}
