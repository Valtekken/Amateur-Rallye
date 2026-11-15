s32 func_003A0BD8(s32,s32);s32 func_00219DA8(s32,s32);s32 func_003A5DC8(register s32 a,register s32 b){func_003A0BD8(a,b);func_00219DA8(a+12,b+12);return a;}
s32*func_003B3788(s32);s32*func_003A8F68(s32*);s32*func_003A8FA0(s32*);s32*func_003A8FD8(s32*);
void func_003B2378(register s32*a){register s32*r;register s32*s;*func_003B3788(*a)=0;*func_003A8F68(a)=0;r=func_003A8FA0(a);*r=*a;s=func_003A8FD8(a);*s=*a;}
void func_003B3A80(u32);void func_003B2C70(register u32 a,register u32 b,register s32 c){while(a<b){func_003B3A80(a);a+=28;}}
typedef struct{s32 w[7];}E28;void func_003AA7B8(void*,void*,s32);void D_002AD390(void*);
void func_003B2CE8(register E28**a,register s32 b){func_003AA7B8(a,a[0],a[2]-a[0]);if(b&1){D_002AD390(a);}else{}}
