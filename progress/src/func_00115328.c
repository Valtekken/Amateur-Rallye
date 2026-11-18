extern void *func_0021F4B0(void);
extern void *func_0021E9C0(void*,void*);
extern void func_0029FA58(void*,s32,s32);
extern void func_0029FA68(void*,s32,void*);
extern void func_0011C760(void*,s32,s32);
void func_00115328(register u8 *a,register s32 b){
f32 color[4];void *p,*q;s32 t;
color[0]=1.0f;color[1]=1.0f;color[2]=1.0f;color[3]=1.0f;
p=func_0021E9C0(func_0021F4B0(),a+0x68);
if(p){q=*(void**)((u8*)p+4);if(q){t=*(s32*)((u8*)q+4);
if(t==*(s32*)(a+0x54)){func_0029FA58(q,*(s32*)(a+0x78),b);func_0029FA68(q,*(s32*)(a+0x78),color);}
else if(t==*(s32*)(a+0x58))func_0011C760(q,*(s32*)(a+0x78),b);}}}
