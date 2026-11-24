extern float D_004264A0;
typedef struct O {void *vt; float x,y,z,w; int pad; struct O *left,*right;} O;
typedef struct {float x,y,z;} V;
static inline float dot(float *a,V *v){float x=v->x,y=v->y,z=v->z;float a0=a[0],a1=a[1],a2=a[2],a3=a[3];return a0*x+a1*y+a2*z+a3;}
O *func_00237778(O *p,V *v,float eps){float t=dot(&p->x,v); int sign; O *q; if(!(__builtin_fabsf(t)<eps)){sign=0;if(D_004264A0<=t)sign=1;else if(t<=-D_004264A0)sign=-1;if(sign==-1) q=p->left;else if(sign==1) q=p->right;else goto done; {char *vt=*(char**)q;return ((O*(*)(void*))*(void**)(vt+0x34))((char*)q+*(s16*)(vt+0x30));}} done: return p;}
