extern int func_00251830(void *),func_00251898(void *); extern void func_001CAED8(void *,void **,void **);
typedef struct { void **begin,**end,**limit; } Vec;
void func_00252098(int a,int b,char *src,char *yes,char *no) {
 Vec *v=(Vec *)(src+24),*dst; int i,n; void *p,*t1,*t2; void **end, **tp;
 n=v->end-v->begin;
 for(i=0;i<n;i++) { void **q=v->begin; q+=i; p=*q; if(!func_00251830(p)) {
 if(func_00251898(p)==-1) {t1=p;dst=(Vec *)(yes+24); end=dst->end; if(end==dst->limit) {func_001CAED8(dst,end,&t1); continue;} }
 else {t2=p;tp=&t2;dst=(Vec *)(no+24);end=dst->end;if(end!=dst->limit) { insert: if(end) *end=p; dst->end++; } else func_001CAED8(dst,end,tp); continue; }
 goto insert;
 }}
}
