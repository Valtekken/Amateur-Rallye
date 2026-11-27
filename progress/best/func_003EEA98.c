extern void func_003F9698(char *,...); extern char D_0048A8E0[]; extern int D_0043C0E8,D_0043C0EC; extern void *D_004A9950[], *D_4D9958[];
typedef struct H { volatile unsigned int flags; volatile unsigned int size,magic; } H;
void func_003EEA98(unsigned int a,int size) {
 H *h,*p,*end; int n;
 func_003F9698(D_0048A8E0,size,a);
 h=(H *)(((a+0x8b)&~127)-12);
 h->size=128; h->flags=((h->flags & 0x3fffffff)|0x80000000)&0xc0000000; h->magic=0xfeedface;
 p=(H *)((char *)h+h->size); n=size-((unsigned int)h-a)-h->size-12;
 p->size=n; p->magic=0xdeafbeef; p->flags=((p->flags&0xc0000000)|(h->size&0x3fffffff))&0x3fffffff;
 end=(H *)((char *)p+n); end->magic=0xfeedface; end->size=0; end->flags=(((end->flags&0x3fffffff)|0x40000000)&0xc0000000)|(n&0x3fffffff);
 D_004A9950[D_0043C0EC++]=p; D_4D9958[D_0043C0E8++]=h;
}
