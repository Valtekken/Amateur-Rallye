extern void func_001D4040(void *, const char *);
extern void func_001D2900(void *, const char *);
extern void func_001E3FB0(int, void *, void *);
extern void D_002AD390(void *);
extern void func_00196358(void *, void *);
static inline void *keyinit(void *p,const char *s) { func_001D4040(p,s); return p; }
void func_001965F0(void *arg0, void *arg1, void *arg2) {
 int s[4], k[4], root;
 func_00196358(arg0,arg1);
 func_001D2900((char*)arg0+12, *(char**)((char*)arg0+16));
 root=func_001E4280();
 func_001D4040(s,*(char**)((char*)arg0+12));
 func_001E3FB0(root,s,keyinit(k,*(char**)arg2));
 D_002AD390(*(void**)arg2);
}
