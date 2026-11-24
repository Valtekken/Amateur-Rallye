extern void func_0011E650(int,int,int);
extern void func_0011DFB8(int);
extern int func_0011E528(int);
extern void func_00124C88(void*);
extern int func_0011E2B8(int,int);
extern int func_00193B60(void);
extern void func_00191B08(int,int);
extern int func_00194C40(void);
extern void func_001946A8(int,int);
extern int func_00194738(int);
extern void func_00193EF0(int,int);
extern int func_00196E10(void);
extern void func_00196550(int,int);
extern void func_0011E278(int,int);
extern int func_001E4280(void);
extern void func_001D4040(void*,const char*);
extern void func_001E3D10(int,void*,int);
extern void func_001E3EC0(int,void*,int);
extern char D_00447168[],D_00447E10[],D_00448348[];
#define A(p,t,o) (*(t*)((char*)(p)+(o)))
void func_001249F0(void *arg0){
 int key[4],sel,k;
 func_0011E650(A(arg0,int,0x10),3,0);
 func_0011DFB8(A(arg0,int,0x10));
 if(func_0011E528(A(arg0,int,0x10)))return;
 func_00124C88(arg0);
 sel=func_0011E2B8(A(arg0,int,0x10),1);
 switch(sel){
 case -3:
  func_00191B08(func_00193B60(),0);
  func_001946A8(func_00194C40(),0);
  func_0011E278(A(arg0,int,0x10),1);
  break;
 case 1:
  func_00191B08(func_00193B60(),0);
  if(func_00194738(func_00194C40()))func_0011E278(A(arg0,int,0x10),0x17);
  else func_0011E278(A(arg0,int,0x10),0x1B);
  break;
 case 2:
  func_00193EF0(func_00194C40(),0);
  func_00191B08(func_00193B60(),6);
  func_0011E278(A(arg0,int,0x10),0x11);
  break;
 case 3:
  func_00193EF0(func_00194C40(),0);
  func_00191B08(func_00193B60(),5);
  k=func_001E4280();func_001D4040(key,D_00448348);func_001E3D10(k,key,1);
  func_0011E278(A(arg0,int,0x10),0x1D);
  break;
 case 5:
  func_00193EF0(func_00194C40(),0);
  func_00191B08(func_00193B60(),7);
  func_0011E278(A(arg0,int,0x10),0x27);
  break;
 case 4:
  func_00193EF0(func_00194C40(),0);
  func_00191B08(func_00193B60(),8);
  func_00196550(func_00196E10(),2);
  k=func_001E4280();func_001D4040(key,D_00447168);func_001E3EC0(k,key,5);
  k=func_001E4280();func_001D4040(key,D_00447E10);func_001E3EC0(k,key,0);
  func_0011E278(A(arg0,int,0x10),6);
  break;
 }
}
