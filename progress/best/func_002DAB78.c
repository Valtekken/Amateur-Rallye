typedef struct {int a; float b,c,d,e,f,g,h;} Item;
extern void func_002DAA98(Item *,Item *);
static inline void cp(volatile Item *d, Item *s){d->a=s->a;d->b=s->b;d->c=s->c;d->d=s->d;d->e=s->e;d->f=s->f;d->g=s->g;d->h=s->h;}
void func_002DAB78(Item *first, Item *last) {
 Item *p;
 if(first==last)return;
 for(p=first+1;p!=last;p++){
 volatile Item tmp,copy; cp(&tmp,p);
 int cmp=tmp.h<first->h; if(cmp) { int n=p-first; Item *q=p; if(n>0) do {cp(q,q-1);--q;--n;} while(n>0); cp(first,(Item*)&tmp); }
 else {cp(&copy,(Item*)&tmp);func_002DAA98(p,(Item*)&copy);}
 }
}
