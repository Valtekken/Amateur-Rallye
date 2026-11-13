extern void *func_002B1FC0(u32);
extern void *func_003D2910(u32);
extern void *func_00152D28(u32);
extern void func_002B2028(void *);
extern void *func_003F93CC(void *, const void *, u32);
extern u32 D_0040E618[];
typedef struct { s32 *begin,*end,*cap; } Vec;
static inline s32 *alloc(u32 bytes){s32 *p;if(bytes){p=func_002B1FC0(bytes);if(p)return p;return func_003D2910(bytes);}else{s32 *head=(s32*)D_0040E618[-1];if(!head)return func_00152D28(0);D_0040E618[-1]=*(u32*)head;return head;}}
void *func_003B5C98(Vec *b,Vec *a){
if((u32)b-(u32)a){
s32 *end=b->end,*begin=b->begin;
s32 *a_begin=a->begin;u32 n=end-begin,bytes;
s32 *p;
if((u32)(a->cap-a_begin)<n){
if(n){ bytes=n<<2;
p=alloc(bytes);
}else{p=0;bytes=0;}
func_003F93CC(p,begin,(end-begin)<<2);
{s32 *oldp=a->begin;u32 old=a->cap-oldp;if(old){if(old<<2)func_002B2028(oldp);else{*(u32*)oldp=D_0040E618[-1];D_0040E618[-1]=(u32)oldp;}}}
a->begin=p;a->cap=(s32*)((char*)p+bytes);
}else{
u32 present=a->end-a->begin;
if(present>=n){n=n<<2;func_003F93CC(a->begin,begin,n);bytes=n;}
else{s32 *src;func_003F93CC(a->begin,begin,present<<2);src=(s32*)(((a->end-a->begin)<<2)+(u32)b->begin);func_003F93CC(a->end,src,(b->end-src)<<2);bytes=n<<2;}
}
a->end=(s32*)((char*)a->begin+bytes);
}return a;
}
