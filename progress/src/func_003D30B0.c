typedef s32(*Handler)(void);extern Handler D_00437E58;extern Handler func_002ABA80(s32);extern void *func_003D4938(void*,void*);extern void func_003D4F40(void*);extern void *func_002B1FC0(u32);extern char D_00488EB8[],D_00439570[];
static inline void *construct_error(void*msg,void*obj){return func_003D4938(obj,msg);}
void *func_003D2910(u32 n){register void(*fatal)(void*)=func_003D4F40;void*p;Handler h;do{h=D_00437E58;if(!h){fatal(construct_error(D_00488EB8,D_00439570));h=func_002ABA80(1);}h();p=func_002B1FC0(n);}while(!p);return p;}
extern s32 func_003DA6B8(void*);extern u8 D_0048BD29[];
s32 func_003D30B0(void*a){s32 c;do{c=func_003DA6B8(a);}while(c!=-1 && (D_0048BD29[c]&8));return c;}
typedef struct Buf{void*v;u8*cur,*end;}Buf;
typedef struct Stream{Buf*buf;void*tied;u8 pad[18];u8 state;}Stream;
typedef struct{Stream*s;s32 ok;}Input;
extern void func_003D4D70(void*);extern s32 func_003D8118(Buf*);
void *func_003D3118(Input*a,s8*out){Stream*s=a->s;s32 good;u8 f=s->state;if(f){good=0;s->state=f|2;}else{void*t=s->tied;good=1;if(t){Buf*b=s->buf;good=1;if(b->end==b->cur){func_003D4D70(t);good=1;}}}if(good){s32 c=func_003DA6B8(a->s->buf);if(c!=-1){*out=c;a->ok=1;}else{Stream*s=a->s;s->state|=3;goto fail;}}else{fail:a->ok=0;}return a;}
s32 func_003D31D8(Input*a){Stream*s=a->s;s32 c=-1;if(!s->state){void*t=s->tied;if(t){Buf*b=s->buf;if(b->end==b->cur)func_003D4D70(t);} {Buf*b=a->s->buf;if(b->cur>=b->end){c=-1;if(func_003D8118(b)!=-1)goto read;}else{read:c=*b->cur;}if(c==-1)a->s->state|=1;}}return c;}
