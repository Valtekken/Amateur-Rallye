typedef struct H { struct H *next; unsigned int size; int refs,flag; } H;
extern H D_00436208; extern H *D_00437E18[];
extern void *func_003CD828(H *); extern void func_003CDDB0(void **,int,unsigned int,int,int),func_003CDC40(void **,int,int,int,int,unsigned int),func_002B2028(void *);
void **func_003CF2B8(void **out,signed char c,int n) {
 void *p,*q; H *h;
 if(D_00436208.flag) p=func_003CD828(&D_00436208); else {p=&D_00436208+1; D_00436208.refs++;}
 func_003CDDB0(&p,0,-1,1,c); func_003CDC40(&p,*(int *)((char *)p-16),0,n,0,-1);
 h=(H *)((char *)p-16);
 if(h->flag) q=func_003CD828(h); else {q=p; h->refs++;}
 *out=q; h=(H *)((char *)p-16);
 if(--h->refs==0) {if(h->size+16>128) func_002B2028(h); else {unsigned int i=(h->size+23)/8-1; h->next=D_00437E18[i]; D_00437E18[i]=h;}}
 return out;
}
