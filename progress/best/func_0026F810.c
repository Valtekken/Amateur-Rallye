typedef struct { s32 x[3]; } P;
typedef struct { P *b, *e, *c; } V;
typedef struct { s64 a; } __attribute__((packed)) P8;
extern u32 D_0040E618[];
extern void *func_002B1FC0(int), *func_003D2910(int), *func_00152D28(int);
extern void func_002B2028(void *);
extern void *func_0026F7D0(void *, void *, void *, int);
static inline P* range(P*a,P*b,P*c){return (P*)func_0026F7D0(a,b,c,0);}
static inline void copy(P*d,const P*s){*(P8*)d=*(P8*)s;d->x[2]=s->x[2];}
static inline void construct(void*ptr,const P*s){if(ptr){P*d=(P*)ptr;copy(d,s);}}
static inline void append(P**p,P*val){construct(*p,val);++*p;}
static inline P *backcopy(P*first,P*last,P*result){s32 n=(s32)((u32)((u8*)last-(u8*)first)*0xAAAAAAABu)>>2;while(n>0){--last;--result;copy(result,last);--n;}return result;}
static inline void* memalloc(int n){void*p=func_002B1FC0(n);if(!p)p=func_003D2910(n);return p;}
static inline P* allocate(u32 n,int *bytes){P*p;if(n){*bytes=n*12;if(*bytes){p=memalloc(*bytes);}else{u32*q=(u32*)D_0040E618[-1];if(!q)p=func_00152D28(0);else{u32 next=*q;p=(P*)q;D_0040E618[-1]=next;}}}else{p=0;*bytes=0;}return p;}
static inline void dispose(P*p,int n){if(n){if(n*12)func_002B2028(p);else{*(u32*)p=D_0040E618[-1];D_0040E618[-1]=(u32)p;}}}
void func_0026F810(V*v,P*pos,P*val){
  if(v->e!=v->c){
    P tmp; P *last=v->e; int n;
    construct(last,last-1);
    v->e++;
    copy(&tmp,val);
    backcopy(pos,v->e-2,v->e-1);
    copy(pos,&tmp);
  } else {
    u32 n=(s32)((u32)((u8*)v->e-(u8*)v->b)*0xAAAAAAABu)>>2;
    u32 ncap=n?n*2:1;
    int bytes; P *p,*cur,*end,*q;
    p=allocate(ncap,&bytes);
    { P* first=v->b; P* dest=p; cur=range(first,pos,dest); }
    append(&cur,val);
    end=range(pos,v->e,cur);
    for(q=v->b;q<v->e;q++){}
    dispose(v->b,(s32)((u32)((u8*)v->c-(u8*)v->b)*0xAAAAAAABu)>>2);
    v->b=p; v->e=end; v->c=(P*)((char*)p+ncap*12);
  }
}
