typedef struct {float x,y;} E;
typedef struct{E*begin,*end,*cap;}V;
extern u32 D_0040E618[];
extern void*func_002B1FC0(unsigned);
extern void*func_003D2910(unsigned);
extern void*func_00152D28(unsigned);
extern void func_002B2028(void*);
extern E*func_00156260(E*,E*,E*,int);
extern E*func_002C5A08(E*,E*,E*,int);
static inline void*raw(unsigned n){void*p=func_002B1FC0(n);if(p)return p;return func_003D2910(n);}
static inline E*alloc(unsigned n){E*p;if(n){unsigned bytes=n*8;if(bytes)return raw(bytes);p=(E*)D_0040E618[-1];if(!p)return func_00152D28(0);D_0040E618[-1]=*(u32*)p;return p;}return 0;}
static inline void cp(E*b,E*e,E*d){int n=e-b;while(n>0){d->x=b->x;d->y=b->y;++b;++d;--n;}}
static inline void back(E*b,E*e,E*d){int n=e-b;while(n>0){--d;--e;d->x=e->x;d->y=e->y;--n;}}
void func_0032AB88(V*v,E*pos,E*first,E*last){
  if(first!=last){
    int bytes=(char*)last-(char*)first;
    unsigned lens[2];
    lens[0]=bytes>>3;
    if((unsigned)(v->cap-v->end)>=lens[0]){
      E*oldend=v->end;
      unsigned after=oldend-pos;
      if(lens[0]<after){
        func_00156260(oldend-lens[0],oldend,oldend,0);
        v->end+=lens[0];
        back(pos,oldend-lens[0],oldend);
        cp(first,last,pos);
      }else{
        E*mid=first+after;
        func_002C5A08(mid,last,oldend,0);
        v->end+=lens[0]-after;
        func_00156260(pos,oldend,v->end,0);
        v->end+=after;
        cp(first,mid,pos);
      }
    }else{
      unsigned size=v->end-v->begin;
      unsigned count=size+*((size<lens[0])?&lens[0]:&size);
      E*mem=alloc(count);
      E*out;E*i;E*end;
      out=func_00156260(v->begin,pos,mem,0);
      out=func_002C5A08(first,last,out,0);
      out=func_00156260(pos,v->end,out,0);
      end=v->end;
      for(i=v->begin;i<end;++i){}
      {E*cap=v->cap;E*data=v->begin;unsigned c=cap-data;if(c){if(c*8)func_002B2028(data);else{*(u32*)data=D_0040E618[-1];D_0040E618[-1]=(u32)data;}}}
      v->cap=mem+count;
      v->begin=mem;
      v->end=out;
    }
  }
}
