typedef struct N {s32 color;struct N*parent,*left,*right;} N;
void func_003A5680(N* volatile *p){N*volatile n;if((*p)->color==0&&(*p)->parent->parent==*p){*p=(*p)->right;return;}if((*p)->left){n=(*p)->left;while(n->right)n=n->right;*p=n;return;}n=(*p)->parent;while(*p==n->left){*p=n;n=n->parent;}*p=n;}
