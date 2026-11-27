typedef struct { float key; int a,b,c; } E;
static inline int cmp(E *a,E *b) { return a->key < b->key; }
extern void func_002148F8(E *,E *);
void func_002149A0(E *first,E *last) {
 E *p,*q,*dst,*base; int n; E tmp;
 if(first!=last) { p=first+1; base=first; if(p!=last) do {
 tmp=*p;
 if(cmp(&tmp,base)) {
 q=p; dst=q+1; n=q-first; { E *end=dst;
 while(n>0) { --dst; --q; *dst=*q; --n; }
 *base=tmp; p=end; }
 } else { func_002148F8(p,&tmp); dst=p+1; p=dst; }
 } while(p!=last); }
}
