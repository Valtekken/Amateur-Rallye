extern s32 func_001C6700(void *,s32,s32);
void func_003EFEF8(void *a,s32 b,s32 c,u8 *d) {
 *((u8*)*(u32*)((u8*)a+4)+func_001C6700(a,b,c))=*d;
}
