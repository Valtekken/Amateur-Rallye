typedef struct A {int flags,unk4,unk8,unkC;} A; typedef struct B {int pad; A *unk4; int unk8;} B;
s32 func_003D8C20(B *a){ A *p=a->unk4; s32 n; if(!p)return -1; if(p->flags&256)n=p->unk8;else n=p->unkC; return a->unk8-(p->unk4-n);}
extern s32 func_003D7F50(void*,u32,s32);
s32 func_003DA700(s32 a,u32*p){if(p[5]>=p[6])return func_003D7F50(p,a&255,a); *(u8*)p[5]=a; p[5]++;return a&255;}
extern s32 func_003DE2F0(void*);
s32 func_003DA750(void*a){return func_003DE2F0(a);}
extern void func_003D6EB0(void*,s32); extern u8 D_00489000[];
void *func_003DA770(void*a){func_003D6EB0(a,0);*(void**)((u8*)a+80)=D_00489000;func_003DE2F0(a);return a;}
