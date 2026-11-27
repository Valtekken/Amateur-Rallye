typedef struct N { struct N *next; short kind, index; } N;
typedef struct { char pad[4]; N **begin, **end; char pad2[8]; int *values; } Table;
typedef struct { char pad[16]; float x,y,z; char rest[24]; } Item;
typedef struct { char pad[4]; Item *begin,*end; } List;
typedef struct { char pad[0x4c]; List *list; } Owner;
typedef struct { char pad[0x24]; int mode; char pad2[0x14]; float y,x; } Obj;
extern int func_00205D60(void *, int *);
extern Table *func_00206588(void *);
void func_0029B790(Obj *o, Owner *owner) {
 volatile char scratch[48]; int flag, x,y; Table *t; N *n; List *l; Item *a,*b; float dx,dy;
 if (owner->list) { flag=0; if (func_00205D60(owner->list,&flag)) {
 t=func_00206588(owner->list); n=t->begin[0 % (t->end-t->begin)];
 if(n && n->kind) { do {n=n->next;} while(n && n->kind); }
 if(!n) {x=0;y=0;} else {x=t->values[n->index*2];y=t->values[n->index*2+1];}
 *(int *)&o->x=*(int *)&o->y=0;
 if(!o->mode) { l=owner->list; a=l->begin; b=l->end-1; dx=a->x-b->x; dy=a->y-b->y; o->x=dx; o->y=dy; }
 dx=o->x+(float)x; dy=o->y+(float)y; o->x=dx; o->y=dy;
 if(!flag || o->mode) {o->y *= 0.5f; o->x *= 0.5f;}
 }}
}
