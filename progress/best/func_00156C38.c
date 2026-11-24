extern void *func_002B1FC0(u32);
extern void *func_003D2910(u32);
extern void *func_00152D28(u32);
extern void func_002B2028(void *);
extern void *func_003F93CC(void *, const void *, u32);
extern u32 D_0040E618[];
typedef struct { s32 *begin,*end,*cap; } Vec;
static inline s32 *alloc(u32 bytes){s32 *p;if(bytes){p=func_002B1FC0(bytes);if(p)return p;return func_003D2910(bytes);}else{s32 *head=(s32*)D_0040E618[-1];if(!head)return func_00152D28(0);D_0040E618[-1]=*(u32*)head;return head;}}

void *func_00156C38(u32 dummy, Vec *d, Vec *s){
if(d!=s){
s32 *end=s->end,*begin=s->begin;
s32 *d_begin=d->begin;u32 n=end-begin,bytes;
s32 *p;
if((u32)(d->cap-d_begin)<n){
if(n){ bytes=n<<2; p=alloc(bytes); }
else{p=0;bytes=0;}
func_003F93CC(p,begin,(end-begin)<<2);
{s32 *oldp=d->begin;u32 old=d->cap-oldp;if(old){if(old<<2)func_002B2028(oldp);else{*(u32*)oldp=D_0040E618[-1];D_0040E618[-1]=(u32)oldp;}}}
d->begin=p;d->cap=(s32*)((char*)p+bytes);
}else{
u32 present=d->end-d->begin;
if(present>=n){n=n<<2;func_003F93CC(d->begin,begin,n);bytes=n;}
else{s32 *src;func_003F93CC(d->begin,begin,present<<2);src=(s32*)(((d->end-d->begin)<<2)+(u32)s->begin);func_003F93CC(d->end,src,(s->end-src)<<2);bytes=n<<2;}
}
d->end=(s32*)((char*)d->begin+bytes);
}return d;
}
