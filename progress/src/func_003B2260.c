s32 func_003A0BD8(s32,s32);s32 func_00219DA8(s32,s32);s32 func_003A5DC8(register s32 a,register s32 b){func_003A0BD8(a,b);func_00219DA8(a+12,b+12);return a;}

void func_003B3728(u32);void func_003B2260(register u32 a,register u32 b,register s32 c){while(a<b){func_003B3728(a);a+=48;}}
void func_003B3750(s32*,s32);s32 func_003A8EC8(s32*);
s32*func_003B2308(register s32*a,register s32 b){func_003B3750(a,b);*a=func_003A8EC8(a);return a;}
s32*func_003B3788(s32);s32*func_003A8F68(s32*);s32*func_003A8FA0(s32*);s32*func_003A8FD8(s32*);
void func_003B2378(register s32*a){register s32*p=func_003B3788(*a);*p=0;register s32*q=func_003A8F68(a);*q=0;register s32*r=func_003A8FA0(a);*r=*a;register s32*s=func_003A8FD8(a);*s=*a;}
