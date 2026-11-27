extern void func_003E0EA0(s32, void *); extern void func_003E1870(void *); extern u32 func_003E5438(void *,s32); extern void func_003E5588(void *),func_003E5780(void *),func_003E5C20(void *);
typedef struct { s32 a; s32 pad; s64 x,y; } P;
s32 func_003E5670(char *a) { P p; u32 v; for (;;) { func_003E5588(a); v=func_003E5438(a,32); switch(v) { case 0x1b3: func_003E1870(a); break; case 0x1b8: func_003E5C20(a); break; case 0x100: func_003E5780(a); p.a=5;p.x=-1;p.y=-1;func_003E0EA0(*(s32*)(a+0x858),&p);*(s64*)(a+0x830)=p.y;*(s64*)(a+0x828)=p.x;return *(s32*)(a+0x150); case 0x1b7: return 0; } } }
