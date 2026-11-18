typedef struct {u64 bits;u8 *start,*cur;u32 count;u64 total;u8 *wrap,*end;u32 size;} BS;
void func_003E7498(BS*,s32);
void func_003E7440(volatile BS*p,u8*b,u8*c,s32 n){p->cur=b;p->end=c+n;p->size=n;p->start=b;p->bits=0;p->count=0;p->total=0;*(u8*volatile*)&p->wrap=c;func_003E7498((BS*)p,0);}
