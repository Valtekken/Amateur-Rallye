/* identical to func_00323A70 (matched), with its names changed by decompdecomp */
typedef void (*Handler)(void);
extern Handler D_00437E58;
extern char D_00439570[], D_0047D8F0[];
extern Handler func_002ABA80(int);
extern int func_002B1FC0(int);
extern void *func_003D4938(void *,void *);
extern void func_003D4F40(void *);
void func_002AB240(int p) {
 Handler h;
void (*raise_error)(void *)=func_003D4F40;
 do {
 h=D_00437E58;
 if(!h) { char *msg=D_0047D8F0; raise_error(func_003D4938(D_00439570,msg)); h=func_002ABA80(1); }
 h();
 } while(!func_002B1FC0(p));
}
