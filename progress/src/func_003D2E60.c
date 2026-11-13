extern u8 D_00437E18[]; extern void func_002B2028(void *);
void func_003D2E60(u32 *arg0,u32 arg1){u32 *out=arg0;if(arg1>=0x81U){func_002B2028(arg0);return;}u32 sh=(arg1+7U)>>3U;u32 *p=(u32 *)(D_00437E18+((sh-1U)<<2U));u32 v=*p;*out=v;*p=(u32)out;}
