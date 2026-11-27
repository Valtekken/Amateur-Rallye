typedef struct { float x,y,z; } V;
typedef struct N { struct N *next,*prev; V *v; } N;
typedef struct { N *head; } L;
extern int func_00227850(void *),func_002AD350(float);
extern V *func_00227880(void *,int);
extern L *func_00227868(void *,int);
extern void func_003F9698(const char *,...);
extern char D_00479778[],D_00479790[],D_004797A0[],D_004797B8[];
void func_00227FC0(void *a,V *off) {
 int i=0,n,x,y,z,j; V *v,t; L *l; N *p;
 x=func_002AD350(off->x); y=func_002AD350(off->y); z=func_002AD350(off->z); func_003F9698(D_00479778,x,y,z);
 n=func_00227850(a);
 for(i=0;i<n;i++) { v=func_00227880(a,i); j=0; func_003F9698(D_00479790,i);
 x=func_002AD350(v->x); y=func_002AD350(v->y); z=func_002AD350(v->z); func_003F9698(D_004797A0,x,y,z);
 l=func_00227868(a,i); p=l->head->next;
 while(p!=l->head) { v=p->v; t.x=v->x+off->x; t.y=v->y+off->y; t.z=v->z+off->z;
 x=func_002AD350(t.x); y=func_002AD350(t.y); z=func_002AD350(t.z); func_003F9698(D_004797B8,j++,x,y,z); p=p->next; }
 }
}
