typedef struct { float x,y,z; } Vec;
typedef struct { char pad[0x50]; Vec pos; } Pos;
typedef struct { char pad[0x50]; Pos *p; } Obj;
typedef struct { u32 *begin,*end,*cap; } V;
typedef struct { u32 index; V v; } Entry;
typedef struct { Entry *begin,*end,*cap; } Entries;
typedef struct { Obj **begin,**end,**cap; float radius; Entries entries; } State;
extern void func_00152720(V *,u32 *,u32 *);
extern void func_00278908(Entries *,Entry *,Entry *);
extern void func_0027D7A0(Entry *,Entry *);
extern void func_002B2028(void *);
extern char D_0040E618[];
extern float func_003F3E80(float);
static inline void recycle(void **base, void *p, int n) { *(void **)p=base[n-1]; base[n-1]=p; }
static inline void grow(V *v,u32 *p,u32 *x) { func_00152720(v,p,x); }
static inline void push(V *v,u32 *j) { if(v->end!=v->cap) { if(v->end) *v->end=*j; v->end++; } else func_00152720(v,v->end,j); }
static inline void append(Entries *t,Entry *e) { if(t->end!=t->cap) { if(t->end) func_0027D7A0(t->end,e); t->end++; } else func_00278908(t,t->end,e); }
static inline int near(float a,float b) { return a < b; }
void func_00263788(State *s) {
 s32 i;
 i=0; if((s32)(s->end-s->begin)) do {
  Entry e; V *v=&e.v; u32 j; u32 next=i+1; Obj **arr=s->begin; Obj *a=*(Obj **)((u8 *)arr+(i<<2));
  e.v.begin=0; v->end=0; v->cap=0; e.index=i;
  j=0; if((s32)(s->end-s->begin)!=0) do {
   Obj **q=s->begin; Obj *b; q+=j; b=*q;
   if(a!=b) {
    Vec d; float dist,x,y,z; Vec *bp=&b->p->pos, *ap=&a->p->pos;
    x=bp->x-ap->x;
    y=bp->y-ap->y;
    z=bp->z-ap->z; d.x=x; d.y=y; d.z=z;
    dist=__builtin_sqrtf(x*x+y*y+z*z);
    if(near(dist,s->radius)) {
     push(&e.v,&j);
    }
   }
  } while (++j<(u32)(s->end-s->begin));
  append(&s->entries,&e);
  if(v->cap-e.v.begin) {
   if(((s32)(v->cap-e.v.begin)<<2)!=0) func_002B2028(e.v.begin);
   else { recycle((void **)(D_0040E618),e.v.begin,(s32)(v->cap-e.v.begin)<<2); }
  }
 i=next; } while (i<(u32)(s->end-s->begin));
}
