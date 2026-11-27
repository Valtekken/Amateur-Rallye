extern unsigned D_0042D5F4;
extern char D_00484C40[],D_00484C68[],D_00484CA0[],D_00484CC8[],D_00484CF0[];
extern void func_003F9698(const char *,...);
extern void func_0030C350(int),func_0030C508(unsigned),func_0030C570(int),func_0030C3C0(void);
void func_0030DE80(unsigned a,unsigned b,unsigned c,unsigned d,unsigned e,unsigned f,int g) {
 if(a>=D_0042D5F4) {func_003F9698(D_00484CA0);func_003F9698(D_00484C40,a,D_0042D5F4-1);func_003F9698(D_00484C68);return;}
 if(b>=48) {func_003F9698(D_00484CA0);func_003F9698(D_00484CC8,b);return;}
 if(c>=48) {func_003F9698(D_00484CA0);func_003F9698(D_00484CF0,c);return;}
 func_0030C350(44);func_0030C508((a<<8)|b);func_0030C508(c);func_0030C508(d);func_0030C508(e);func_0030C508(f);func_0030C570(g);func_0030C3C0();
}
