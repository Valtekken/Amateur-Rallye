typedef struct {float x,y,z;} V;
typedef struct Item {int a,b,c; V *p;} Item;
typedef struct Node {struct Node *next,*prev; Item *item;} Node;
typedef struct {Node *head; int n; V axis;} Obj;
extern float D_004264A0,D_00478468;
extern float func_001CF4C0(V *);
int func_002518D8(Obj *o,V *point) {
 int pos=0,neg=0; Node *head=o->head,*n=head->next; Item *prev=head->prev->item,*cur; V *a,*b,v,c; float len,d;
 while(n!=o->head) {
 cur=n->item;a=prev->p;b=cur->p;
 v.y=b->y-a->y;v.x=b->x-a->x;v.z=b->z-a->z;
 len=func_001CF4C0(&v);
 if(len<D_00478468){v.x=0;v.y=0;v.z=0;}else {v.x/=len;v.y/=len;v.z/=len;}
 c.z=v.x*o->axis.y-v.y*o->axis.x;
 c.x=v.y*o->axis.z-v.z*o->axis.y;
 c.y=v.z*o->axis.x-v.x*o->axis.z;
 d=c.x*point->x+c.y*point->y+c.z*point->z+ -(c.x*a->x+c.y*a->y+c.z*a->z);
 if(D_004264A0<d) pos++;else if(d<=-D_004264A0) neg++;
 if(pos && neg)return 0;
 n=n->next;prev=cur;
 }return 1;
}
