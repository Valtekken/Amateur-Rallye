typedef struct { float x,y,z; } V;
typedef struct { char a[0x20]; float scale; char b[0xe0]; V out; char c[0xc]; V in; } S;
void func_0027C9B0(S *a, V *b) {
 volatile V t;
 float *p=&a->in.x;
 volatile float *q=&a->out.x;
 float k,x,y,z;
 p[0]=b->x; p[1]=b->y; p[2]=b->z;
 k=a->scale; x=p[0]; z=p[2]*k; x=x*k; y=p[1]*k;
 t.z=z; q[0]=x; t.x=x; t.y=y; q[1]=y; q[2]=t.z;
}
