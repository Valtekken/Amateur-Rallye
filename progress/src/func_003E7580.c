typedef struct {u64 bits;u8 *start,*cur;u32 count;u64 total;u8 *wrap,*end;u32 size;} BS;
void func_003E7498(BS *p,s32 n){p->bits<<=n;p->count-=n;if(p->count<57){do{u8 *q=p->cur;u32 c=p->count;p->bits|=(u64)*q<<(56-c);p->cur=++q;if(q>=p->end)p->cur=p->wrap;p->count=c+8;}while(p->count<57);}p->total+=n;}
void func_003E7440(BS*p,u8*b,u8*c,s32 n){p->cur=b;p->end=c+n;p->size=n;p->start=b;p->bits=0;p->count=0;p->total=0;p->wrap=c;func_003E7498(p,0);}
s32 func_003E7478(BS*,s32);
s32 func_003E7580(BS*p){s32 r=func_003E7478(p,1);func_003E7498(p,1);return r;}
void func_003E3CA8(u8*d,s16*a,s16*b){int i;for(i=0;i<384;i++){int t=(s16)(a[i]+b[i]);if(t>255)t=255;if(t<0)t=0;d[i]=t;}}
