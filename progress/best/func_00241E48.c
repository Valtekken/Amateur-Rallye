typedef struct { float x,y,z; } Vec;
extern float func_00241FB0(int,void *);
extern void func_0023E888(void *,Vec *),func_0023E8C0(void *,Vec *);
void func_00241E48(int a,char *b) {
 float f,g; Vec t,u,v; Vec *p=(Vec *)(b+12); char *q=*(char **)(b+0x50);
 if(*(int *)(*(char **)(b+0x4c)+0x1c8)) {
  if(*(int *)(q+0x1c8)) { f=func_00241FB0(a,b); g=func_00241FB0(a,b); }
  else { f=func_00241FB0(a,b); g=0; }
 } else if(*(int *)(q+0x1c8)) { f=0; g=func_00241FB0(a,b); } else f=g=0;
 u.x=p->x*f; u.y=p->y*f; u.z=p->z*f; t.x=u.x; t.y=u.y; t.z=u.z; func_0023E888(b,&t);
 v.x=p->x*g; v.y=p->y*g; v.z=p->z*g; t.x=-v.x; t.y=-v.y; t.z=-v.z; func_0023E8C0(b,&t);
}
