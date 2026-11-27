typedef struct {float x,y,z;} V; typedef struct {float x,y,z,w; int id;} P;
extern float D_004264A0;
extern int func_00243718(void *,void *,int,void *,void *,V *,V *,int *);
int func_0024AA40(void *unused,void *a,void *b,V *c,V *d,P *out) {
 V p,n; P tmp; int id=-1; float x,y; int s,t;
 *(int*)&p.x=0;*(int*)&p.y=0;*(int*)&p.z=0;*(int*)&n.x=0;*(int*)&n.y=0;*(int*)&n.z=0; if(func_00243718(a,b,0,c,d,&p,&n,&id)) {
 out->x=n.x;out->y=n.y;out->z=n.z;out->id=id;
 tmp.x=n.x;tmp.y=n.y;tmp.z=n.z;tmp.id=id;
 out->w=tmp.w=-(n.x*p.x+n.y*p.y+n.z*p.z);
 x=n.x*c->x+n.y*c->y+n.z*c->z+tmp.w;
 s=0; if(D_004264A0<=x)s=1;else if(x<=-D_004264A0)s=-1;
 y=out->x*d->x+out->y*d->y+out->z*d->z+out->w;
 t=0; if(D_004264A0<=y)t=1;else if(y<=-D_004264A0)t=-1;
 if(s==1 || t==-1) goto fail; return 1; } fail: return 0;
}
