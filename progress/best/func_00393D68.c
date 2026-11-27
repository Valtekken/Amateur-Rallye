extern void *D_002AD408(int);
extern int func_003B7D18(void *,int);
extern void func_003B7DA8(int,int,int);
void func_00393D68(void **a) {
 int n; volatile int count,buf,i; int value; char *obj; char *vt; void (*fn)(void *,int *);
 obj=a[0]; vt=*(char **)(obj+8)+0x90;
 fn=*(void (**)(void *,int *))(vt+4); fn(obj+*(short *)vt,&n);
 count=n*3; buf=func_003B7D18(D_002AD408(8),count);
 *(int *)((char *)a[1]+0x24)=buf;
 for(i=0;i<count;i++) {
 obj=a[0]; vt=*(char **)(obj+8)+0x90;
 fn=*(void (**)(void *,int *))(vt+4); fn(obj+*(short *)vt,&value);
 func_003B7DA8(buf,i,value);
 }
}
