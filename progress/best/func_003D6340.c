typedef struct { u64 a; u16 b; u16 c; u32 d; } V;
extern V D_00488F58, D_00489120;
extern void D_002AD530(void *);
extern void D_002AD390(void *);
void func_003D6340(void **arg0, int flags) {
 char *p = *arg0; V v; V *vp=&D_00488F58;
 *(V **)(p+0x28)=vp;
 if (!flags) { int delta=(char *)arg0-(p-8); v=*vp; v.b=vp->b+delta; *(V **)(p+0x28)=&v; }
 if (flags & 2) { void *q=*(void **)(p+0x20); *(V **)(p+0x28)=&D_00489120; if(q) D_002AD530(q); }
 if (flags & 1) D_002AD390(arg0);
}
