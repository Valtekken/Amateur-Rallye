typedef struct N { struct N *next,*prev; int value; } N;
typedef struct { N *head; } L;
typedef struct { char pad[28]; int count; char pad2[36]; int x,y; float minx,unused,miny,maxx,unused2,maxy; } S;
static inline void cnt(N *p,N *h,int *n) { while(p!=h) { p=p->next; (*n)++; } }
extern void func_0020E720(S *),func_0020E788(S *,int,int);
extern float func_003F2E78(float);
void func_0020E8E0(S *s,int a,L *list,int step) {
 N *p,*head; int count; float f;
 func_0020E720(s);
 if(a) { head=list->head; count=0; cnt(head->next,head,&count);
 if(count) { f=(float)step; p=list->head->next; while(p!=list->head) { func_0020E788(s,a,p->value); p=p->next; }
 s->x=(int)func_003F2E78((s->maxx-s->minx)/f);
 s->y=(int)func_003F2E78((s->maxy-s->miny)/f); s->count=s->x*s->y; } }
}
