typedef struct {char pad[12];int a;} Obj;
extern int D_002AD408(int),func_0011DA70(int,int),func_00297500(void),func_002971B0(int),func_001E3598(int,void*),func_0010B1C8(void),func_002A1700(void),func_00194C40(void),func_00194428(int),func_001942E8(int,int);
extern void func_00297398(int,int),func_001D4040(void*,const char*),func_00107FA8(int),func_001E3D10(int,void*,int),func_002A1290(int,void*,int),func_00193EF0(int,int),func_001943D8(int,int),func_001E3EC0(int,void*,int),func_001327A8(Obj*);
static inline void init(char *p,const char *k){func_001D4040(p,k);}
extern char D_0044A248[],D_00445BE0[],D_0044A268[],D_0044A288[];
void func_001320C0(Obj *o){char a[16],b[16];int x,y;const char *key;char *p;
o->a=func_0011DA70(D_002AD408(16),27);
if(func_002971B0(func_00297500())==-1)func_00297398(func_00297500(),1);
x=func_001E4280();key=D_0044A248;func_001D4040(a,key);
if(func_001E3598(x,a)){
func_00107FA8(func_0010B1C8());
y=func_001E4280();init(b,key);p=(char *)b;func_001E3D10(y,p,0);
y=func_002A1700();func_001D4040(p,D_00445BE0);func_002A1290(y,p,3);
}
func_00193EF0(func_00194C40(),1);
if(!func_00194428(func_00194C40()))func_001943D8(func_00194C40(),1);
x=func_001E4280();func_001D4040(a,D_0044A268);func_001E3EC0(x,a,func_001942E8(func_00194C40(),0));
x=func_001E4280();func_001D4040(a,D_0044A288);func_001E3EC0(x,a,func_001942E8(func_00194C40(),1));
func_001327A8(o);
}
