typedef struct {char pad[0x50]; float v[4];} Mat;
typedef struct {char pad[0x4c]; Mat *dst,*src;} Node;
typedef struct {Node **begin,**end; u32 cap;} List;
typedef struct {char pad[0x44]; List a,b;} Obj;
static inline void copy(Node *n){Mat *s=n->src,*d=n->dst;float *sp=s->v,*dp=d->v; dp[0]=sp[0];dp[1]=sp[1];dp[2]=sp[2];dp[3]=1.0f;}
void func_001B0508(Obj *o){u32 i; List *l=&o->a;i=0;if((s32)((char*)l->end-(char*)o->a.begin)>>2) do {Node *n=o->a.begin[i];if(n)copy(n);i++;}while(i<(u32)(l->end-o->a.begin));l=&o->b;i=0;if((s32)((char*)l->end-(char*)o->b.begin)>>2) do {Node *n=o->b.begin[i];if(n)copy(n);i++;}while(i<(u32)(l->end-o->b.begin));}
