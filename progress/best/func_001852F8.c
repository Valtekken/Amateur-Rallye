typedef struct { s32 pad[4]; s32 f10,f14; s32 *f18,*f1C; s32 f20; s32 *f24,*f28,*f2C,*f30,*f34; s32 f38; } Obj;
extern s32 *D_002AD5A8(s32);
extern s32 func_001917E8(s32), func_001918C0(s32), func_00191AC0(s32), func_00193B60(void);
extern void func_001D4040(void*,const char*);
extern void func_001E33C8(s32,void*,s32);
extern f32 func_001E3610(s32,s32*);
extern s32 func_001E38C8(s32,s32*);
extern s32 func_001E3650(s32,void*);
extern void func_001E3E90(s32,void*,f32);
extern void func_003FA310(char*,const char*,s32);
extern s32 func_001E4280(void);
extern s32 D_00425D58,D_00425D5C,D_0048DDA0,D_0048DDA8;
extern char D_0044F0A0[],D_0046F758[],D_0046F7A0[],D_0046F7B0[],D_0046FAB8[],D_0046FAE0[],D_0046FD18[],D_004700D8[],D_004700F0[];

void func_001852F8(Obj *a) {
    char buf[0x40];
    s32 sp40,sp50,sp60;
    f32 f20,f21;
    s32 n,i,cnt,v,dir,*p,*q;
    a->f14 = func_001918C0(func_00193B60());
    dir = 1;
    if (func_001917E8(func_00193B60()) == 2) dir = -1;
    a->f20 = dir;
    a->f18 = D_002AD5A8(a->f14<<2);
    n = a->f14;
    a->f1C = D_002AD5A8(n<<2);
    p = D_002AD5A8(n<<2); cnt=n-1; q=p;
    if (n) { while(cnt!=-1){ *q=0; cnt--; q++; } }
    n = a->f14; a->f24 = p;
    p = D_002AD5A8(n<<2); cnt=n-1; q=p;
    if (n) { while(cnt!=-1){ *q=0; cnt--; q++; } }
    n = a->f14; a->f28 = p;
    p = D_002AD5A8(n<<2); cnt=n-1; q=p;
    if (n) { while(cnt!=-1){ *q=0; cnt--; q++; } }
    n = a->f14; a->f2C = p;
    p = D_002AD5A8(n<<2); cnt=n-1; q=p;
    if (n) { while(cnt!=-1){ *q=0; cnt--; q++; } }
    n = a->f14; a->f34 = p;
    p = D_002AD5A8(n<<2); cnt=n-1; q=p;
    if (n) { while(cnt!=-1){ *q=0; cnt--; q++; } }
    a->f30 = p;
    if (!D_00425D58) { func_001D4040(&D_0048DDA0, D_0046FAB8); D_00425D58=1; }
    a->f38 = D_0048DDA0;
    a->f10 = func_00191AC0(func_00193B60());
    v = func_001E4280(); func_001D4040(&sp40,D_0046F7B0);
    if (func_001E38C8(v,&sp40)) { v=func_001E4280(); func_001D4040(&sp50,D_0046F7B0); f21=func_001E3610(v,&sp50); }
    else f21=110.0f;
    for (i=0; i<a->f14; i++) {
        s32 off = i<<2;
        *(s32*)((char*)a->f1C+off)=0;
        func_003FA310(buf,D_0044F0A0,i); func_001D4040((char*)a->f28+off,buf);
        func_003FA310(buf,D_0046FD18,i); func_001D4040((char*)a->f24+off,buf);
        func_003FA310(buf,D_0046F7A0,i); func_001D4040((char*)a->f2C+off,buf);
        func_003FA310(buf,D_004700D8,i); func_001D4040((char*)a->f34+off,buf);
        func_003FA310(buf,D_0046FAE0,i); func_001D4040((char*)a->f30+off,buf);
        func_001E3E90(func_001E4280(),(char*)a->f30+off,0.0f);
        if (a->f20 == -1) {
            *(f32*)((char*)a->f18+off)=f21;
            func_001E3E90(func_001E4280(),(char*)a->f34+off,f21);
        } else {
            func_003FA310(buf,D_004700F0,i);
            v=func_001E4280(); func_001D4040(&sp40,buf);
            *(f32*)((char*)a->f18+off)=func_001E3610(v,&sp40);
            func_001E3E90(func_001E4280(),(char*)a->f34+off,0.0f);
        }
        if (!D_00425D5C) { func_001D4040(&D_0048DDA8,D_0046F758); D_00425D5C=1; }
        if (func_001E3650(func_001E4280(),&D_0048DDA8)==2) {
            v=func_001E4280(); func_001D4040(&sp40,D_0046F7B0);
            if (func_001E38C8(v,&sp40)) { v=func_001E4280(); func_001D4040(&sp60,D_0046F7B0); f20=func_001E3610(v,&sp60); }
            else f20=90.0f;
            func_001E3E90(func_001E4280(),(char*)a->f2C+off,f20);
        } else func_001E3E90(func_001E4280(),(char*)a->f2C+off,0.0f);
        func_001E33C8(func_001E4280(),(char*)a->f2C+off,0);
    }
}
