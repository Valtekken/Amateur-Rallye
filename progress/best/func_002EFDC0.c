extern void *D_002AD5A8(int); extern void D_002AD530(void *);
extern int func_003C9300(int),func_003CB1A8(void *);
extern void func_003CB130(void *,void *),func_003CB140(void *),func_003CB150(void *),func_003CB1C0(void *,u64),func_003C9728(int,int,int),func_003C7660(int,int),FlushCache_2(int);
void func_002EFDC0(void) {
 int sp[4]; void *mem=D_002AD5A8(0xf10); void *aligned=(void *)(((u32)mem+63)&0xffffffc0); int chan=func_003C9300(2),addr,len;
 func_003CB130(sp,aligned);func_003CB140(sp);
 func_003CB1C0(sp,0x1000000000008001ULL);func_003CB1C0(sp,14);func_003CB1C0(sp,0x6071243571603524ULL);func_003CB1C0(sp,0x44);
 func_003CB150(sp);FlushCache_2(0);addr=sp[1]&0xfffffff;len=func_003CB1A8(sp);func_003C9728(chan,addr,len);func_003C7660(0,0);if(mem)D_002AD530(mem);
}
