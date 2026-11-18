extern char D_0047F748[];extern void func_003F9698(char*);
void func_002B7D78(void){func_003F9698(D_0047F748);{register char*p=D_0047F748;while(1){}func_003F9698(p);}}
extern u8 D_0047FA08[],D_00476518[],D_00428868[],D_0047F290[],D_0047F580[];
extern s32 func_002B8598(void);extern void D_002AD390(void*);extern void func_001DB118(void*);
extern void func_002B82E8(s32,s32);extern s32 func_002B83F0(void);extern void func_002BC1B8(void*);
void func_002B8768(u8*p){u8*q=*(u8**)(p+12);u8*v=*(u8**)(q+8);((void(*)(void*,s32,void*))*(void**)(v+68))(q+*(s16*)(v+64),*(s32*)(p+20),D_00428868);*(u32*)(p+20)=0xFFFFFFFFu;*(s32*)(p+24)=0;if(*(s32*)(p+36)){func_002B82E8(func_002B83F0(),*(s32*)(p+36));*(s32*)(p+36)=0;}{void*q=*(void**)(p+16);*(s32*)(p+44)=0;*(s32*)(p+48)=0;*(s32*)(p+52)=0;*(s32*)(p+40)=0;if(q)func_002BC1B8(q);}}
void func_002B84E0(u8*p,s32 b){*(void**)(p+8)=D_0047FA08;if(func_002B8598())func_002B8768(p);if(*(void**)(p+16))D_002AD390(*(void**)(p+16));*(void**)(p+8)=D_00476518;func_001DB118(p);if(b&1)D_002AD390(p);}
extern void*D_002AD408(s32);extern void*func_002B6DD0(void*,void*);extern void*func_002B62E0(void);extern void func_002B6290(void*,s32,void*);
void*func_002B6F28(u8*p){*(s32*)(p+4)=7;*(s32*)(p+12)=0;*(void**)(p+8)=D_0047F580;*(void**)p=D_0047F290;*(void**)(p+16)=func_002B6DD0(D_002AD408(24),p);func_002B6290(func_002B62E0(),*(s32*)(p+4),p);return p;}
