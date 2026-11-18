extern void func_002B2028(s32);extern s32 func_002B61D0(s32,char*,s32),func_002B62E0(void);
extern void func_002B8438(void*),func_002B84E0(void*,s32),func_002B8768(void*),func_002B8C08(void*,s32);
extern s32 func_002B85A8(void*,s32,s32,s32,s32),func_002B8938(void*,s32,s32),func_002B8A40(void*),func_003F85D8(s32,s32);
extern void func_003F9698(char*,...);
extern s32 D_0044E7F0;extern char D_00481AD8[],D_00481AE0[],D_00481AE8[],D_00481B38[],D_00481B70[],D_00481B90[];
s32 func_002C3770(s32 a,s32*b,s32*c){s32 sp[16];s32 p=0,n=0,ok,r;func_002B8438(sp);ok=0;if(D_0044E7F0)r=func_002B61D0(func_002B62E0(),D_00481AD8,0);else r=func_002B61D0(func_002B62E0(),D_00481AE0,0);if(r)func_002B8C08(sp,r);else func_003F9698(D_00481AE8);
if(!func_002B85A8(sp,a,0,1,0))func_003F9698(D_00481B38,a);else{n=func_002B8A40(sp);p=func_003F85D8(64,n);if(p){if(!func_002B8938(sp,p,n)){n=0;func_003F9698(D_00481B70);func_002B2028(p);p=0;}else ok=1;}else func_003F9698(D_00481B90,n);func_002B8768(sp);}if(ok){*b=p;*c=n;}else{*b=0;*c=0;}func_002B84E0(sp,2);return ok;}
