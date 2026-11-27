typedef struct { u32 kind; s32 sign, exp, pad; u64 mant; } Num;
extern u64 func_002ABAB8(Num *);
extern void func_002ABBE8(u64 *, Num *);
extern u64 func_002AE6B8(u64,u64);
extern Num D_00494C80;
u64 func_002ABF88(u64 a, u64 b) {
 Num x,y,z,*p,*out;
 u64 al,ah,bl,bh,t0,t1,t2,t3,mid,lo,hi;
 int exp;
 func_002ABBE8(&a,&x); func_002ABBE8(&b,&y); out=&z;
 if(x.kind<2) { x.sign=x.sign!=y.sign; p=&x; }
 else if(y.kind<2) { y.sign=x.sign!=y.sign; p=&y; }
 else if((x.kind^4)==0) { if((y.kind^2)==0) p=&D_00494C80; else { x.sign=x.sign!=y.sign; p=&x; } }
 else if((y.kind^4)==0) { if((x.kind^2)==0) p=&D_00494C80; else { y.sign=x.sign!=y.sign; p=&y; } }
 else if((x.kind^2)==0) { x.sign=x.sign!=y.sign; p=&x; }
 else if((y.kind^2)==0) { y.sign=x.sign!=y.sign; p=&y; }
 else {
 al=x.mant & 0xffffffffULL; ah=x.mant>>32; bl=y.mant & 0xffffffffULL; bh=y.mant>>32;
 t0=func_002AE6B8(bl,al); t1=func_002AE6B8(bh,al); t2=func_002AE6B8(bl,ah); t3=func_002AE6B8(bh,ah);
 mid=t1+t2; lo=t0+(mid<<32); hi=((u64)(mid<t1)<<32); hi += (u64)(lo<t0); hi += ((mid>>32)&0xffffffffULL)+t3;
 exp=x.exp+y.exp+4; z.sign=x.sign!=y.sign; z.exp=exp;
 if(hi > (~0ULL>>3)) { do { exp++; if(hi&1) lo=(lo>>1)|0x8000000000000000ULL; hi>>=1; } while(hi>(~0ULL>>3)); z.exp=exp; }
 if(hi <= (~0ULL>>4)) { do { hi<<=1; if(lo & 0x8000000000000000ULL) hi|=1; exp--; lo<<=1; } while(hi <= (~0ULL>>4)); z.exp=exp; }
 if((hi&255)==128) { if(hi&256) hi+=128; else if(lo) hi+=128; }
 z.mant=hi; out->kind=3; p=out;
 }
 return func_002ABAB8(p);
}
