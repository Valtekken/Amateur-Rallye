extern int D_0043AF40[];
extern void func_003E0EF0(int);
extern long func_003E5018(void *);
typedef struct { char pad[0x818]; int a; char pad2[0x1c]; unsigned int b; int c; char pad3[0x18]; int d; } S;
unsigned int func_003E5438(S *p,int n) {
 int i=0; unsigned int v, cmd;
 if ((*(volatile unsigned int *)0x10002010 & 0x80004000)==0x80000000) {
 do { if(i++ >= 5001){func_003E0EF0(p->d); i=0;} } while ((*(volatile unsigned int *)0x10002010 & 0x80004000)==0x80000000);
 }
 if(p->a || p->c<n){ *(volatile unsigned int *)0x10002000=0x40000000; p->a=D_0043AF40[4]; p->b=func_003E5018(p); }
 cmd=n|0x40000000; p->c=32; *(volatile unsigned int *)0x10002000=cmd; v=p->b>>(32-n); p->a=D_0043AF40[cmd>>28]; p->b=func_003E5018(p); return v;
}
