extern void func_001D4040(void*,const char*); extern void func_001C9528(void*,void*,unsigned,void*,void*);
extern char D_004711B0[],D_00473730[];
typedef struct { int id,key; void *vt; int count; int *begin,*end,*cap; int flag; } S;
S *func_0018CB50(S *a) {
 int key[8], zero,i; unsigned n,sz; int *start,*end,*pos,*it; S *p=a;
 func_001D4040(key,D_004711B0);
 a->key=key[0]; a->count=32; a->vt=D_00473730; a->begin=0; a->id=-1; a->end=0; a->cap=0; a->flag=1;
 zero=0; n=p->count; start=p->begin; end=p->end; sz=end-start;
 if(n<sz) { pos=start+n; if(pos<end) { it=pos+1; do { it++; } while(it<end); } p->end=end-(end-pos); }
 else func_001C9528(&a->begin,end,n-sz,&zero,&a->begin);
 for(i=0;i<p->count;i++) { zero=0; p->begin[i]=zero; }
 return a;
}
