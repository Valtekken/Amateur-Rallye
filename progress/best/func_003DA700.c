typedef struct A {int flags,unk4,unk8,unkC;} A; typedef struct B {int pad; A *unk4; int unk8;} B;
s32 func_003D8C20(B *a){register A *p=a->unk4;s32 n;if(!p)return -1;n=(p->flags&256)?p->unk8:p->unkC; n=p->unk4-n;return *(volatile s32*)&a->unk8-n;}
extern s32 func_003D7F50(void*,u32,s32);
s32 func_003DA700(s32 a,u32*p){u8 *q=(u8*)p[5];if((u32)q>=p[6])return func_003D7F50(p,(u8)a,a);*q=a;p[5]=(u32)(q+1);return (u8)a;}
extern s32 func_003DE2F0(void*);extern void func_003D6EB0(void*,s32); extern u8 D_00489000[];
void *func_003DA770(void*a){void*v=D_00489000;func_003D6EB0(a,0);*(void**)((u8*)a+80)=v;func_003DE2F0(a);return a;}
