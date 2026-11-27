typedef struct { float x,y,z,w; int v; } E;
typedef struct { E *begin,*end,*cap; } Vec;
typedef struct { void *vt; unsigned value:24; unsigned count:8; } Obj;
extern int func_00227850(int);
extern E *func_00227880(int,int);
extern int func_00236388(Vec *);
extern void func_00272EF8(Vec *, E *, E *);
extern void func_002B2028(void *);
extern void *D_0040E618[];
void func_002342F0(Obj *o, int *arg) {
 int i=0, n, h, count; unsigned old; volatile char pad[16]; Vec v; E *p,*src,*q; unsigned result;
 o->value=0; o->count=0;
 h=arg[1]; n=func_00227850(h);
 v.begin=0; v.end=0; v.cap=0;
 for(i=0;i<n;i++) {
  src=func_00227880(h,i);
  if(v.end!=v.cap) {
   p=v.end;
   if(p) { p->x=0; p->y=0; p->z=0; p->x=src->x; p->y=src->y; p->z=src->z; p->w=src->w; p->v=src->v; }
   v.end++;
  } else func_00272EF8(&v,v.end,src);
 }
 result=func_00236388(&v);
 old=o->count; o->value=result; o->count=n;
 q=v.begin; while(q<v.end) q++;
 p=v.begin; count=(int)((unsigned)((char *)v.cap-(char *)p)*0xcccccccdU)>>2;
 if(count) { if(count*20) func_002B2028(p); else { *(void **)p=D_0040E618[-1]; D_0040E618[-1]=p; } }
}
