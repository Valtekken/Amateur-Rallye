extern void func_0020ADA0(void *); extern float func_003F3E80(float);
typedef struct { float x,y,z; } V;
void func_0020C490(void *a, void *b, V *v,float x,float y,float z,float w) {
 float n=v->x*v->x+v->y*v->y+v->z*v->z;
 if(n<=1.1920929e-7f) {v->x=0;v->y=0;v->z=0;}
 else {float r=1.0f/func_003F3E80(n);v->x*=r;v->z*=r;v->y*=r;}
 func_0020ADA0(a);
}
