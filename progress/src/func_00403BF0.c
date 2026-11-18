s32 func_003A0BD8(s32,s32); s32 func_00219DA8(s32,s32);
s32 func_003A5DC8(register s32 a,register s32 b){func_003A0BD8(a,b);func_00219DA8(a+12,b+12);return a;}
s32 func_00403BF0(u32*a,u32*b,u32 n){u32 c=n>>2,i=0;if(c)do{a[i]=b[i];i++;}while(i<c);return 0;}
extern s32 D_00441110,D_0049DC20; extern u8 D_0049DC28[]; extern s32 iSignalSema_2(s32,void*,s32,s32);
s32 func_00403F58(u32 a){s32 i,k;u8*p;if(a>=128||!D_00441110)return -1;i=(*(s32*)(D_0049DC28+4))&511;k=i*2;p=D_0049DC28+k;*(s32*)(D_0049DC28+4)=i+1;p[8]=1;p[9]=a;iSignalSema_2(D_0049DC20,p,k,1);return a;}
void func_00404098(u32*p){p[1]++;p[3]++;if(p[3]==(u32)p+(p[0]+16))p[3]=(u32)p+16;}
