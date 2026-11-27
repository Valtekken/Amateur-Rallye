typedef struct N {struct N *next,*prev; int val;} N;
typedef struct {char pad[8];int type;char p[12];int name;} E;
typedef struct {E *begin,*end;} DB;
extern void *func_002B1FC0(int),*func_003D2910(int);extern void func_002B2028(void*),func_001515C8(void *);
extern char *func_001D4010(void*); extern int func_003FA580(char*,char*);extern int *func_001E5DA8(void*);extern void func_002A10A0(void*,void*,int,int);
void func_002A1530(void *a,void *b){
 N *head[4],*it[4],*added[4],*saved[4],*dead[4]; N *p,*q; int *v; E *e; DB *db;
 p=func_002B1FC0(12);if(!p)p=func_003D2910(12);head[0]=p;head[0]->next=p;head[0]->prev=head[0];func_001515C8(head);
 db=(DB*)func_001E4280();for(e=db->begin;e!=db->end;e++){
 if((e->type ^ 12)!=0 && !func_003FA580(func_001D4010(&e->name),func_001D4010(b)) && e->type==11){
 saved[0]=head[0];v=func_001E5DA8(e);p=func_002B1FC0(12);if(!p)p=func_003D2910(12);if((char*)p+8)p->val=*v;
 p->next=saved[0];p->prev=saved[0]->prev;saved[0]->prev->next=p;saved[0]->prev=p;added[0]=p;
 }}
 while(head[0]->next!=head[0]){p=head[0]->next;it[0]=p;func_002A10A0(a,&p->val,0,0);p=head[0]->next;dead[0]=p;q=p->next;p->prev->next=q;q->prev=p->prev;func_002B2028(dead[0]);it[0]=q;}
 func_001515C8(head);func_002B2028(head[0]);
}
