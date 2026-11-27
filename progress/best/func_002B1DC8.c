extern volatile int D_004404DC,D_0042A938; extern char D_0047DE88[],D_0047DF68[],D_0047DF88[],D_0047DF98[];
extern void func_002B1DC0(void),func_003EED88(void); extern int func_003F8A30(int,u32),func_002B16D8(int); extern void func_003F9698(char*,...),func_002B1528(int*,int*,int*,int*,int*,int*),func_002B1690(char*),func_002B1718(int),func_002B18E8(void),func_002B1998(void);
void func_002B1DC8(u32 a){int v[6],n,sz; if(!func_003F8A30(D_004404DC,a)){sz=a>>18;func_003F9698(D_0047DE88); if(sz>=16)sz=15;
func_002B1528(&v[0],&v[1],&v[2],&v[3],&v[4],&v[5]); n=v[4]/0x100000; v[4]=n; if(n>=16)v[4]=15;
D_0042A938=(D_0042A938&~0x1ff)|(sz&15)|((v[4]&15)<<4)|0x100;
func_003F9698(D_0047DF68,a);func_002B1690(D_0047DF88);if(func_002B16D8(0x4d4d4d4d))func_003F9698(D_0047DF98);func_002B1718(0x4d4d4d4d);func_002B18E8();func_002B1998();while(D_004404DC){} func_002B1DC0();func_003EED88();if(!func_003F8A30(D_004404DC,a))while(D_004404DC){} }} 
