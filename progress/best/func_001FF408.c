extern void *D_002AD408(int); extern void D_002AD390(void *);
extern void func_001D4040(void *, void *), func_001D2CD8(void *, void *), func_001D2488(void *, void *), func_001EAE78(void *, void *, void *), func_001E00E8(void *), func_001DF2B0(void *, void *, int);
extern void *func_001D4010(void *), *func_001E1C10(void *,void *,void *), *func_001E2090(void *,void *,void *);
extern void func_003FA310(void *,void *,...);
extern char D_0044DD18[],D_00477858[],D_00477E58[],D_004783B0[],D_004783B8[],D_004783C8[],D_004783D8[];
typedef struct {int x; void *str; char pad[24];} Pair;
typedef struct {Pair *start,*end,*cap;} Vec;
typedef struct {int a,b,c,d; char *vt; Vec v; int name;} Obj;
static inline void copy(void *a, void *b) {func_001D4040(a,b);}
void *func_001FF408(void *a, char *arg, int index) {
 char str[256]; Pair p; int tmp[4]; char buf[208]; int tmp2[4]; void **ps; Obj *o; Vec *v; void *x;
 func_003FA310(str,D_00477E58,index);
 o=D_002AD408(36);
 copy(&p,D_004783B0);
 {int n=p.x; v=&o->v; o->c=0; o->vt=D_0044DD18; o->d=0; o->b=0; o->a=0; v->start=0; v->end=0; v->cap=0; o->name=n;}
 p.x=0; p.str=0; ps=&p.str; copy(tmp,D_00477858); p.x=tmp[0]; func_001D2CD8(ps,str);
 {Pair *e=v->end; if(e!=v->cap) {if(e) {e->x=p.x; func_001D2488(&e->str,ps);} v->end=(Pair*)((char*)v->end+8);} else func_001EAE78(v,e,&p);}
 func_001E00E8(buf);
 copy(tmp,D_004783B8); func_001D4040(tmp2,func_001D4010(arg));
 x=func_001E1C10(buf,tmp,tmp2);
 if(x) {func_001DF2B0(o,x,0); func_001D4040(tmp2,D_004783C8); x=func_001E2090(buf,tmp2,arg+0x40);
 if(x) {func_001DF2B0(o,x,0); func_001D4040(tmp2,D_004783D8); x=func_001E2090(buf,tmp2,arg+0x30);
 if(x) {func_001DF2B0(o,x,0); D_002AD390(p.str); return o;}}}
 if(o) {char *vt=o->vt; ((void (*)(void *,int))*(void **)(vt+12))((char *)o+*(s16 *)(vt+8),3);}
 D_002AD390(p.str); return 0;
}
