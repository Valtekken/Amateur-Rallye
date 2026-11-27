extern char D_004262D0[];
extern int func_003FA9B8(const char *);
extern void func_003AC488(int *);
extern void func_003ABFC8(void *,void *,const char *);
extern int func_003A4568(void *);
extern int func_003ABB20(void *,int);
extern int func_003ABDC0(void *,int);
extern int func_003ABEA8(void *,int);
extern void func_003AB7F8(int);
extern void func_003A33E8(void *,int);
int *func_003A45E8(int *a, const char *b) {
 char tmp[16]; volatile int n;
 if (b && func_003FA9B8(b)) {
 func_003ABFC8(tmp,D_004262D0,b);
 n=func_003ABB20(D_004262D0,func_003A4568(tmp));
 if(n>=0) *a=n; else *a=func_003ABDC0(D_004262D0,func_003A4568(tmp));
 func_003AB7F8(func_003ABEA8(D_004262D0,*a));
 func_003A33E8(tmp,2);
 } else func_003AC488(a);
 return a;
}
