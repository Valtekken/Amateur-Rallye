typedef struct { short *begin,*end,*limit; } V;
extern void *func_00152D28(int),*func_002B1FC0(int),*func_003D2910(int);
extern void func_002B2028(void *),func_003F93CC(void *,void *,int);
extern void *D_0040E618[];
void func_00218A68(V *v,short *pos,short *val) {
 short *e=v->end,*p,*n; int count,bytes,d; short x;
 if(e!=v->limit) { if(e) *e=e[-1]; e=v->end; v->end=e+1; x=*val; func_003F93CC((char *)e-((((char *)(e-1)-(char *)pos)>>1)*2),pos,(((char *)(e-1)-(char *)pos)>>1)*2); *pos=x; return; }
 count=e-v->begin; count=count?count*2:1; bytes=count*2;
 if(count) { if(bytes) { p=func_002B1FC0(bytes); if(!p) p=func_003D2910(bytes); } else { p=D_0040E618[-1]; if(p) D_0040E618[-1]=*(void **)p; else p=func_00152D28(0); } } else { p=0; bytes=0; }
 d=(char *)pos-(char *)v->begin; n=(short *)((char *)p+d); func_003F93CC(p,v->begin,(d>>1)*2); if(n) *n=*val; n++; d=(char *)v->end-(char *)pos; func_003F93CC(n,pos,(d>>1)*2); n=(short *)((char *)n+d);
 { int k=v->limit-v->begin; if(k) { if(k*2) func_002B2028(v->begin); else { void *q=v->begin; *(void **)q=D_0040E618[-1]; D_0040E618[-1]=q; } } }
 v->end=n; v->limit=(short *)((char *)p+bytes); v->begin=p;
}
