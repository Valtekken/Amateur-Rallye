typedef struct { int *begin,*end; char pad[16]; } Row;
typedef struct { int n; Row *rows; } Mat;
typedef struct { float *data; } Vec;
extern float func_002088B0(Row *);
extern void func_00208888(Row *,int,int *,float *);
void func_00207710(Mat *m,Vec *in,Vec *out) {
 int i,j,idx; float val;
 i=0; while(i<m->n) {
 int next=i+1; float *dst=&out->data[i]; Row *r=&m->rows[i]; int n=r->end-r->begin;
 { float f=func_002088B0(r); float *p=in->data; p+=i; *dst=f*(*p); }
 for(j=0;j<n-1;j++) { func_00208888(r,j,&idx,&val); { float *a=out->data; float *b=in->data; a+=i; b+=idx; *a+=val*(*b); } }
 i=next;
 }
}
