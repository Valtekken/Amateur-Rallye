typedef struct R {float *p;int a,b;} R;
typedef struct M {R *begin,*end,*limit;float *v;} M;
void func_002043B0(M *m,int i){int n=(s32)((u32)((char*)m->end-(char*)m->begin)*0xAAAAAAABu)>>2;int j,k;R *r=m->begin;r+=i;float *p=r->p;p+=i;float pivot=*p;
for(j=i+1;j<n;j++){R *r2=m->begin;r2+=j;float *q=r2->p;q+=i;float factor=-*q/pivot;*q=0;
for(k=i+1;k<n;k++){R *base=m->begin; R *a=base,*c=base;float *x,*y;a+=i;c+=j;x=a->p;y=c->p;x+=k;y+=k;*y+=factor**x;}
{float *v=m->v;float *x=v,*y=v;x+=i;y+=j;*y+=factor**x;}}
}
