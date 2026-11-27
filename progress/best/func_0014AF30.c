extern void *func_001E3820(s32,void*,void*);
extern void func_0029ECB8(void*,char*);
extern int func_003FA310(char*,const char*,...);
extern char D_0044C2E8[];
typedef struct { char pad[16]; int value; float x,y; int unit; int a,b; } A;
typedef struct { char pad[4]; char *text; char pad2[68]; int enabled; } B;
void func_0014AF30(A *a,B *b) {
 char buf[32]; float v; int n; char *p; float xyz[3]; void *r;
 if (b->enabled) {
 r=func_001E3820(func_001E4280(), &a->a,&a->b);
 if (r) {
 v=*(float *)(*(char **)((char *)r+8)+16); v/=1000.0f; v*=3600.0f;
 if (!a->unit) v*=0.621f;
 n=(int)v; if(n<0) { n=-n; if(n==a->value) return; }
 if(n!=a->value) {
 p=b->text;
 if(p) {
 func_003FA310(buf,D_0044C2E8,n);
 xyz[0]=a->x; xyz[1]=a->y; xyz[2]=0;
 { float *q=(float *)(p+12); q[0]=xyz[0]; q[1]=xyz[1]; q[2]=xyz[2]; }
 func_0029ECB8(p,buf);
 }
 a->value=n;
 }
 }
 }
}
