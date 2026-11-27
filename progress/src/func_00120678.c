typedef struct {char pad[12]; int a,b;} Obj;
extern void func_0011E650(int,int,int),func_0011DFB8(int),func_0011E278(int,int),func_00110238(int,int),func_0010B808(int,int),func_00120850(Obj*),func_00121028(Obj*);
extern int func_0011E528(int),func_0011E2B8(int,int),func_00110430(void),func_00194C40(void),func_00194738(int),func_0010BFA0(void),func_001E3598(int,void*);
extern void func_001D4040(void*,const char*),func_001E3D10(int,void*,int);
extern char D_00447748[],D_004479A0[];
void func_00120678(Obj *o){char buf[16];
func_0011E650(o->a,6,0);func_0011DFB8(o->a);
if(!func_0011E528(o->a)){
switch(func_0011E2B8(o->a,1)){
case -3:
func_00110238(func_00110430(),0x27);
if(func_00194738(func_00194C40()))func_0011E278(o->a,0x20);else func_0011E278(o->a,2);
break;
case 1: {
int x;
func_0010B808(func_0010BFA0(),o->b);
x=func_001E4280();func_001D4040(buf,D_00447748);func_001E3D10(x,buf,1);
func_00110238(func_00110430(),0x27);func_0011E278(o->a,0x37);break;}
case -5:
if(o->b>0){o->b--;func_00120850(o);func_00121028(o);}break;
case -4: { int x;
if(o->b<10){x=func_001E4280();func_001D4040(buf,D_004479A0);if(func_001E3598(x,buf)){o->b++;func_00120850(o);func_00121028(o);}}break;}
}
}
}
