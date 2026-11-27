typedef struct { int a; float b,c,d,e,f,g,h; } Item;
extern void func_002DA188(Item *, int, int, Item *);
static inline void cp(volatile Item *d, Item *s) {d->a=s->a;d->b=s->b;d->c=s->c;d->d=s->d;d->e=s->e;d->f=s->f;d->g=s->g;d->h=s->h;}
void func_002DA418(Item *first, Item *last) {
 if(last-first>=2) { int len=(char*)last-(char*)first; Item *end=last;
 do { volatile Item tmp, copy; --end; len-=32; --last;
 cp(&tmp,end); cp(end,first); cp(&copy,(Item*)&tmp); func_002DA188(first,0,len>>5,(Item*)&copy);
 } while(last-first>=2); }
}
