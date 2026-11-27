typedef struct { int *begin,*end,*cap; } Vec;
extern int func_00251830(int),func_00251898(int); extern void func_001CAED8(Vec *,int *,int *);
void func_00254F10(void *unused,char *in,char *a,char *b) {
 Vec *src=(Vec *)(in+0x18),*v; int count=src->end-src->begin,i,x,t,u;
 for(i=0;i<count;i++) { x=src->begin[i]; if(!func_00251830(x)) {
 if(func_00251898(x)==-1) {t=x; v=(Vec *)(a+0x18); if(v->end==v->cap) {func_001CAED8(v,v->end,&t); continue;}}
 else {u=x; v=(Vec *)(b+0x18); if(v->end==v->cap) {func_001CAED8(v,v->end,&u); continue;}}
 if(v->end) *v->end=x; v->end++;
 }}
}
