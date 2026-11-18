s32 func_003D89B0(s32 a,char*b,s32 n){char*end=b+n;char*p=end;while(b<p){--p;if(*p==10)return end-p-1;}return a+n;}
extern void*D_0043A908;
s32 func_003D89F8(void){char*p=D_0043A908;s32 r=0;while(p){if(*(u32*)(p+16)<*(u32*)(p+20)){s32 t=(*(s32(**)(void*,s32))(*(char**)(p+80)+20))(p,-1);if(t==-1)r=-1;}p=*(char**)(p+52);}return r;}
void func_003D8A78(void){char*p=D_0043A908;while(p){if((*(s64*)p&0x208)==0x200)(*(s32(**)(void*,s32))(*(char**)(p+80)+20))(p,-1);p=*(char**)(p+52);}}
