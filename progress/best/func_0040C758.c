extern void func_002CA1D0(void*,s8,s16);extern int func_003F9698(const char*,...);extern char D_00482528[];
void func_002CA418(char*p,s8 c){s16 found=-1;int i=6;for(;i<24;i++){if(!p[132+i]){found=i;func_002CA1D0(p,c,found);break;}}if(found<0)func_003F9698(D_00482528,c,c);}

extern "C" {extern char D_00488D80[],D_0047D9A8[];char*func_003CD828(void*,char*);}
inline void*operator new(unsigned int,void*p){return p;}
struct Base{void*v;Base(){}~Base(){v=D_0047D9A8;}};
struct Obj:Base{char*s;__attribute__((always_inline)) Obj(char**b){v=D_00488D80;char*q=*b;char*p=q-16;char**dst=&s;if(*(s32*)(p+12))q=func_003CD828(p,q);else ++*(s32*)(p+8);*dst=q;}};
extern "C" void*func_003D1F08(void*a,char**b){return new(a)Obj(b);}
extern "C" {extern char D_00489000[];s32 func_003D6EB0(void*,s32);void func_003D6EE8(void*,s32);void func_003DE2F0(void*);void func_003DE5D0(void*,s32);void func_003DAB38(void*,s32,s32);s32 func_003DE6B8(void*,s32,s32);}
struct StreamBase{char pad[84];StreamBase(){func_003D6EB0(this,0);}~StreamBase(){func_003D6EE8(this,0);}};
struct Stream:StreamBase{__attribute__((always_inline)) Stream(s32 b){*(void**)(pad+80)=D_00489000;func_003DE2F0(this);func_003DE5D0(this,b);}__attribute__((always_inline)) Stream(s32 b,s32 c,s32 d){*(void**)(pad+80)=D_00489000;func_003DE2F0(this);func_003DE5D0(this,b);func_003DAB38(this,c,d);}};
extern "C" void*func_003DA7E0(void*a,s32 b){return new(a)Stream(b);}
extern "C" void*func_003DA868(void*a,s32 b,s32 c,s32 d){return new(a)Stream(b,c,d);}
extern "C" s32 func_003DA918(char*a,s32 b){*(void**)(a+80)=D_00489000;if(*(s32*)(a+56)>=0){s32 p=*(s32*)(a+16);func_003DE6B8(a,p,*(s32*)(a+20)-p);if(!(*(s32*)a&64))(*(void(**)(void*))(*(char**)(a+80)+132))(a);}func_003D6EE8(a,b);}

s64 func_002AC500(s64);
s64 func_002ABF88(s64, s64);
s64 func_002ABEC8(s64, s64);

s64 func_0040C758(s64 arg0) {
    s64 s0 = arg0;
    s64 s1;
    s64 c = 0x81E0ULL << 47;

    s1 = func_002ABF88(func_002AC500((s64)((s32)(s0 >> 32))), c);
    s1 = func_002ABF88(s1, c);
    {
        s64 lo_arg = (s64)((s32)s0);
        s64 lo = func_002AC500(lo_arg);
        if (lo_arg >= 0) {
            return func_002ABEC8(s1, lo);
        } else {
            s64 neg = func_002ABEC8(lo, 0x83E0ULL << 47);
            return func_002ABEC8(s1, neg);
        }
    }
}

extern char D_004823E0[];
extern char D_00482408[];
void func_002CA1D0(s32 arg0, s8 arg1, s16 arg2) {
    s32 temp_2;
    s8 temp_16;
    s8 temp_4;

    temp_4 = arg1 & 0x7F;
    temp_2 = arg0 + 0x84 + arg2;
    temp_16 = *(s8 *)temp_2;
    *(s8 *)temp_2 = temp_4;
    func_003F9698((const char*)D_004823E0, temp_4, temp_4, arg2);
    if ((temp_16 != 0) && (arg1 != temp_16)) {
        func_003F9698((const char*)D_00482408, temp_16, temp_16, arg2);
        func_002CA418((char*)arg0, temp_16);
    }
}
