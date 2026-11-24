typedef struct V { float x,y,z,w; } V;
typedef struct P { float x,y,z,pad; V a,b; float c; int flag; } P;
typedef struct Arr { V *start,*end,*cap; } Arr;
typedef struct Node { struct Node *child,*next; char pad[8]; void *vt; char name[1]; } Node;
extern int func_001CE2F8(void*);
extern int func_001D24B8(void*,int,int,const char*);
extern void func_00212F98(void*,void*,void*);
extern float func_003F3978(float,float);
extern char D_00479FF8[],D_0047A000[];
void func_0026C1B0(int a, char *b, Node *n, P *p) {
 char *vt=n->vt; char *q; int test; int i,j; int *rec; float *v; float k; V val; Arr *arr; int idx; Node *child; P cp;
 q=((char *(*)(void*))*(void**)(vt+0x4c))((char*)n+*(short*)(vt+0x48));
 if(q && func_001D24B8(q+0x1c,0,func_001CE2F8(q+0x1c),D_00479FF8)!=-1) p->flag=1;
 test=func_001D24B8(n->name,0,func_001CE2F8(n->name),D_0047A000)!=-1;
 if (!(p->flag && test)) {
 vt=n->vt;
 q=((char *(*)(void*))*(void**)(vt+0x1c))((char*)n+*(short*)(vt+0x18));
 if(q) for(i=0;i<*(int*)(q+0x20);i++) {
 rec=(int*)(**(char***)(b+0x34)+(i+*(int*)(q+0x1c))*0x34);
 for(j=2;j>=0;j--,rec++) if(rec[10]!=-1) {
 v=**(float***)(b+0x28)+rec[10]*3;
 k=func_003F3978(v[0]*p->x+v[1]*p->y+v[2]*p->z,p->c);
 val.x=p->a.x+((float (*)(float,float,float))func_0015ACE0)(p->b.x*k,0,1);
 val.y=p->a.y+((float (*)(float,float,float))func_0015ACE0)(p->b.y*k,0,1);
 val.z=p->a.z+((float (*)(float,float,float))func_0015ACE0)(p->b.z*k,0,1);
 val.w=1; arr=*(Arr**)(b+0x20); idx=((char*)arr->end-(char*)arr->start)>>4;
 if(arr->end!=arr->cap) { if(arr->end) { arr->end->x=val.x;arr->end->y=val.y;arr->end->z=val.z;arr->end->w=val.w; } arr->end++; } else func_00212F98(arr,arr->end,&val);
 *rec=idx;
 }}
 for(child=n->child;child;child=child->next) { cp.x=p->x;cp.y=p->y;cp.z=p->z;cp.a.x=p->a.x;cp.a.y=p->a.y;cp.a.z=p->a.z;cp.a.w=p->a.w;cp.b.x=p->b.x;cp.b.y=p->b.y;cp.b.z=p->b.z;cp.b.w=p->b.w;cp.c=p->c;cp.flag=p->flag;func_0026C1B0(a,b,child,&cp); }
 }}
