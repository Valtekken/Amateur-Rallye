extern void func_002B2028(void*),D_002AD390(void*);extern char D_0040E618[];
typedef struct {char *begin,*end,*cap;} L;
static inline void clean(L *l){char *e=l->end,*p=l->begin;int n;if(p<e){do {p+=12;}while(p<e);}p=l->begin;n=(s32)((u32)(l->cap-p)*0xaaaaaaabu)>>2;if(n){if(n*12)func_002B2028(p);else {char *q=D_0040E618;*(void**)p=*(void**)(q-4);*(void**)(q-4)=p;}}}
void func_0016D508(char *o,int flags){char *p=*(char**)(o+4);int f;if(p){char *v=*(char**)(p+0x14);void (*fn)(void*,int)=*(void(**)(void*,int))(v+12);fn(p+*(s16*)(v+8),3);}f=flags&1;clean((L*)(o+0x4c));clean((L*)(o+0x40));if(f)D_002AD390(o);}
