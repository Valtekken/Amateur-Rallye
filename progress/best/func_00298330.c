typedef struct {float x,y,z,w;} V;
typedef struct {char p[0x30]; int lo,hi; char q[8]; V delta; int dir,pos;} A;
typedef struct {char p[0x10]; V color; char q[0x68]; int version;} C;
typedef struct {char p[0x4c]; C *c;} B;
void func_00298330(A *a,B *b) {
 V old,v; C *c;
 if(a->pos<a->hi && a->lo<a->pos) {
 old=b->c->color; v=old;
 if(a->dir) {v.x+=a->delta.x;v.y+=a->delta.y;v.z+=a->delta.z;v.w+=a->delta.w;}
 else {v.x-=a->delta.x;v.y-=a->delta.y;v.z-=a->delta.z;v.w-=a->delta.w;}
 if(v.x>1) v.x=1; if(v.y>1) v.y=1; if(v.z>1) v.z=1; if(v.w>1) v.w=1;
 if(v.x<0) v.x=0; if(v.y<0) v.y=0; if(v.z<0) v.z=0; if(v.w<0) v.w=0;
 if(!(__builtin_fabsf(old.x-v.x)<=0.0001f && __builtin_fabsf(old.y-v.y)<=0.0001f && __builtin_fabsf(old.z-v.z)<=0.0001f && __builtin_fabsf(old.w-v.w)<=0.0001f)) {
 c=b->c;c->color.x=v.x;c->color.y=v.y;c->color.z=v.z;c->color.w=v.w;c->version++;
 }
 }
}
