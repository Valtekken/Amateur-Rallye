extern void func_001D29D0(void*,const char*,int,int);
extern void func_001D4040(void*,void*);
extern void D_002AD390(void*);
extern const char D_0047BB28[];
extern int *D_00426840;
extern void *D_002AD408(int);
extern int func_00297018();
extern int func_00296D38(int,int);
void *func_002974B0(void *a,int b,int c){void *p=0;func_001D29D0(&p,D_0047BB28,c,b);func_001D4040(a,p);D_002AD390(p);return a;}
void *func_00297500(void){if(!D_00426840){{int *p=D_002AD408(4);D_00426840=p;*p=0;}}return *(int *volatile*)&D_00426840;}
void *func_00297130(float *a,float *b){float t=(float)(int)(b[23]-b[10]);float s;if(t<=b[20]){s=b[21];s*=t;}else{s=b[22];s*=(b[19]-t);}{float *p=b+16;float x=p[0];float y=p[1];float z=p[2];a[0]=x*s;a[1]=y*s;a[2]=z*s;}return a;}
void func_00296CF8(int a,int b){func_00297018(a);func_00296D38(a,b);}
