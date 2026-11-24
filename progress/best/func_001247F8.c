extern void func_001D4040(void*,const char*);
extern int func_001D2458(void*,const char*);
extern void D_002AD390(int);
extern int func_00194C40(void),func_00194738(int),func_001E4280(void);
extern int func_0011DA70(int,int),func_00297500(void),func_002971B0(int),func_00297398(int,int);
extern void* D_002AD408(int);
extern void func_001E3D10(int,void*,int);
extern void func_001E3FE0(int,void*,void*);
extern void func_00200270(void*);
extern void* func_002003C0(void);
extern int func_001E3598(int,void*);
extern float func_001E3610(int,void*);
extern void* func_0017E620(void);
extern char D_00444880[],D_004473E0[],D_00448300[],D_00448320[];
#define A(p,t,o) (*(t*)((char*)(p)+(o)))
typedef char*(*GetName)(void*,int,int);
static inline char* screenname(void){void*p=func_0017E620();void*v=*(void**)p;return A(v,GetName,44)((char*)p+A(v,short,40),2,0);}
static inline void *mk(void *p,const char *s){func_001D4040(p,s);return p;}
void func_001247F8(void*arg0){
 int root[4],p1[4],screen[4]; int selected;
 A(arg0,int,0x10)=func_0011DA70(D_002AD408(0x10),2);
 selected=func_002971B0(func_00297500());
 if(selected==-1)func_00297398(func_00297500(),1);
 {int m=func_001E4280();func_001D4040(root,D_00448300);
  if(func_001E3598(m,root)){
   int n=func_001E4280();func_001E3D10(n,mk(p1,D_00448300),0);
   func_00200270(func_002003C0());func_002003C0();
   n=func_001E4280();A(n,float,0x24)=func_001E3610(n,mk(p1,D_00444880));
  }}
 {int m=func_001E4280();func_001D4040(root,D_00448320);func_001E3D10(m,root,1);
  if(func_00194738(func_00194C40())){m=func_001E4280();func_001D4040(root,D_00448320);func_001E3D10(m,root,0);}}
 {int m=func_001E4280();func_001D2458(root,D_004473E0);func_001D2458(screen,screenname());func_001E3FE0(m,root,screen);D_002AD390(screen[0]);D_002AD390(root[0]);}
}
