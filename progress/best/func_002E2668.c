typedef struct RStr { s32 a,size,refs,owned; } RStr;
typedef struct Entry { char *text; s32 refs; } Entry;
typedef struct Vec { s32 *begin,*end,*cap; } Vec;
typedef struct Pool { s32 *map; s32 a,b; s32 *reverse; s32 c,d; Vec freeids; Entry *entries; s32 e,f,count; } Pool;
typedef struct Handle { u16 type; s32 id; } Handle;
extern Pool D_004262D0;
extern RStr D_0040E658;
extern u32 D_0040E618[];
extern void func_002B2028(void*);
extern void func_00152720(Vec*,s32*,s32*);
static inline void drop(char *p) { RStr *h=(RStr*)(p-16); if(--h->refs==0) { if(h->size+16) func_002B2028(h); else { *(u32*)h=D_0040E618[-1]; D_0040E618[-1]=(u32)h; } } }
static inline char *retain(char *p) { RStr *h=(RStr*)(p-16); if(h->owned) p=(char*)func_00151930(h); else ++h->refs; return p; }
static inline void assign(Entry *d,Entry *s) { if(s!=d) {drop(d->text);d->text=retain(s->text);} d->refs=s->refs; }
static inline void initentry(Entry *t) { char *p; if(D_0040E658.owned) p=(char*)func_00151930(&D_0040E658); else {++D_0040E658.refs;p=(char*)(&D_0040E658+1);} t->text=p;t->refs=0; }
static inline void pushid(Vec *v,s32 *id) { s32 *end=v->end; if(end!=v->cap) {if(end) *end=*id;v->end++;} else func_00152720(v,end,id);}
static inline Entry *lookup(Pool *p,s32 id) { s32 n=*(s32*)((char*)p->map+(id<<2)); return (Entry*)((char*)p->entries+(n<<3)); }
static inline s32 dec(Pool *p,s32 id) {Entry *e=lookup(p,id);return --e->refs;}
static inline void inc(Pool *p,s32 id) {Entry *e=lookup(p,id);++e->refs;}
static inline void erase(Pool *pool,s32 id) {
 s32 idx,last,rev;
 Entry temp;

 last=pool->count-1;
 idx=pool->map[id];
 pool->count=last;
 if(idx!=last) {
 Entry *src=(Entry*)((char*)pool->entries+(last<<3));
 Entry *dst=(Entry*)((char*)pool->entries+(idx<<3));
 rev=*(s32*)((char*)pool->reverse+(last<<2));
 assign(dst,src);
 *(s32*)((char*)pool->map+(rev<<2))=idx;
 *(s32*)((char*)pool->reverse+(idx<<2))=rev;
 }
 {Entry *e=pool->entries+pool->count;
 initentry(&temp);
 assign(e,&temp);
 drop(temp.text); }
 pushid(&pool->freeids,&id);
}
static inline void setid(s32 *d,s32 *s) {
s32 id;

if(*d!=*s) {
 if(*d>=0) {
 Pool *pool=&D_004262D0;
if(dec(pool,*d)==0) {
 erase(pool,*d);
 }
 }
 *d=*s;
 if(*d>=0) inc(&D_004262D0,*d);
}

}
Handle *func_002E2668(Handle *d,Handle *s) {d->type=s->type;setid(&d->id,&s->id);return d;}
