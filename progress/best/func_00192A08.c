extern void func_00192130(void *, void *);
extern void func_001D2900(void *, s32);
extern void func_001D2458(void *, s32);
extern void func_001E3FE0(s32, void *, void *);
extern void D_002AD390(s32);
void func_00192A08(void *arg0, void *arg1, void *arg2) {
 s32 tmp;
 s32 buf[4];
 func_00192130(arg0,arg1);
 func_001D2900((char *)arg0+12, *(s32 *)((char *)arg0+0x6c));
 tmp=func_001E4280();
 func_001D2458(buf, *(s32 *)((char *)arg0+12));
 func_001E3FE0(tmp,buf,arg2);
 D_002AD390(buf[0]);
}
