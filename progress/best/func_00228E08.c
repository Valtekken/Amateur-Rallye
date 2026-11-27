extern void func_00226638(void *),func_002267C0(void *,int),func_00227380(void *,void *,void *,void *);
extern int func_00227690(void *),func_00227850(void *);
float func_00228E08(void **a,void *b){int x[12],y[12];int n,m,p,q;float f;
func_00226638(x);func_00226638(y);func_00227380(a[1],b,x,y);
n=func_00227850(x);m=func_00227850(y);
if(func_00227690(x)||func_00227690(y)) f=1.0f;
else {p=n+1;q=m+1;f=(float)(q<p?p:q)/(float)(q<p?q:p);}
func_002267C0(y,2);func_002267C0(x,2);return f;}
