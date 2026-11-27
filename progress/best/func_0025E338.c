typedef struct {char *a,*b,*c;} Vec;
typedef struct {Vec x,y,z; char pad[0x74]; char *a,*b;} O;
extern void func_003F93CC(void *,void *,int);
extern void func_001551C0(Vec *,void *,int,void *);
extern void func_00202A50(Vec *); extern void func_00202BA0(Vec *,int);
void func_0025E338(O *o){
 char *end=o->x.b,*start=o->x.a,*p,*q; unsigned n=(o->b-o->a)>>2, count; int zero; float f; register Vec *y,*z;
 func_003F93CC(start,end,0); zero=0; p=o->x.b-(end-start); o->x.b=p; count=(p-o->x.a)>>2;
 if(n<count){q=o->x.a+n*4;func_003F93CC(q,p,0);o->x.b-=p-q;} else func_001551C0(&o->x,p,n-count,&zero);
 y=&o->y; z=&o->z; func_00202A50(y);func_00202BA0(y,n);
 start=z->a;end=z->b;func_003F93CC(start,end,0);p=z->b-(end-start);z->b=p; f=0; count=(p-z->a)>>2;
 if(n<count){q=z->a+n*4;func_003F93CC(q,p,0);z->b-=p-q;} else func_001551C0(z,p,n-count,&f);
}
