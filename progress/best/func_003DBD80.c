typedef struct { int pad[4]; int n; unsigned int d[2]; } Big;
extern Big *func_003DB190(void *, int); extern int func_003DB410(unsigned int); extern int func_003DB498(unsigned int *);
Big *func_003DBD80(void *ctx, long long bits, int *exp, int *nbits) {
 unsigned int w[2]; int shift,n,e; unsigned int hi=(unsigned int)(bits>>32); int lo=(int)bits; Big *p=func_003DB190(ctx,1); unsigned int *d=p->d;
 w[1]=hi & 0xfffff; e=(hi>>20)&0x7ff; if(e) w[1]|=0x100000; w[0]=lo;
 if(lo) { shift=func_003DB498(w); if(shift) { d[0]=w[0] | (w[1]<<-shift); w[1]>>=shift; } else d[0]=w[0]; n=w[1]?2:1; d[1]=w[1]; p->n=n; }
 else { n=1; shift=func_003DB498(&w[1])+32; p->n=1; d[0]=w[1]; }
 if(e) { *exp=e+shift-0x433; *nbits=53-shift; }
 else { *exp=shift-0x432; *nbits=(n<<5)-func_003DB410(d[n-1]); }
 return p;
}
