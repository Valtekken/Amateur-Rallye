typedef struct { int *begin,*end; } Vec;
typedef struct { char pad[12]; Vec vec; } V;
extern int func_00242898(int,int,int,int);
void func_00242780(int a,V *v) {
 Vec *vec=&v->vec; int n=vec->end-vec->begin,done=1,i,j;
 do {
  for(i=0;i<n;i++) { int *p0=vec->begin; int p; p0+=i; p=*p0; if(p) {
   for(j=0;j<n;) { int off=j*4; int q; j++; q=*(int *)((char *)vec->begin+off); if(q && func_00242898(a,p,q,1)) { done=0; *(int *)((char *)v->vec.begin+off)=0; } }
  }}
  if(done) break;
  done=1;
 } while(1);
}
