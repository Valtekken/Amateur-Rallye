typedef struct {char *start,*end,*cap;} Vec;
typedef struct {int count; void *vt;} Ref;
typedef struct {char pad[16];Vec a,b,c; void *ptr; Ref *ref;} Obj;
extern void func_0022EBD8(Obj *),func_002331C0(void *,int),func_00233068(void *,int),func_002313D0(void *,int),func_00231EB0(void *,int),func_002B2028(void *),D_002AD390(void *);
extern char D_0040E618[];
static inline void freev(Vec *v,int stride,unsigned magic) {
 int n=(int)((unsigned)(v->cap-v->start)*magic)>>2;
 if(n) {if(n*stride) func_002B2028(v->start);else {*(void **)v->start=*(void **)(D_0040E618-4);*(void **)(D_0040E618-4)=v->start;}}
}
void func_0022DEA0(Obj *o,int flags){
 char *p,*end; Vec *v;
 func_0022EBD8(o);if(o->ptr)func_002331C0(o->ptr,3);
 if(o->ref && --o->ref->count==0){Ref *r=o->ref; char *vt=r->vt; ((void (*)(void *,int))*(void **)(vt+12))((char *)r+*(short *)(vt+8),3);}
 v=&o->c;p=v->start;end=v->end;while(p<end){func_00233068(p,2);p+=16;}
 {int n=(int)(v->cap-v->start)>>4;if(n){if(n*16)func_002B2028(v->start);else {*(void **)v->start=*(void **)(D_0040E618-4);*(void **)(D_0040E618-4)=v->start;}}}
 v=&o->b;p=v->start;end=v->end;while(p<end){func_002313D0(p,2);p+=60;}freev(v,60,0xeeeeeeef);
 v=&o->a;p=v->start;end=v->end;while(p<end){func_00231EB0(p,2);p+=28;}freev(v,28,0xb6db6db7);
 if(flags&1)D_002AD390(o);
}
