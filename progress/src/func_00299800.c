typedef struct { char p[12]; int c; char q[12]; int a,b; char r[20]; int x,y,z; char s[4]; int flag, str; } Obj;
typedef struct { char p[76]; int v; } Arg;
extern void *func_0017E620(void);
extern void func_001D4810(void *,int);
extern void func_002062A8(int,void *);
extern int func_00206588(int);
extern void func_002068C0(int,void *,int *,int *);
extern int func_00296530(int,void *);
extern int func_00296710(void);
extern void func_0029A548(int,int *,int *,int,int,int,int);
extern int func_0029A658(void);
extern char D_0047BCC0[];
void func_00299800(Obj *o,Arg *a) {
 int sp[4],sp10,sp14,sp18,sp1c,sp20;
 int h,t; void *obj,*vt; int (*fn)(void *,int);
 if(func_00296530(func_00296710(),a)) {
 if(o->c) {
 h=a->v; sp10=0; sp14=0;
 obj=func_0017E620(); vt=*(void **)obj;
 fn=*(int (**)(void *,int))((char *)vt+0x34);
 t=fn((char *)obj+*(short *)((char *)vt+0x30),o->c);
 sp[0]=0; func_001D4810(sp,t);
 func_002062A8(h,sp); sp18=0;
 if(func_00206588(h)) {
 func_002068C0(func_00206588(h),(void *)o->str,&sp10,&sp14);
 func_002068C0(func_00206588(h),D_0047BCC0,&sp18,&sp14);
 }
 sp1c=0;sp20=0;
 func_0029A548(func_0029A658(),&sp1c,&sp20,sp10,sp14,o->a,o->b);
 o->flag=1;o->x=sp1c;o->y=sp20;o->z=0;
 }
 }
}
