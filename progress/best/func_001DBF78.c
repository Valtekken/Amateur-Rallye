typedef struct {s32 x,y,z;} V; typedef struct {V *begin,*end;} List;
void func_001DBF78(List *l,s32 *out) {
 V *p=l->begin; s32 *hi=out+3; s32 *q,*mn,*mx; int i;
 if(((s32)(((s32)((char*)l->end-(char*)p)*0xAAAAAAAB))>>2) == 0) {
 out[0]=0; out[1]=0; out[2]=0; hi[0]=0; hi[1]=0; hi[2]=0;
 } else {
 out[0]=p->x; out[1]=p->y; out[2]=p->z;
 p=l->begin; hi[0]=p->x; hi[1]=p->y; hi[2]=p->z;
 }
 p=l->begin;
 while(p!=l->end) {
 q=(s32*)p; mn=out; mx=hi; i=2;
 for(i=0;i<3;i++){if(q[i]<mn[i])mn[i]=q[i]; if(mx[i]<q[i])mx[i]=q[i];}
 p++;
 }
}
