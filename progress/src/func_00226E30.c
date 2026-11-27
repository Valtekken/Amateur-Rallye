typedef struct { int *begin,*end; } Vec;
extern int func_00229A48(int,int);
extern void func_00229658(int,int),func_003F93CC(void *,void *,int);
void func_00226E30(Vec *v,int i) {
 int *p=v->begin+i; int x=*p; int *n=p+1;
 if(n!=v->end) func_003F93CC(p,n,((int)((char*)v->end-(char*)n)>>2)*4);
 v->end--; p=v->begin;
 while(p!=v->end) { int y=*p;
  if(func_00229A48(y,x+8) && func_00229A48(x,y+8)) {
   if(y) func_00229658(y,3);
   n=p+1; if(n!=v->end) func_003F93CC(p,n,((int)((char*)v->end-(char*)n)>>2)*4);
   v->end--;
  } else p++;
 }
 if(x) func_00229658(x,3);
}
