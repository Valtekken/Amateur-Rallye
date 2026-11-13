typedef struct Tree {u32 a,b;struct Tree *left,*right;} Tree;
extern void func_001C6938(void *a, Tree *p);
extern void func_002B2028(void*);
void func_002C3D58(void *a,Tree *p){while(p){Tree *n;func_001C6938(a,p->right);n=p->left;func_002B2028(p);p=n;}}
