extern char D_0042E730[];extern void *func_002DDA20(void),*func_00340CD0(void);extern void func_003387C8(void*,int),func_003432B8(void*,void*,void*,void*,void*);
typedef struct {float x,y,z,w;} Vec;
void func_00347160(void){char *global=D_0042E730;void **g=(void**)(global+20);char *p,*obj,*vt;int *state;Vec a,b,c,d;Vec t;
if(*g && *(int*)(*(char**)((char*)*g+16)+12)){
p=*(char**)((char*)func_002DDA20()+12);obj=*(char**)(p+48);state=func_00340CD0();
state[4]=-1;state[5]=-1;state[0]=-1;state[1]=-1;state[2]=-1;state[3]=-1;state[6]=-1;func_003387C8(p,0);
t.y=0;t.w=0;t.x=t.y;t.z=0;a.x=1;a.y=0;a.z=0;a.w=0;
t.y=1;t.w=0;t.z=0;b.x=t.x;b.y=t.y;b.z=t.z;b.w=t.w;
t.x=0;t.y=0;t.z=1;t.w=0;c.x=t.x;c.y=t.y;c.z=t.z;c.w=t.w;
t.x=0;t.y=0;t.z=0;t.w=1;d.x=t.x;d.y=t.y;d.z=t.z;d.w=t.w;
func_003432B8(obj,&a,&a,&c,&d);
vt=*(char**)(obj+0x148);(*(void(**)(void*))(vt+0xd4))(obj+*(short*)(vt+0xd0));
vt=*(char**)(obj+0x148);(*(void(**)(void*,void*))(vt+0xf4))(obj+*(short*)(vt+0xf0),g);
state[6]=-1;state[4]=-1;state[5]=-1;state[0]=-1;state[1]=-1;state[2]=-1;state[3]=-1;
}}
