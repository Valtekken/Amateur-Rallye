extern s32 func_003A0BD8(s32,s32),func_00219DA8(s32,s32);
s32 func_003A5DC8(register s32 a,register s32 b){func_003A0BD8(a,b);func_00219DA8(a+12,b+12);return a;}

extern void func_003A32E8(s32,s32);
void func_003AF228(register s32 a,register s32 n){if(n!=0)func_003A32E8(a,n*48);}
extern s32 func_003A3CC8(s32),func_00151A28(s32,s32,s32,s32,s32);
s32 func_003B0788(register s32 a,register s32 b,register s32 c){return func_00151A28(a,func_003A3CC8(a),0,b,c);}
extern void func_003A3210(void*);
void *func_003B0EE0(register u8*a){func_003A3210(a);*(s32*)(a+4)=0;return a;}
