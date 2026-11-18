typedef struct A {int flags,unk4,unk8,unkC;} A; typedef struct B {int pad; A *unk4; int unk8;} B;
s32 func_003D8C20(B *a,A *p){s32 n;p=a->unk4;if(!p)return -1;n=(p->flags&256)?p->unk8:p->unkC;n=p->unk4-n;return a->unk8-n;}
extern s32 func_003D7F50(void*,u32,s32);
s32 func_003DA700(s32 a,u32*p){u8 *q=(u8*)p[5];if((u32)q>=p[6])return func_003D7F50(p,a&255,a);p[5]=(u32)(q+1);*q=a;return a&255;}
extern s32 func_003DE2F0(void*);extern void func_003D6EB0(void*,s32); extern u8 D_00489000[];
void *func_003DA770(register void*a){func_003D6EB0(a,0);*(void**)((u8*)a+80)=D_00489000;return (func_003DE2F0(a),a);}
