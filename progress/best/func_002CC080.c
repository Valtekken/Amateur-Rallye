typedef struct Link {struct Link*next,*prev;} Link;extern void func_002B2028(void*);
void func_002CC080(Link **list){Link*p=(*list)->next;if(p!=*list){do{Link*old=p;p=p->next;func_002B2028(old);}while(p!=*list);}(*list)->next=*list;(*list)->prev=*list;}
