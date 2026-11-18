extern void func_001E2460(void*,s32);
extern void func_001E2470(void*,void*,void*);
extern s32 func_001E25B0(void*,void*,void*);
extern s32 func_001E28F8(void*,void*,void*);
extern void func_0029ACF8(void*,s32);
extern char D_0047BDF0[],D_0047BDF8[],D_0047BE10[],D_0047BE28[],D_0047BE38[];
void func_0029AB98(char *p,s32 b,s32 c){
struct {s32 z;char p[12];s32 w;char q[12];s32 a,x,y;} l;
func_001E2460(&l.a,c);
l.z=0;l.w=0;func_001E28F8(&l.a,D_0047BDF0,p+16);
func_001E2470(&l.a,D_0047BDF8,p+20);
func_001E25B0(&l.a,D_0047BE10,p+24);
func_001E25B0(&l.a,D_0047BE28,&l.x);
*(s32*)(p+28)=l.x;
func_001E25B0(&l.a,D_0047BE38,&l.y);
*(s32*)(p+32)=l.y;
func_0029ACF8(p,b);
}
