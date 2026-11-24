typedef struct N { struct N *next,*prev; } N;
extern void func_002B2028(void *);
void func_001EB620(N **p) {
 N *node=(*p)->next;
 while(node!=*p) { N *old=node; node=node->next; func_002B2028(old); }
 (*p)->next=*p; (*p)->prev=*p;
}
