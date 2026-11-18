extern s32 func_003A0BD8(s32,s32);extern s32 func_00219DA8(s32,s32);
s32 func_003A5DC8(register s32 a,register s32 b){func_003A0BD8(a,b);func_00219DA8(12+a,12+b);return a;}
void func_003E3CA8(u8*d,s16*a,s16*b){s32 i;for(i=384;i--;){s32 x=(s16)(a[i]+b[i]);if(x>255)x=255;if(x<0)x=0;d[i]=x;}}
extern s32 func_003E50C8(s32,s32);s32 func_003E3F80(s32 a){return func_003E50C8(a,3);}
extern void func_003E1708(void*,const char*);extern char D_00489D50[];
s32 func_003E4660(u8*a,s32*b,s32*c,s32*d,s32*e){s32 r=1;*(s32*)(a+*(s32*)(a+0x810)*320+0x6CC)=1;*(s32*)(a+0x1B0)=1;if(*(s32*)(a+0x150)==2){b[5]=0;b[4]=0;b[1]=0;b[0]=0;}if(*(s32*)(a+0x174)==3){*c=2;}else{*c=1;d[0]=d[1]=(*(s32*)(a+0x174)==2);}if(*(s32*)(a+0x150)==1){func_003E1708(a,D_00489D50);r=0;}*e&=~1;return r;}
