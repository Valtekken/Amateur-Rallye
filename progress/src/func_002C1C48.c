typedef struct {s32 a,b;} Item;extern Item* func_003AD3E0(s32);extern Item* func_003AD3A8(s32);
s32 func_003A6178(register s32 a){register Item* t=func_003AD3E0(a);return t-func_003AD3A8(a);}
void func_002C1C58(s32*p){s32 a=p[3],b=p[4],c=a+16;p[11]=a;p[13]=c;p[15]=c;p[14]=a;p[12]=b;p[16]=0;}
s32 func_002C1C48(void*p){return *(volatile s32*)((char*)p+20);}
extern s32 D_00428F00,D_00428F04;extern s32 func_002BEDA0(s32);extern void func_002BEEB8(s32);
s32 func_002C1AA0(void){if(D_00428F00){while(func_002BEDA0(D_00428F00))func_002BEEB8(D_00428F00);func_002BEEB8(D_00428F00);}return D_00428F04;}
