extern s32 func_003F93CC(s32,s32,s32);
#define F(p,o) (*(s32*)((char*)(p)+(o)))
void *func_00208760(void *arg0) {
 s32 a,b,c,d; void *q;
 q=(char*)arg0+12; a=F(arg0,4); b=F(arg0,0);
 func_003F93CC(b,a,0);
 c=F(arg0,12); F(arg0,4)=F(arg0,4)-(a-b);
 d=F(q,4); func_003F93CC(c,d,0);
 F(q,4)=F(q,4)-(d-c);
 return arg0;
}
