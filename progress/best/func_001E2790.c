typedef struct { float x,y,z,w; } V4;
typedef struct N { int val; struct N *next; } N;
typedef struct { N *head; } L;
extern void func_001D4040(void *,const char *);
extern void func_001E00E8(void *);
extern int func_001E0A38(void *,N *,int *,V4 *);
static inline void init4(V4*p,float x,float y,float z,float w){p->x=x;p->y=y;p->z=z;p->w=w;}
static inline void copy4(V4*d,V4*s){d->x=s->x;d->y=s->y;d->z=s->z;d->w=s->w;}
int func_001E2790(L **list,const char *name,V4 *out) {
 int key[4],found[4]; char data[0xd0]; V4 t; N *n;
 func_001D4040(key,name); found[0]=0; func_001E00E8(data);
 n=(*list)->head;
 while(n) { if(func_001E0A38(data,n,found,out) && found[0]==key[0]) return 1; n=n->next; }
 init4(&t,1,0,0,0); copy4(&out[0],&t);
 init4(&t,0,1,0,0); copy4(&out[1],&t);
 init4(&t,0,0,1,0); copy4(&out[2],&t);
 init4(&t,0,0,0,1); copy4(&out[3],&t);
 return 0;
}
