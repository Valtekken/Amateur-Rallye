typedef struct {u32 id; float a[3],b[3],v;} Item;
extern void func_002DA068(Item*,int,int,Item*);
static inline void cp(Item *d, Item *s){d->id=s->id;{float *x=d->a,*y=s->a,*z=d->b,*w=s->b;x[0]=y[0];x[1]=y[1];x[2]=y[2];z[0]=w[0];z[1]=w[1];z[2]=w[2];}d->v=s->v;}
void func_002DA188(Item *a,int start,int end,Item *value){int hole=start,child=(start+1)*2;Item tmp;
while(child<end){child -= a[child].v<a[child-1].v;cp(&a[hole],&a[child]);hole=child;child=2*(hole+1);}
if(child==end){cp(&a[hole],&a[child-1]);hole=child-1;}
cp(&tmp,value);func_002DA068(a,hole,start,&tmp);
}
