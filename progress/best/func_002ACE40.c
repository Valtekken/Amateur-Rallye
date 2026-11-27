typedef struct {u32 type,sign; s32 exp; u32 mant;} F;
extern void func_002AC8C0(float *,F *);
extern float func_002AC7B0(F *);
extern F D_00494C98;
float func_002ACE40(float a,float b){
 F x,y,*p; F *xp;u32 n,d,mask,q; int less;
 func_002AC8C0(&a,&x);func_002AC8C0(&b,&y);
 xp=&x; if(x.type<2) p=xp;
 else if(y.type<2) p=&y;
 else {x.sign^=y.sign;
 if((x.type^4)==0 || (x.type^2)==0) {p=&x;if(x.type==y.type)p=&D_00494C98;}
 else if((y.type^4)==0){x.mant=0;x.exp=0;p=&x;}
 else if((y.type^2)==0){x.type=4;p=&x;}
 else {d=y.mant;n=x.mant;x.exp-=y.exp;less=n<d;if(less){x.exp--;n*=2;less=n<d;}
 mask=0x40000000;q=0;
 goto test; loop: less=n<d; test: if(!less){q|=mask;n-=d;}mask>>=1;n*=2;if(mask)goto loop;
 if((q&0x7f)==0x40){if(q&0x80)q+=0x40;else if(n)q+=0x40;}
 xp->mant=q;p=xp;}
 }
 return func_002AC7B0(p);
}
