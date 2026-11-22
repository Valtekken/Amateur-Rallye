typedef struct {float x,y,z;} Vec;
typedef struct {Vec *begin,*end,*cap;} Arr;
void func_001DB950(register Arr *a, register float *out) {
 register Vec *p; register int i;
 if(a->end!=a->begin) {
  out[0]=a->begin->x; out[1]=a->begin->y; out[2]=a->begin->z;
  out[3]=a->begin->x; out[4]=a->begin->y; out[5]=a->begin->z;
 } else {out[0]=0;out[1]=0;out[2]=0;out[3]=0;out[4]=0;out[5]=0;}
 for(p=a->begin;p!=a->end;p++) {
  register float *q=&p->x; register float *lo=out,*hi=out+3;
  for(i=2;i>=0;i--) {if(*lo>*q)*lo=*q;if(*hi<*q)*hi=*q; q++;lo++;hi++;}
 }
}
