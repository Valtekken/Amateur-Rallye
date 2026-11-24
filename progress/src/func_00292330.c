void func_002924A0(void *);
void func_002A5790(void *, void *, void *);
void *func_00292330(void *arg0, void *arg1) {
 int i; int *p; void **end; void **cap; void *sp_arg;
 p=(int *)arg0;
 for(i=3;i!=-1;i--) { p[0]=0; p[1]=0; p+=2; }
 ((int *)arg0)[8]=0; ((int *)arg0)[11]=0; ((int *)arg0)[12]=0; ((int *)arg0)[9]=0;
 func_002924A0(arg0);
 sp_arg=arg0; end=*(void ***)((char *)arg1+4); cap=*(void ***)((char *)arg1+8);
 if(end!=cap) { if(end!=0) *end=arg0; *(void ***)((char *)arg1+4)=*(void ***)((char *)arg1+4)+1; }
 else func_002A5790(arg1,end,&sp_arg);
 return arg0;
}
