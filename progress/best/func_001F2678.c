typedef struct {char pad[28]; int first,count;} A;
typedef struct {char pad[28]; int idx[3]; char tail[12];} Face;
typedef struct {float v[3];} V;
typedef struct {char pad[52]; Face **faces; V **verts;} B;
void func_001F2678(A *a,B *b,float *out) {
 if(a->count) {
 Face *f=*b->faces+a->first,*end=f+a->count; V *v=*b->verts; float *max=out+3; V *p=&v[f->idx[0]];
 out[0]=p->v[0]; out[1]=p->v[1]; out[2]=p->v[2]; max[0]=out[0]; max[1]=out[1]; max[2]=out[2];
 if(f<end) do {int i=0; do {float *src=v[f->idx[i]].v,*lo=out,*hi=max; int k=2; do {if(*src<*lo)*lo=*src; if(*src>*hi)*hi=*src; src++;lo++;hi++;}while(--k>=0); i++;}while(i<3); f++;}while(f<end);
 }
}
