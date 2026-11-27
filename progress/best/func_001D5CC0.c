extern void func_001D5948(void*,int),func_001D5B50(void*,float),func_001D5DE0(void*),func_002B2028(void*),func_003F9698(char*,...);
extern float func_001D5E70(void*,float,float); extern int func_002AD350(float);
extern char D_00476048[]; extern void *D_0040E618[];
typedef struct {void **start; void *end; void **cap; int pad; float real,smooth; int other[2];} Timer;
void func_001D5CC0(void) {
 Timer t; int x[4]; int i=0x31; int a,b,c;
 func_001D5948(&t,4); func_001D5DE0(x);
 do { i--; a=func_002AD350(t.real); b=func_002AD350(t.smooth); c=func_002AD350(t.real-t.smooth); func_003F9698(D_00476048,a,b,c); {float r=t.real; float v=func_001D5E70(x,0.1f,0.4f); func_001D5B50(&t,r+v);} }while(i>=0);
 {void **q=t.cap; void **p=t.start; int n=((int)q-(int)p)>>2; if(n) { if(n*4) func_002B2028(p); else { *p=D_0040E618[-1]; D_0040E618[-1]=p; } }}
}
