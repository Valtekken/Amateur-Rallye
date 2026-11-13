typedef void (*Handler)(void);
extern Handler D_00437E58;
extern char D_00439570[], D_004845F0[];
extern Handler func_002ABA80(int);
extern int func_002B1FC0(int);
extern void *func_003D4938(void *,void *);
extern void func_003D4F40(void *);
static inline void *construct(void *s) { return func_003D4938(D_00439570,s); }
static inline void invoke(void (*fn)(void *), void *p) { fn(p); }
void func_002FA978(int p) {
 Handler h;
 do {
 h=D_00437E58;
 if(!h) { invoke(func_003D4F40,construct(D_004845F0)); h=func_002ABA80(1); }
 h();
 } while(!func_002B1FC0(p));
}
