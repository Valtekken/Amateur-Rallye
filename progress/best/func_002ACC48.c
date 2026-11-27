typedef struct { u32 type, sign; s32 exp; u32 mant; } F;
extern void func_002AC8C0(float *, F *);
extern float func_002AC7B0(F *);
extern F D_00494C98;
float func_002ACC48(float x, float y) {
 F a,b,c,*p; u64 prod; s32 hi,lo; s32 e;
 func_002AC8C0(&x,&a); func_002AC8C0(&y,&b); p=&c;
 if(a.type<2) goto first;
 if(b.type<2) goto second;
 if((a.type^4)==0) { if((b.type^2)==0) goto nan; goto first; }
 if((b.type^4)==0) { if((a.type^2)!=0) goto second; nan: p=&D_00494C98; goto done; }
 if((a.type^2)==0) { first: p=&a; a.sign=a.sign!=b.sign; goto done; }
 if((b.type^2)==0) { second: p=&b; b.sign=a.sign!=b.sign; goto done; }
 prod=(u64)a.mant*b.mant;
 c.sign=a.sign!=b.sign; e=a.exp+b.exp+2; c.exp=e;
 hi=(s32)(prod>>32); lo=(s32)prod;
 if(hi<0) { do { e++; if(hi&1) lo=((u32)lo>>1)|0x80000000; hi=(u32)hi>>1; } while(hi<0); c.exp=e; }
 if((u32)hi<=0x3fffffff) { e=c.exp; do { hi*=2; e--; if(lo&0x80000000) hi|=1; lo*=2; } while((u32)hi<=0x3fffffff); c.exp=e; }
 if((hi&0x7f)!=0x40) c.mant=hi; else { if(hi&0x80) hi+=0x40; else if(lo) hi+=0x40; c.mant=hi; }
 p->type=3; goto done;
done: return func_002AC7B0(p);
}
