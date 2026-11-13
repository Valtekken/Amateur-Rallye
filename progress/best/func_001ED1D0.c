typedef struct { u32 begin,end,cap; } Vec;
extern u32 D_0040E618[];
extern u32 func_002B1FC0(u32);
extern u32 func_003D2910(u32);
extern u32 func_00152D28(u32);
extern void func_002B2028(u32);
extern void func_001ED1A0(u32,u32,u32,s32);
static inline u32 allocvec(u32 n) { u32 bytes=n<<2; if(n){if(bytes){u32 p=func_002B1FC0(bytes);if(p)return p;return func_003D2910(bytes);}else{u32 p=D_0040E618[-1];if(!p)return func_00152D28(0);D_0040E618[-1]=*(u32*)p;return p;}}return 0;}
static inline void freevec(u32 q,s32 n){if(n){if(n<<2)func_002B2028(q);else{*(u32*)q=D_0040E618[-1];D_0040E618[-1]=q;}}}
Vec *func_001ED1D0(Vec *a,Vec *b) {
 if(b!=a) {
 u32 end=b->end, start=b->begin, dest=a->begin;
 s32 n=(s32)(end-start)>>2;
 s32 bytes;
 if((u32)((s32)(a->cap-dest)>>2)<(u32)n) {
 u32 p;
 if(n){bytes=n<<2;p=allocvec(n);}else{p=0;bytes=0;}
 func_001ED1A0(start,end,p,0);
 {u32 q=a->begin,e=a->end;while(q<e) q+=4;}
 freevec(a->begin,(s32)(a->cap-a->begin)>>2);
 a->begin=p;a->cap=a->begin+bytes;
 } else {
 s32 k=(s32)(a->end-dest)>>2;
 u32 src=start;
 if((u32)k>=(u32)n) {
 u32 q=dest;s32 left=n;bytes=n<<2;
 while(left>0){u32 v=*(u32*)src;--left;src+=4;*(u32*)q=v;q+=4;}
 {u32 e=a->end;while(q<e)q+=4;}
 } else {
 s32 left=k;bytes=n<<2;
 while(left>0){u32 v=*(u32*)src;--left;src+=4;*(u32*)dest=v;dest+=4;}
 {u32 e=a->end;func_001ED1A0(b->begin+(((s32)(e-a->begin)>>2)<<2),b->end,e,0);}
 }
 }
 a->end=a->begin+bytes;
 }
 return a;
}
