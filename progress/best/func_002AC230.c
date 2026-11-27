typedef struct {u32 type; s32 sign, exp, pad; u64 mant;} F;
extern void func_002ABBE8(s64*, F*); extern s64 func_002ABAB8(F*); extern F D_00494C80;
s64 func_002AC230(s64 a,s64 b) {
 F x,y,*p; u64 n,d,bit,q; u64 less;
 func_002ABBE8(&a,&x); func_002ABBE8(&b,&y);
 if(x.type<2) p=&x;
 else if(y.type<2) p=&y;
 else {
 x.sign ^= y.sign;
 if ((x.type ^ 4) == 0 || (x.type ^ 2) == 0) {p=&x; if(x.type==y.type) p=&D_00494C80;}
 else if ((y.type ^ 4) == 0) {x.mant=0; x.exp=0; p=&x;}
 else if ((y.type ^ 2) == 0) {x.type=4; p=&x;}
 else {
 n=x.mant; d=y.mant; x.exp-=y.exp; less=(n<d) ? 1 : 0;
 if(less){x.exp--; n*=2; less=n<d;}
 bit=0x2000000000000000ULL; q=0;
 while(bit) {if(n>=d){q|=bit; n-=d;} bit>>=1; n*=2;}
 if((q&255)==128) {if(q&256) q+=128; else if(n) q+=128;}
 x.mant=q; p=&x;
 }}
 return func_002ABAB8(p);
}
