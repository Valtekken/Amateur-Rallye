extern int func_001930D8(int,int),func_00193138(int,int),func_00193400(int,int),func_00193B60(void);
extern void* func_001933A0(int,int);
extern void func_001D4040(void*,const char*),func_0021E4F0(void*),func_003FA310(char*,const char*,int);
extern char D_0044BC40[],D_0044BC48[];
extern int D_0040E5F8,D_0048D730;
#define A(p,t,o) (*(t*)((char*)(p)+(o)))
void func_0014ADF0(void *arg0,void *arg1){
 char sp[16];
 if(func_00193138(func_00193B60(),A(arg0,int,0xC))==0)func_0021E4F0(arg1);
 if(A(arg1,int,0x4C)!=0){
  void *r=func_001933A0(func_00193B60(),A(arg0,int,0xC));
  A(arg0,float,0x14)=A(r,float,0);A(arg0,float,0x18)=A(r,float,4);
  A(arg0,int,0x1C)=func_00193400(func_00193B60(),A(arg0,int,0xC));
  func_003FA310(sp,D_0044BC40,func_001930D8(func_00193B60(),A(arg0,int,0xC)));
  func_001D4040((char*)arg0+0x20,sp);
  if(D_0040E5F8==0){func_001D4040(&D_0048D730,D_0044BC48);D_0040E5F8=1;}
  A(arg0,int,0x24)=D_0048D730;
  {void *p=A(arg1,void*,4);
   if(p){char *q=(char*)p+0xC;struct{float x,y,z;}tmp;
    tmp.x=A(arg0,float,0x14);tmp.y=A(arg0,float,0x18);tmp.z=0;
    A(q,float,0)=tmp.x;
    A(q,float,4)=tmp.y;
    A(q,float,8)=tmp.z;
   }}
 }
}
