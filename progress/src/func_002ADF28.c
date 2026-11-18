extern void func_002BA330(int,int,int,void*);
void func_002BA350(int a,int b,int c,...){void *ap=(char*)__builtin_next_arg(c)-40;func_002BA330(a,b,c,ap);}
unsigned long long func_002AE6B8(unsigned long long a,unsigned long long b){s32 ah=(s64)a>>32,bh=(s64)b>>32; s32 al=(s32)a,bl=(s32)b; s32 cross1=al*bh; s32 cross2=ah*bl;u64 low=(u64)(u32)al*(u64)(u32)bl;return (low&0xFFFFFFFFULL)|((u64)(u32)((s32)(low>>32)+cross1+cross2)<<32);}

typedef struct Node {s32 base,unk04,unk08,unk0C,unk10,unk14; s64 entries[80];u16 unk298,count;s8 tags[80];}Node;
extern void *func_002ADE20(s32,Node*,Node*);extern Node*func_002AFB50(void*,int);extern void *func_003F931C(void*,const void*,s32);
Node*func_002ADF28(void*a,Node*n,int k){Node*r=func_002AFB50(a,k);if(!r)return 0;{u16 i=r->unk298;if(n->tags[i]){s64 v=*(s64*)func_002ADE20(i,n,0);r->base=v;}else r->base=n->base;r->base+=r->unk08;}return r;}
void *func_002ADEA8(s32 idx,Node*from,Node*to){void*src=func_002ADE20(idx,from,0);void*dst=func_002ADE20(idx,to,0);s32 size=idx<31?16:(idx<=63?4:8);return func_003F931C(dst,src,size);}
