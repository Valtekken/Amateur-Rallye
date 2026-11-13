typedef struct {float x,y,z;} V;
typedef struct {V n;float d;int id;} Plane;
typedef struct {char pad[8];Plane plane;} PNode;
typedef struct {char pad[24];PNode**begin,**end;} Volume;
typedef struct {V a,b,out,normal;int id,hit;} Segment;
extern float func_001CF4C0(V*);
extern float D_004264A0,D_00478468;
extern V D_00426508;
static inline void set(V*d,V*s){d->x=s->x;d->y=s->y;d->z=s->z;}
static inline V* sub(V*d,V*a,V*b){float y=a->y-b->y,x=a->x-b->x,z=a->z-b->z;d->x=x;d->y=y;d->z=z;return d;}
static inline float dot(V*a,V*b){return a->x*b->x+a->y*b->y+a->z*b->z;}
static inline int side(Plane*p,V*v){float d=dot(&p->n,v)+p->d;int s=0;if(D_004264A0<=d)s=1;else if(d<=-D_004264A0)s=-1;return s;}
static inline void scale(V*d,V*a,float k){float x=a->x*k,y=a->y*k,z=a->z*k;d->z=z;d->x=x;d->y=y;}
static inline void add(V*d,V*a,V*b){float x=a->x+b->x,y=a->y+b->y,z=a->z+b->z;d->z=z;d->x=x;d->y=y;}
static inline void intersect(V*out,Plane*p,V*a,V*b,V*direction,V*product){
#define dir (*dp)
#define scaled (*product)
float len,t;V*dp=sub(direction,b,a);len=func_001CF4C0(&dir);if(len<D_00478468){direction->x=0;direction->y=0;direction->z=0;}else{float x=dir.x,y=dir.y,z=dir.z;x/=len;y/=len;z/=len;dir.x=x;dir.y=y;dir.z=z;}t=-(p->d+dot(&p->n,a))/dot(&p->n,&dir);scale(&scaled,&dir,t);add(out,a,&scaled);
#undef dir
#undef scaled
}
void func_0023FF58(Volume*v,Segment*s){V a,b;Plane selected;V tmp,da,sa,db,sb;int i,n;set(&a,&s->a);set(&b,&s->b);set(&selected.n,&D_00426508);selected.id=-1;selected.d=0;n=v->end-v->begin;
for(i=0;i<n;i++){u32 base=(u32)v->begin;Plane*p=&(*(PNode**)(base+(i<<2)))->plane;int x=side(p,&a),y=side(p,&b);if(x==1&&y==x){s->hit=0;return;}if(x&&y&&x!=y){if(x==1){intersect(&tmp,p,&a,&b,&da,&sa);set(&a,&tmp);set(&selected.n,&p->n);selected.d=p->d;selected.id=p->id;}else if(y==1){intersect(&tmp,p,&a,&b,&db,&sb);set(&b,&tmp);}}}s->hit=1;s->id=selected.id;set(&tmp,&selected.n);set(&s->normal,&tmp);set(&tmp,&a);set(&s->out,&tmp);}
