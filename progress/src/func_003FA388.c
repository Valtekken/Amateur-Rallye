typedef struct{float time,pad;u64 start;float freq,inv;s32 shift;} Timer;
extern char*func_002BF920(void);extern f32 func_0040C7F0(s64);extern void func_003E80A8(void*,f32);
Timer*func_003E7FE8(Timer*a){f32 f;s32 e,n;f=func_0040C7F0(*(s64*)(func_002BF920()+16));a->freq=f;if(f>16384.0f){union{float f;u32 u;}v;v.f=f;e=((v.u>>23)&255)-127;if((u32)e==0xFFFFFF81u)e=0;n=e-14;a->shift=n;{s32 scale=1<<n;a->freq=f/(f32)scale;}}else a->shift=0;a->inv=1.0f/a->freq;func_003E80A8(a,0.0f);return a;}

typedef struct{char*cur;s32 count;s32 size;u16 flags;s16 fd;char*base;s32 cap;char pad18[8];void*write;char pad24[12];s32 f30;char pad34[16];s32 f44;char pad48[8];s32 pos;void*reent;char tail[8];} File;
extern void*D_004404DC;
extern s32 func_003FB6C0(File*,char*,void*),func_003FCEE0(File*,char*,void*),func_003FA9B8(char*);
extern s32 func_003FA380(void);
void func_003FA310(char*a,char*b,...){File f;f.flags=0x208;f.cur=a;f.size=0x7fffffff;f.base=a;f.cap=0x7fffffff;f.reent=D_004404DC;func_003FB6C0(&f,b,(char*)__builtin_next_arg(b)-48);*f.cur=0;}
s32 func_003FA388(char*a,char*b,...){File f;s32 n;f.flags=4;f.cur=a;f.base=a;n=func_003FA9B8(a);f.count=n;f.cap=n;f.write=func_003FA380;f.reent=D_004404DC;f.f30=0;f.f44=0;return func_003FCEE0(&f,b,(char*)__builtin_next_arg(b)-48);}
extern s64 func_00400A38(void*,s16,s32,s32);
s32 func_003FA410(File*a,s32 b,s32 c){s32 r=func_00400A38(a->reent,a->fd,b,c);if(r>=0)a->pos+=r;else a->flags&=0xefff;return r;}
