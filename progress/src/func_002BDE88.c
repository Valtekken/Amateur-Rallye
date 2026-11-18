extern s32 func_003A0BD8(s32,s32);extern s32 func_00219DA8(s32,s32);
s32 func_003A5DC8(register s32 a,register s32 b){func_003A0BD8(a,b);func_00219DA8(a+12,b+12);return a;}
s32 func_002BDF58(s32*p,s32 k){s32 r=0,v=p[1];while(v){if(k==p[0]){r=v;break;}p+=2;v=p[1];}return r;}
void func_002BDEC8(void*a){*(volatile s32*)((char*)a+16)=0;}
s32 func_002BDE88(void*a){return *(volatile s32*)((char*)a+8);}
