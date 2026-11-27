typedef struct {float x,y,z;} V;
typedef struct {char pad[0x50]; V v;} Transform;
typedef struct {unsigned flags; char pad[0x4c]; Transform *t;} Obj;
typedef struct {char pad[4]; int f1,f2; char pad2[0x24]; Obj *a,*b; V v;} Data;
typedef struct Node {struct Node *next,*prev; Data *data;} Node;
typedef struct {int a; Node *first; int b; Node *second; int c; V points[4]; int count;} O;
extern void func_00262E20(Data *,int); extern void *func_00201350(void);
void func_00262238(O *o) {
 Node *volatile n; Node *end; volatile char pad[0x40]; Obj *obj; Data *d; int i;
 end=o->first;n=end->next;while(n!=end){d=n->data;obj=d->b;if(obj){if((obj->flags>>1)&1)func_00262E20(d,0);d=n->data;{register V *dst=&d->v;register V *src=&obj->t->v;dst->x=src->x;dst->y=src->y;dst->z=src->z;}d->f2=1;} n=n->next;end=o->first;}
 end=o->second;n=end->next;while(n!=end){d=n->data;obj=d->a;if(obj){if(obj->flags&2)d->a=0;d=n->data;{register V *dst=(V*)((char*)d+0x34);register V *src=&obj->t->v;dst->x=src->x;dst->y=src->y;dst->z=src->z;}d->f1=1;}n=n->next;end=o->second;}
 o->count=*(int*)((char*)func_00201350()+0x10);for(i=0;i<o->count;i++){char *p=((char**)func_00201350())[i];{register V *src=(V*)(p+0xc0);register V *dst=&o->points[i];dst->x=src->x;dst->y=src->y;dst->z=src->z;}}
}
