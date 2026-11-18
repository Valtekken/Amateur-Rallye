typedef struct Buf{u32 pad;u8*cur;u8*end;}Buf;extern s32 func_003D8118(Buf*);
s32 func_003D7428(Buf*a){s32 r;if(a->cur>=a->end){if(func_003D8118(a)==-1){return -1;}}++a->cur;if(a->cur<a->end||func_003D8118(a)!=-1){r=*a->cur;goto done;}r=-1;done:return r;}
void func_003D7E18(s32*a){s32 x=a[11];*(volatile s32*)(a+11)=a[2];s32 y=a[3];a[1]=x;a[0]|=256;a[3]=a[9];a[9]=y;a[2]=x;}
s32 func_003D7E50(s32*a){u32 p=a[5];s32 f;if((u32)a[4]<p){if((*(s32(**)(void*,s32))(*(char**)(a+20)+20))(a,-1)==-1)return -1;p=a[5];}f=a[0];if(f&256)a[3]=a[10];else{a[3]=a[7];if((u32)a[2]<p)a[2]=p;}a[1]=p;a[6]=p;a[0]=f&~0x800;a[5]=p;a[4]=p;return 0;}
