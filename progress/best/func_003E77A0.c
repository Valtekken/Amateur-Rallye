typedef struct { s32 value; } CopyTag;
extern s32 func_002C5160(s32,s32,s32,CopyTag);
s32 func_003978C8(register s32 a,register s32 b,register s32 c,register s32 d){return func_002C5160(a,b,c,(CopyTag){sizeof(char)-1});}
typedef struct Node {s32 active,busy,x; struct Node *next; char *vt;} Node;
typedef struct {Node *head,*cur;} List;
s32 func_003E76B8(List *a){s32 ret=0;Node *n;if(!a->cur)a->cur=a->head;n=*(Node*volatile*)&a->cur;
loop: if(!n)a->cur=0;else{if(!n->active){n=n->next;goto loop;}if(n->busy){n=n->next;goto loop;}((void(*)(void*))*(void**)(n->vt+20))((char*)n+*(s16*)(n->vt+16));ret=1;a->cur=n->next;}return ret;}
void func_003E7748(List *a){Node*n=a->head;if(n){do{if(n->active)((void(*)(void*))*(void**)(n->vt+28))((char*)n+*(s16*)(n->vt+24));n=n->next;}while(n);}}
Node*func_003E77A0(void *unused,Node*n){Node*t;if(n){t=*(Node*volatile*)&n->next;if(t){loop:n=t;if(n){Node*q=*(Node*volatile*)&n->next;t=q;if(q)goto loop;}}}return n;}
