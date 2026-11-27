extern int D_0040E880,D_0040E884;
extern char D_0044E948[],D_0044E9D8[],D_0044EB28[],D_0044EB58[],D_0048DD48[],D_0048DD50[];
extern void func_001D4040(void *,const char *),func_003F9698(const char *,...);
extern void *func_0021F4B0(void),*func_0021E9C0(void *,void *),*func_001D4010(void *);
void func_0015F268(void) {
 char *cars[2],**p; int i;
 if(!D_0040E880){func_001D4040(D_0048DD48,D_0044E948);D_0040E880=1;}
 if(!D_0040E884){func_001D4040(D_0048DD50,D_0044E9D8);D_0040E884=1;}
 i=0; cars[0]=func_0021E9C0(func_0021F4B0(),D_0048DD48);cars[1]=func_0021E9C0(func_0021F4B0(),D_0048DD50);
 p=cars;do {char *c=*p++;int n=i; if(c)func_003F9698(D_0044EB28,func_001D4010(c+0x5c));else func_003F9698(D_0044EB58,n);} while(++i<2);
}
