extern int func_002504B8(int,int,int,void *);
extern int func_00250608(int,int,int,int);
void func_002535E8(void *unused,void **a,void **b) {
 void *x=*a,*y=*b,*i=*(void **)y,*j=*(void **)x;
 int prev=*(int *)((char *)*(void **)((char *)y+4)+8);
 void *v=*(void **)((char *)*(void **)((char *)x+4)+8);
 if(i!=y) do {
 int n=*(int *)((char *)i+8);
 func_002504B8(prev,*(int *)((char *)v+32),*(int *)((char *)v+36),v);
 func_002504B8(n,*(int *)((char *)v+32),*(int *)((char *)v+36),v);
 func_00250608(prev,*(int *)v,*(int *)((char *)v+4),*(int *)((char *)v+40));
 func_00250608(n,*(int *)v,*(int *)((char *)v+4),*(int *)((char *)v+40));
 prev=n; v=*(void **)((char *)j+8); i=*(void **)i; j=*(void **)j;
 } while(i!=*b);
}
