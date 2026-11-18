s32 func_003D7318(s32*a){s32 f=a[0];s32 x=(f&256)?a[9]:a[3];s32 y=(f&256)?a[11]:a[2];if(x!=y){if(f&256)return a[9];return a[1];}return a[5];}
s32 func_003D7590(void*a,s32 b,s32 c){u8*v=*(void**)((u8*)a+80);return (*(s32(**)(void*,s32,s32))(v+52))((u8*)a+*(s16*)(v+48),b,c);}
extern s32 func_003D6E90(void*);s32 func_003D75D8(void*a){s32 n=*(s32*)((u8*)a+28);if(!n)return func_003D6E90(a);return n;}
s32 func_003D7600(void*a){u8*v;if(*(s32*)((u8*)a+28))return 0;if((*(s32*)a>>1)&1)return 0;v=*(void**)((u8*)a+80);return (*(s32(**)(void*,void*))(v+100))((u8*)a+*(s16*)(v+96),a);}
