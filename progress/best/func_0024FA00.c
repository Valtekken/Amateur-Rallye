typedef struct {float x,y,z,w;} Plane; typedef struct {char pad[12]; float *p;} Item; typedef struct {Item **begin,**end;} List;
extern float D_004264A0; extern void func_0023F7D8(List *);
int func_0024FA00(void *unused,List *a,Plane *b) {int neg=0,pos=0,i,count,side; Item **p; float *v,f;
 func_0023F7D8(a); p=a->begin; count=a->end-p;
 for(i=0;i<count;i++,p++) {v=(*p)->p; f=b->x*v[0]+b->y*v[1]+b->z*v[2]+b->w; side=0; if(D_004264A0<=f) side=1; else if(f<=-D_004264A0) side=-1; if(side==-1) neg++; else if(side==1) pos++; if(neg && pos) return 1; } return 0;
}
