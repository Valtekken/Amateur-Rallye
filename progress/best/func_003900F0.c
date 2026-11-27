extern void func_00391D38(void *,void *,int),func_00394498(void *),func_003A4AB8(void *,int),func_003A4FD8(int *,float,float,float,float),func_003A50C0(void *),func_003A52D0(void *),func_003A7C90(void *,void *),func_003A7DB0(void *,void *),func_003A7F10(void *,void *),func_003A81C0(int),func_003A83F0(int,int),func_003A85A8(int,void *),func_003F9698(char *,int);
extern int *func_003A5088(void *);
extern int func_003A84F8(void *);
extern int D_0042FD64;
extern char D_00487880[],D_004878A8[];
typedef struct { short adj; short pad; void (*fn)(void *,void *); } V;
typedef struct { char pad[8]; char *vt; } Obj;
typedef struct { char pad[0x18]; int list; char pad2[0x2c]; float x,y; char pad3[0x10]; int z; } Data;
typedef struct { Obj *obj; Data *data; char pad[8]; int value; } State;
void func_003900F0(register State *s,int arg) {
 volatile int n,copy,count; char vertex[0x30]; float a[4],b[4]; volatile int i,tmp; register V *v; register V *v2;
 func_003A7C90(s->obj,(char*)s->data+0x50);
 v=(V*)(s->obj->vt+0x80); v->fn((char*)s->obj+v->adj,&s->data->x);
 s->data->y=s->data->x*s->data->x;
 v2=(V*)(s->obj->vt+0x90); v2->fn((char*)s->obj+v2->adj,(void *)&n);
 func_003F9698(D_00487880,n);
 if(n>D_0042FD64){D_0042FD64=n;func_003F9698(D_004878A8,D_0042FD64);}
 func_003A81C0(s->data->list); copy=n; func_003A83F0(s->data->list,copy);
 count=0; func_003A52D0(vertex); func_003A50C0(a); func_003A50C0(b);
 for(i=0;i<n;i++){
 register int *p;
 func_003A7DB0(s->obj,vertex); func_003A7F10(s->obj,a);
 p=func_003A5088(vertex); func_003A4FD8((int *)&tmp,a[0],a[1],a[2],a[3]); *p=tmp;
 func_003A7DB0(s->obj,vertex+0x10); func_003A7DB0(s->obj,b);
 func_003A4AB8(vertex+0x20,func_003A84F8(b)); func_003A85A8(s->data->list,vertex); count++;
 }
 func_00394498(s); func_00391D38(s,s->data,arg); s->data->z=s->value;
}
