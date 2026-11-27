typedef struct {float *p; int a,b;} Row;
typedef struct {char pad[12]; Row *rows; char pad2[0xA0]; int *begin,*end;} Obj;
extern float func_0023CE28(Obj*,int,int);
void func_0023CD10(Obj *o){int i,j,n=o->end-o->begin; for(i=0;i<n;i++){int *q=o->begin; int x; q+=i; x=*q; for(j=i;j<n;j++){int *r=o->begin; float f,*p; Row *t; r+=j; f=func_0023CE28(o,x,*r);t=o->rows;t+=i;p=t->p;p+=j;*p=f; {Row *u=o->rows; float *z;u+=j;z=u->p;z+=i;*z=f;}}}}
