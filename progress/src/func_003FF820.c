extern s64 D_004408E8,D_004408F0;void func_003F9590(s32);void func_003F9598(s32);
s32 func_003FF820(s32 a,s32 b,s64 c){func_003F9590(a);switch(b){case -1:D_004408E8=c;func_003F9598(a);return 1;case -2:D_004408F0=c;func_003F9598(a);return 1;case -3:func_003F9598(a);return 1;case -4:func_003F9598(a);return (u64)c<1;default:func_003F9598(a);return 0;}}
s32 func_003FF9D8(s32 a,s32*out,u8*s,s32 n){s32 tmp;s32*p=out?out:&tmp;if(!s)return 0;if(!n)return -1;*p=*s;return *s!=0;}
typedef struct PN{struct PN*next;s32 k,n,c,len;}PN;typedef struct{u8 pad[76];PN**free;}PO;void*func_004029F8(void*,s32,s32);
PN*func_003FFA18(PO*a,s32 k){PN**list=a->free;PN*p;s32 n;if(!list){list=func_004029F8(a,4,16);a->free=list;if(!list)return 0;}p=list[k];if(p)list[k]=p->next;else{n=1<<k;p=func_004029F8(a,1,n*4+20);if(!p)return 0;p->k=k;p->n=n;}p->len=0;p->c=0;return p;}
