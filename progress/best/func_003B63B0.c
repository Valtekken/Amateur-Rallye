typedef struct{int*begin,*end,*cap;} Vec;
extern u32 D_0040E618[];
extern int*func_002B1FC0(unsigned),*func_003D2910(unsigned),*func_00152D28(unsigned);
static inline __attribute__((always_inline)) int* alloc(unsigned n){if(n){unsigned size=n*4;if(size){int*p=func_002B1FC0(size);if(p)return p;return func_003D2910(size);}else{int*p=(int*)D_0040E618[-1];if(!p)return func_00152D28(0);D_0040E618[-1]=*(u32*)p;return p;}}return 0;}
extern void func_002B2028(void*);
extern void*func_003F93CC(void*,const void*,unsigned);
static inline int* construct(int*p,int*x){if(p)*p=*x;return p;}
void func_003B63B0(Vec*v,int*pos,int*value){int*buf;int*last;unsigned bytes;int n;if(v->end!=v->cap){if(v->end)*v->end=v->end[-1];{int*end=v->end;int*prev=end-1;int size;int x;v->end=end+1;size=prev-pos;size*=4;x=*value;func_003F93CC((char*)end-size,pos,size);*pos=x;}return;}{int count=v->end-v->begin;unsigned count2=count?2*count:1;if(count2){bytes=count2*4;buf=alloc(count2);}else{buf=0;bytes=0;}}n=(char*)pos-(char*)v->begin;last=(int*)((char*)buf+n);func_003F93CC(buf,v->begin,(n>>2)*4);{int*temp=last;if(temp){*temp=*value;}last=(int*)((char*)temp+4);}{char*end=(char*)v->end;int size=(end-(char*)pos)>>2;int*newend=(int*)((char*)last+(end-(char*)pos));func_003F93CC(last,pos,size*4);last=newend;}{int*old=v->begin;n=v->cap-old;if(n){unsigned size=n*4;if(size)func_002B2028(old);else{*(u32*)old=D_0040E618[-1];D_0040E618[-1]=(u32)old;}}}v->begin=buf;v->end=last;v->cap=(int*)((char*)buf+bytes);}
