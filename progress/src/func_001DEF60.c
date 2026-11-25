extern void D_002AD390(void *);
extern void func_002B2028(void *);
extern void *D_0040E618[];
void func_001DEF60(s32 *arg0){s32 **b;s32 *p,*blk;s32 n,bytes;for(b=(s32**)arg0[0];b<(s32**)arg0[0]+arg0[1];b++){p=*b;if(p!=0){n=(p[2]-p[0])>>2;blk=(s32*)p[0];if(n!=0){bytes=n<<2;if(bytes!=0)func_002B2028(blk);else{blk[0]=(s32)D_0040E618[-1];D_0040E618[-1]=blk;}}D_002AD390(p);*b=0;}}}
