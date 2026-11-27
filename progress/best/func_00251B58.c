typedef struct N { struct N *a,*b; int c; } N;
typedef struct L { N *p; int x[7]; } L;
extern int func_00251D20(int,int);
extern void *func_002B1FC0(int), *func_003D2910(int);
extern void func_00251DF0(),func_00251F10(),func_00252098(),func_002522B8(),func_00252520(),func_002525F8(),func_00252F18(),func_00253538(),func_002535E8(),func_002536C0(),func_00253730(),func_002543F0(),func_00276C98(),func_002B2028(),func_00271A28();
int func_00251B58(int a,int b,int c,int d,int e) {
 L l; N *q; N *p;
 if(func_00251D20(a,c)) return 0;
 p=func_002B1FC0(12); if(!p) p=func_003D2910(12); l.p=p; p->a=p; l.p->b=l.p;
 func_00251DF0(a,b,c,d,e); func_00251F10(a,b,c,d,e,&l); func_00252098(a,b,c,d,e); func_002522B8(a,&l);
 p=func_002B1FC0(12); if(!p) q=func_003D2910(12); else q=p; { N **t=&q; (*t)->a=*t; (*t)->b=*t; }
 func_00252520(a,&l,&q); func_002525F8(a,b,d,e,&l); func_00252F18(a,b,d,e,&q); func_00253538(a,&l); func_002535E8(a,&l,&q); func_002536C0(a,&q); func_00253730(a,b,d,e,&l,&q); func_002543F0(a,d,e); func_00276C98(&q); func_002B2028(q); func_00271A28(&l); func_002B2028(l.p); return 1;
}
