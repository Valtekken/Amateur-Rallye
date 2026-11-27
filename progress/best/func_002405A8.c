typedef struct { float x,y,z; } P;
typedef struct { char pad[12]; P *p; } Point;
typedef struct { char pad[8]; float x,y,z,w; } Plane;
typedef struct { Point **begin, **end; char pad[16]; Plane **planes, **planesEnd; } Obj;
extern float D_004264A0; extern int func_002407D8(Obj *);
int func_002405A8(Obj *o) {
 int i,j,n=o->planesEnd-o->planes, m; int pos,neg,side; float d; Plane *p; P *v;
 if(n>0) { m=o->end-o->begin; i=0;
 do { p=o->planes[i]; pos=neg=0; { float *plane=&p->x;
 for(j=0;j<m;j++) { v=o->begin[j]->p; d=plane[0]*v->x+plane[1]*v->y+plane[2]*v->z+plane[3]; side=0; if(D_004264A0<=d) side=1; else if(d<=-D_004264A0) side=-1; if(side==-1) neg++; if(side==1) pos++; if(pos && neg) return 0; }
 } if(!pos && !neg) return 0;
 } while(++i<n); } return func_002407D8(o)!=0;
}
