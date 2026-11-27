extern void *D_002AD408(s32);
extern char D_0044DD18[], D_00479060[], D_00479068[], D_00479078[], D_00479088[], D_00479098[], D_004790A8[];
extern void func_001D4040(void *, const char *);
extern void func_001E00E8(void *);
extern int func_001E16B8(void *, void *, int);
extern int func_001E1868(void *, void *, int);
extern int func_001E1C10(void *, void *, int);
extern void func_001D4010(void *, const char *);
extern void func_001DF2B0(void *, int, int);

typedef struct { s32 a,b,c,d; void *vt; s32 e,f,g,h; } Obj;

void func_002230B8(void *arg1) {
    Obj *p = (Obj *)arg1;
    p->a = 0; p->b = 0; p->c = 0; p->d = 0;
    p->vt = D_0044DD18;
    p->e = 0; p->f = 0; p->g = 0; p->h = 0;
    
    char buf[16];
    func_001D4040(buf, D_00479060);
    p->h = *(s32 *)buf;
    
    char local[208];
    func_001E00E8(local);
    
    func_001D4040(buf, D_00479068);
    func_001DF2B0(p, func_001E16B8(local, buf, 0), 0);
    
    func_001D4040(buf, D_00479078);
    func_001DF2B0(p, func_001E1868(local, buf, 0), 0);
    
    func_001D4040(buf, D_00479088);
    func_001DF2B0(p, func_001E1C10(local, buf, 0), 0);
    
    func_001D4040(buf, D_00479098);
    // ... incomplete
}
