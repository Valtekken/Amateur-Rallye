typedef struct Entry{s32 w[7];}Entry;extern Entry D_0049B9D0[][4];extern u8*func_003CA3B0(s32,s32);
u32 func_003CA4E0(s32 a,s32 b){u8*p;if(!D_0049B9D0[a][b].w[4])return 99;p=func_003CA3B0(a,b);if(p[112]!=6)return p[112];if(p[113]==2)return 5;return p[112];}
static inline int eqchar(const signed char*a,const signed char*b){return *a==*b;}
static inline u32 find(s8*p,s8*c,u32 n){u32 j;for(j=0;j<n;j++)if(eqchar(p+j,c))return j;return ~0u;}
u32 func_003CE620(u8**a,s8*b,u32 i,u32 n){u8*p=*a;for(;i<*(u32*)(p-16);i++){u8 c=p[i];if(find(b,(s8*)&c,n)!=~0u)return i;}return ~0u;}
u32 func_003CE760(u8**a,s8*b,u32 i,u32 n){u8*p=*a;for(;i<*(u32*)(p-16);i++){u8 c=p[i];if(find(b,(s8*)&c,n)==~0u)return i;}return ~0u;}
u32 func_003CE6B8(u8**a,s8*b,u32 i,u32 n){u8*p=*a;u32 len=*(u32*)(p-16);if(len){u32 k=len-1;if(i<k)k=i;for(k++;k--;){u8 c=p[k];if(find(b,(s8*)&c,n)!=~0u)return k;}}return ~0u;}
