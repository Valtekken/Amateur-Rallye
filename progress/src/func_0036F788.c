typedef struct N {struct N *next;u32 key;} N;
typedef struct {int pad;N **begin,**end;int pad2;int count;} T;
extern void func_002B2028(void*);
int func_0036F788(T*t,u32*k){int n=0;unsigned i=*k%(unsigned)(t->end-t->begin);N **bucket=t->begin; N *head,*p,*prev; bucket+=i;head=*bucket;
if(head){prev=head;p=head->next;while(p){if(p->key==*k){prev->next=p->next;n++;func_002B2028(p);p=prev->next;t->count--;}else{prev=p;p=p->next;}}
if(head->key==*k){{N **bucket2=t->begin;bucket2+=i;*bucket2=head->next;}n++;func_002B2028(head);t->count--;}}
return n;}
