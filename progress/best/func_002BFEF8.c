extern s32 func_003A0BD8(s32,s32); extern s32 func_00219DA8(s32,s32);
s32 func_003A5DC8(register s32 a,register s32 b){func_003A0BD8(a,b);func_00219DA8(a+12,b+12);return a;}
extern void func_002BEE48(s32,s32);
s32 func_002C17A8(s32*p){p[5]++;func_002BEE48(p[4],1);return 0;}
typedef struct {s32 count,type,irq,pad;} Entry;
extern Entry D_00428DE0[];
extern void func_002C16D8(void*,s32,s32);
extern void RemoveIntcHandler_2(s32,s32);extern void RemoveDmacHandler_2(s32,s32);
void func_002C1600(s32*p){Entry*e;p[2]=0;e=&D_00428DE0[p[1]];if(--e->count>=0){func_002C16D8(p,p[1],0);D_00428DE0[p[1]].count=0;}e=&D_00428DE0[p[1]];if(e->type)RemoveIntcHandler_2(e->irq,p[0]);else RemoveDmacHandler_2(D_00428DE0[p[1]].irq,p[0]);}
typedef struct __attribute__((packed)){u8 x[2];u16 count;u32 base;} Header;
void func_002BFEF8(s32*p,s32 off){Header*h=(Header*)p[5];u32*n=(u32*)h->base;u32*end=n+(u16)((h->x[0],((u8*)h)[3]<<8)|((u8*)h)[2])*4;while(n<end){if(n[0])n[0]+=off;if(n[1])n[1]+=off;if(n[2])n[2]+=off;if(n[3])n[3]+=off;n+=4;}}
