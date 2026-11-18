extern void func_001E2460(void*,int);
extern void func_001E2470(void*,const char*,void*);
extern void func_001E25B0(void*,const char*,void*);
extern void func_00297E58(int,int,int,int,int);
extern char D_00444D00[],D_00445D48[],D_00445D50[],D_00445D60[],D_00445D70[],D_004465C0[];
#define W(p,o) (*(int*)((char*)(p)+(o)))
void func_0011AFB0(void*p,int unused,int a){
    int k,up,right,down,left;
    func_001E2460(&k,a);
    up=0;right=0;down=0;left=0;
    func_001E25B0(&k,D_00444D00,(char*)p+12);
    func_001E25B0(&k,D_00445D48,&up);
    func_001E25B0(&k,D_00445D50,&right);
    func_001E25B0(&k,D_00445D60,&down);
    func_001E25B0(&k,D_00445D70,&left);
    func_00297E58(W(p,16),up,right,down,left);
    func_001E2470(&k,D_004465C0,(char*)p+20);
}
