extern volatile unsigned short func_001E2460(void*,void*);
extern s32 func_001E25B0(void*,const char*,void*);
extern void func_001E28F8(void*,const char*,void*);
extern void func_001E2470(void*,const char*,void*);
extern void *func_001E3700(s32,void*);
extern void *func_001D4010(void*);
extern void func_0011C718(void*,void*);
extern void func_0011C6A8(void*,s32,s32);
extern void func_0011C648(void*,s32);
extern void func_0011C070(void*,void*);
extern void func_0011BDA8(void*,void*,s32);
extern char D_00446738[],D_00447208[],D_00447218[],D_00447220[],D_00447230[],D_00447240[],D_00447250[],D_00447260[],D_00447270[],D_00447280[],D_00447290[],D_00447298[],D_004472B0[],D_004472B8[];

void func_0011B9A0(char *a, char *b, void *c) {
    u32 v0[4];
    u32 t;
    s32 v14,v18,v1C,v20;
    void *p;
    func_001E2460(&t,c);
    p = a+0x44;
    v1C=0; v20=0; v14=0; v18=0; v0[0]=0;
    func_001E25B0(&t,D_00447208,a+0xC);
    func_001E28F8(&t,D_00447218,p);
    func_001E25B0(&t,D_00447220,&v14);
    func_001E25B0(&t,D_00447230,&v18);
    func_001E28F8(&t,D_00447240,v0);
    func_001E25B0(&t,D_00447250,a+0x10);
    func_001E25B0(&t,D_00447260,a+0x14);
    func_001E25B0(&t,D_00447270,&v1C);
    *(s32*)(a+0x20)=v1C;
    func_001E25B0(&t,D_00447280,&v20);
    *(s32*)(a+0x24)=v20;
    func_001E25B0(&t,D_00447290,a+0x48);
    func_001E25B0(&t,D_00446738,a+0x4C);
    func_001E25B0(&t,D_00447298,&v1C);
    *(s32*)(a+0x28)=v1C;
    func_001E2470(&t,D_004472B0,a+0x50);
    func_001E2470(&t,D_004472B8,a+0x60);
    if (*(void**)(b+0x4C)) {
        *(s32*)(a+0x2C) = *(s32*)((char*)(*(void**)((char*)*(void**)(b+0x4C)+8)) - 0x28);
    }
    if (*(void**)(a+0x44)) {
        func_0011C718(a, func_001D4010(func_001E3700(func_001E4280(), p)));
    } else if (v14) {
        if (v18) func_0011C6A8(a,v14,v18);
        else func_0011C648(a,v14);
    } else {
        func_0011C718(a, func_001D4010(v0));
    }
    func_0011C070(a,b);
    func_0011BDA8(a,b,0);
}
