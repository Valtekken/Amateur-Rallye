extern void *D_002AD408(int); extern void D_002AD390(void*);
extern void func_001D4040(void*,void*),func_001D2CD8(void*,void*),func_001D2488(void*,void*),func_001EAE78(void*,void*,void*),func_001E00E8(void*),func_001DF2B0(void*,void*,int);
extern void *func_001D4010(void*),*func_00293988(void*,void*,int);
extern char D_0044DD18[],D_0047B808[],D_0047B810[];
typedef struct {int x; void *str; char pad[24];} Pair;
typedef struct {Pair *start,*end,*cap;} Vec;
typedef struct {int a,b,c,d; char *vt; Vec v; int name;} Obj;
typedef struct {void **start,**end;} List;
void *func_002937E0(void *a,List *list,void *arg) {
 Pair p; int tmp[4]; void **ps; char buf[208]; Obj *o=D_002AD408(36); Vec *v;
 func_001D4040(&p,D_0047B808);
 {int n=p.x; v=&o->v; o->c=0; o->vt=D_0044DD18; o->d=0; o->b=0; o->a=0; v->start=0; v->end=0; v->cap=0; o->name=n;}
 p.x=0; p.str=0; ps=&p.str; func_001D4040(tmp,D_0047B810); p.x=tmp[0]; func_001D2CD8(ps,func_001D4010(arg));
 { Pair *e=v->end; if(e!=v->cap) { if(e) {e->x=p.x; func_001D2488(&e->str,ps);} v->end=(Pair*)((char*)v->end+8); } else func_001EAE78(v,e,&p); }
 func_001E00E8(buf);
 {void **it=list->start; int i=0; if(it!=list->end) do {void *x=func_00293988(a,*it,i); if(!x) {if(o) {char *vt=o->vt; ((void (*)(void*,int))*(void**)(vt+12))((char*)o+*(s16*)(vt+8),3);} D_002AD390(p.str); return 0;} func_001DF2B0(o,x,0); i++; it++; } while(it!=list->end);}
 D_002AD390(p.str); return o;
}
