typedef struct {u8 bytes[80];} E; typedef struct{E*begin,*end;} V;
extern V*func_001FDBA8(s32,s32);extern s32 func_001FDE60(void);
void func_001BA568(u8*a){V*v=func_001FDBA8(func_001FDE60(),(s32)(a+8));s32 i,n;float*p,*q;if(!v){*(s32*)(a+136)=0;return;}i=func_001E3650(func_001E4280(),(s32)(a+60));n=i+1;if(i<0||(u32)i>=(u32)(v->end-v->begin))n=i;*(float*)(a+136)=(*(float**)(a+84))[n];p=(float*)((u8*)(v->begin+n)+64);q=(float*)(a+152);q[0]=p[0];q[1]=p[1];q[2]=p[2];}
