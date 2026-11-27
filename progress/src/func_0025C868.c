extern void D_002AD390(void *),func_002B2028(void *),func_00201718(void*,int),func_002028B0(void*,int); extern u32 D_0040E618[];
void func_0025C868(void *p,int flags){s32 *a,*b,n;
a=*(s32**)((u8*)p+0xa0);b=*(s32**)((u8*)p+0xa8);n=(s32)((u8*)b-(u8*)a)>>2;
if(n){if((s32)(n<<2))func_002B2028(a);else{*a=D_0040E618[-1];D_0040E618[-1]=(u32)a;}}
func_00201718((u8*)p+0x24,2);
a=*(s32**)((u8*)p+0x18);b=*(s32**)((u8*)p+0x20);n=(s32)((u8*)b-(u8*)a)>>2;
if(n){if((s32)(n<<2))func_002B2028(a);else{*a=D_0040E618[-1];D_0040E618[-1]=(u32)a;}}
func_002028B0((u8*)p+0xc,2);
a=*(s32**)p;b=*(s32**)((u8*)p+8);n=(s32)((u8*)b-(u8*)a)>>2;
if(n){if((s32)(n<<2))func_002B2028(a);else{*a=D_0040E618[-1];D_0040E618[-1]=(u32)a;}}
if(flags&1)D_002AD390(p);}
