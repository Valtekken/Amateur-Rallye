typedef void (*Handler)(void);
extern Handler D_00437E58;
extern char D_00439570[], D_004761A0[],D_00478480[],D_0047A010[];
extern Handler func_002ABA80(int);
extern int func_002B1FC0(int);
extern void *func_003D4938(void *,void *);
extern void func_003D4F40(void *);
void func_001D8080(int p) {Handler h; void (*raise_error)(void *)=func_003D4F40; do {h=D_00437E58; if(!h){char *msg=D_004761A0;raise_error(func_003D4938(D_00439570,msg));h=func_002ABA80(1);} h();}while(!func_002B1FC0(p));}
void func_0020F038(int p) {Handler h; void (*raise_error)(void *)=func_003D4F40; do {h=D_00437E58; if(!h){char *msg=D_00478480;raise_error(func_003D4938(D_00439570,msg));h=func_002ABA80(1);} h();}while(!func_002B1FC0(p));}
void func_0026C688(int p) {Handler h; void (*raise_error)(void *)=func_003D4F40; do {h=D_00437E58; if(!h){char *msg=D_0047A010;raise_error(func_003D4938(D_00439570,msg));h=func_002ABA80(1);} h();}while(!func_002B1FC0(p));}
typedef struct Tree {u32 a,b;struct Tree *left,*right;} Tree;
extern void func_002B2028(void *);
extern void func_001C6938(void *,Tree *);
void func_003B7548(void *a,Tree *p){while(p){Tree *n;func_001C6938(a,p->right);n=p->left;func_002B2028(p);p=n;}}
