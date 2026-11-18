extern s32 D_002AD408(s32); extern void *func_0024C090(s32,s32,s32);
typedef struct VT56 { char pad[144]; s16 delta; u16 pad2; s32 (*read)(void*,s32*); } VT56; typedef struct OB56 {s32 a,b; VT56 *vt;} OB56;
void func_003B56F0(void *unused, s32 **a, OB56 *b) { s32 x,y,p,q; void *t,*r;
b->vt->read((char*)b+b->vt->delta,&x);
p=*(s32*)((char*)*a+(x<<2));
b->vt->read((char*)b+b->vt->delta,&y);
q=*(s32*)((char*)*a+(y<<2)); r=func_0024C090(D_002AD408(72),p,q); *(s32*)((char*)r+68)=1;
}
extern char D_0049B9D0[],D_0049B980[]; extern s32 D_0049BBC0[];
extern s32 func_00405E90(void*,s32,s32,void*,s32,void*,s32,s32,s32);
extern void func_004037D8(void*,void*);
s32 func_003CA2F8(s32 a,s32 b){s32 *p=(s32*)(D_0049B9D0+b*28+a*112+16); if(*p){D_0049BBC0[0]=14;D_0049BBC0[1]=a;D_0049BBC0[2]=b;D_0049BBC0[4]=1;if(func_00405E90(D_0049B980,1,0,D_0049BBC0,128,D_0049BBC0,128,0,0)>=0){*p=0;return D_0049BBC0[3];}return 0;}return 0;}
void *func_003CA3B0(s32 a,s32 b){char *p=*(char**)(D_0049B9D0+b*28+a*112);func_004037D8(p,p+256);return p+((*(s32*)(p+88)<*(s32*)(p+216))<<7);}
s32 func_003CA410(s32 a,s32 b){if(*(s32*)(D_0049B9D0+b*28+a*112+16))return *(s32*)((char*)func_003CA3B0(a,b)+88);return 0;}
