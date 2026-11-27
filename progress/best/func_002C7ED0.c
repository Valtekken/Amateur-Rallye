extern int func_002AD350(float);
extern float func_002C82D0(void*,int);
extern void func_003F9698(const char*,...);
extern char D_00482058[],D_00482070[],D_00482078[],D_004820A0[],D_004820A8[],D_004820B8[],D_004820C8[];
void func_002C7ED0(char *a) {
 int i; char *vt; float f;
 func_003F9698(D_00482058,*(short*)(a+20),*(short*)(a+22));
 func_003F9698(D_00482070,*(short*)(a+40));
 func_003F9698(D_00482078,*(unsigned short*)(a+48),*(unsigned short*)(a+50));
 if(*(unsigned short*)(a+26)) {
 i=0; func_003F9698(D_004820A0);
 if(*(unsigned short*)(a+26)) do {
 vt=*(char**)a; f=(*(float (**)(void*,int))(vt+60))(a+*(short*)(vt+56),i);
 { int value=func_002AD350(f); int index=i++; func_003F9698(D_004820A8,index,value); }
 } while(i<*(unsigned short*)(a+26));
 }
 if(*(unsigned short*)(a+28)) {
 i=0; func_003F9698(D_004820B8);
 if(*(unsigned short*)(a+28)) do {
 { int value=func_002AD350(func_002C82D0(a,i)); int index=i++; func_003F9698(D_004820A8,index,value); }
 } while(i<*(unsigned short*)(a+28));
 }
 func_003F9698(D_004820C8);
}
