extern void *D_002AD408(int);
extern void func_001D4040(char *, const char *);
extern void *func_00262BD8(void *, char *);
extern void func_00262E20(void *, void *);
extern void func_003FA310(char *, const char *, ...);
extern char *D_0040E88C;
extern int D_004267AC, D_004267B0;
extern char D_0044EC10[];
typedef struct { char pad[8]; int a, flags; char pad2[8]; int active, b; float volume; char pad3[4]; float x,y; } Sound;
typedef struct { char pad[12]; Sound *sound; char name[4]; float x,y; } Obj;
typedef struct { int flags; char pad[0x4c]; char *p; } Other;
void func_0015F8A0(Obj *a, Other *b) {
 char buf[16], buf2[32]; void *p; Sound *s;
 p=D_002AD408(0x70); func_001D4040(buf,D_0040E88C);
 a->sound=func_00262BD8(p,buf); a->sound->flags |= 0x408;
 { Sound *t=a->sound; float f=a->x; t->a=1; t->y=f; }
 { Sound *t=a->sound; float f=a->y; t->a=1; t->x=f; }
 a->sound->b=1; s=a->sound;
 if(s->volume>=0.05f) D_004267B0--;
 s->a=1; s->volume=0; func_00262E20(a->sound,b);
 s=a->sound;
 if(!s->active) { if(s->volume>=0.05f) D_004267B0++; D_004267AC++; }
 s->active=1;
 *(u64 *)(b->p+0x70) &= ~(1ULL << 32);
 func_003FA310(buf2,D_0044EC10);
 func_001D4040(a->name,buf2); b->flags &= ~1;
}
