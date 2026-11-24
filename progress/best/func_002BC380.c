extern void func_002BC1E8(void*,int);
extern void func_002BC240(void*,int,int);
typedef int (*A)(void*); typedef int (*B)(void*,int,int,int,int); typedef int (*C)(void*,int,int,int,int*); typedef void (*D)(void*,int);
#define F(p,t,o) (*(t*)((char*)(p)+(o)))
int func_002BC380(void *a,int b,int c,int *d,int e) {
 int n,h,r=0; void *p,*v;
 if(F(a,void*,4)) {
 p=F(a,void*,4); v=F(p,void*,0);
 h=F(v,A,0x24)((char*)p+F(v,short,0x20));
 func_002BC240(a,b,e); n=F(a,int,0x28);
 if(n) {
 p=F(a,void*,8); v=F(p,void*,8);
 r=F(v,B,0x3c)((char*)p+F(v,short,0x38),F(a,int,0x20),h,n,e);
 F(a,int,0x18)+=n; func_002BC1E8(a,e);
 if(r) {p=F(a,void*,4);v=F(p,void*,0);
 r=F(v,C,0x1c)((char*)p+F(v,short,0x18),h,n,c,d);
 F(a,int,0x1c)+=*d; }
 }
 p=F(a,void*,4);v=F(p,void*,0);
 F(v,D,0x2c)((char*)p+F(v,short,0x28),h);
 } else { (void)*(volatile unsigned char*)((char*)a+0x10); *d=0; }
 return r;
}
