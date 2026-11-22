typedef struct{u8 pad[12];} Elem;
typedef struct{Elem*begin,*end,*cap;} Vec;
typedef struct{u8*begin,*end;} Src;
extern void*func_002B1FC0(unsigned);extern void*func_003D2910(unsigned);extern void*func_00152D28(unsigned);extern void func_002B2028(void*);extern void*func_003F93CC(void*,const void*,unsigned);
extern void*func_00156E00(void*,void*,void*);extern void*func_00156C38(void*,void*);extern void*func_00156F28(void*,void*,void*);extern void*func_00156F88(void*,unsigned,void*);
extern u32 D_0040E618[];
static inline void*raw(unsigned n){void*p=func_002B1FC0(n);if(!p)p=func_003D2910(n);return p;}
static inline void*alloc4(unsigned n){void*p;if(n){unsigned b=n*4;if(b)return raw(b);p=(void*)D_0040E618[-1];if(!p)return func_00152D28(0);D_0040E618[-1]=*(u32*)p;return p;}return 0;}
static inline void*alloc12(unsigned n){void*p;if(n){unsigned b=n*12;if(b)return raw(b);p=(void*)D_0040E618[-1];if(!p)return func_00152D28(0);D_0040E618[-1]=*(u32*)p;return p;}return 0;}
static inline void free4(void*p,unsigned n){if(n){if(n*4)func_002B2028(p);else{*(u32*)p=D_0040E618[-1];D_0040E618[-1]=(u32)p;}}}
static inline void free12(void*p,unsigned n){if(n){if(n*12)func_002B2028(p);else{*(u32*)p=D_0040E618[-1];D_0040E618[-1]=(u32)p;}}}
static inline unsigned*maxp(unsigned*a,unsigned*b){return *a<*b?b:a;}
void func_001570B0(register Vec*v, register char*pos, unsigned count, register Src*src){
 unsigned oldn,n;void*buf;char*p,*q;Vec tmp;register Vec*rtmp=&tmp;
 if(!count)return;
 if((unsigned)(v->cap-v->end)>=count){
  unsigned srcn=(unsigned)((s32)((u8*)src->end-(u8*)src->begin)>>2);
  unsigned bytes=srcn*4;
  tmp.begin=0;tmp.end=0;tmp.cap=0;
  buf=alloc4(srcn);
  rtmp->begin=(Elem*)buf;rtmp->end=(Elem*)buf;rtmp->cap=(Elem*)((char*)buf+bytes);
  func_003F93CC(buf,src->begin,srcn*4);
  rtmp->end=(Elem*)((char*)buf+(s32)((u8*)src->end-(u8*)src->begin));
  {s32 after=(Elem*)v->end-(Elem*)pos;
   if((s32)count<after){
    func_00156E00((Elem*)((char*)v->end-count*12),v->end,v->end);
    p=(char*)v->end-count*12;
    {s32 sh=(Elem*)p-(Elem*)pos;v->end=(Elem*)((char*)v->end+count*12);
     if(sh>0){char*d=(char*)v->end-count*12;do{p-=12;func_00156C38(d,p);d-=12;sh--;}while(sh>0);}}
    func_00156F28(pos,pos+count*12,rtmp);
   }else{
    s32 after2=after;
    func_00156F88(v->end,count-(unsigned)after2,rtmp);
    v->end=(Elem*)((char*)v->end+(count-(unsigned)after2)*12);
    func_00156E00((Elem*)pos,(Elem*)((char*)v->end-(count-(unsigned)after2)*12),v->end);
    v->end=(Elem*)((char*)v->end+after2*12);
    func_00156F28(pos,(Elem*)((char*)v->end-after2*12),rtmp);
   }}
  free4(rtmp->begin,(unsigned)((s32)((u8*)rtmp->cap-(u8*)rtmp->begin)>>2));
 }else{
  oldn=(unsigned)(v->end-v->begin);
  n=oldn+*maxp(&oldn,&count);
  buf=alloc12(n);
  p=func_00156E00(v->begin,pos,buf);
  func_00156F88(p,count,src);
  q=func_00156E00(pos,v->end,p);
  {Elem*i=v->begin,*e=v->end;while((unsigned)i<(unsigned)e){Vec*el=(Vec*)i;free4(el->begin,(unsigned)((s32)((u8*)el->cap-(u8*)el->begin)>>2));i++;}}
  free12(v->begin,(unsigned)(v->cap-v->begin));
  v->end=(Elem*)q;v->begin=(Elem*)buf;v->cap=(Elem*)((char*)buf+n*12);
 }
}
