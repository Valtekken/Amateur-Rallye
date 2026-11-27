extern void *func_003F8A30(int,unsigned int); extern void func_003F9590(int),func_003F9598(int),func_003F79D0(int,void *); extern int func_0040D508(void *,u64);
void *func_003F8608(int a,unsigned int align,unsigned int size){unsigned int need,sz,gap; s64 remain; char *p,*h,*q;
if(align<17)return func_003F8A30(a,size);
if(align<=15)align=16; size+=19; need=size>=31?size&~15:16;
p=func_003F8A30(a,need+align+16);if(!p)return 0;h=p-8;func_003F9590(a);
if(func_0040D508(p,(u64)align)){q=(char*)(((u32)(p+align-1)) & -align)-8;if(q-h<=15)q+=align;gap=q-h;sz=(*(u32*)(h+4)&~3)-gap;*(u32*)(q+4)=sz|1;*(u32*)(q+sz+4)|=1;*(u32*)(h+4)=(*(u32*)(h+4)&1)|gap;func_003F79D0(a,p);h=q;}
sz=*(u32*)(h+4)&~3;if(sz>=need)remain=(u64)(sz-need);else remain=-(s64)(u64)(need-sz);
if(remain>=16){q=h+need;*(u32*)(q+4)=(s32)(remain|1);*(u32*)(h+4)=(*(u32*)(h+4)&1)|need;func_003F79D0(a,q+8);}func_003F9598(a);return h+8;}
