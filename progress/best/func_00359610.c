extern void *func_002DDA20(void),*func_00340CD0(void);
extern void func_003387C8(void *,int),func_003432B8(void *,void *,void *,void *,void *);
typedef struct {float x,y,z,w;} Vec;
void func_00359610(char *a) {
 char *p=*(char **)(a+0x1068), *v,*obj,*state,*vt; int *r; Vec mat[4]; volatile Vec tmp;
 if(!p || !(v=*(char **)(p+0x14)) || !*(int *)(*(char **)(v+0x10)+0xc))return;
 obj=*(char **)((char *)func_002DDA20()+0xc); state=*(char **)(obj+0x30);
 r=func_00340CD0(); r[4]=-1;r[5]=-1;r[0]=-1;r[1]=-1;r[2]=-1;r[3]=-1;r[6]=-1;
 func_003387C8(obj,0);
 mat[0].x=1; mat[0].y=mat[0].z=mat[0].w=0;
 tmp.x=0;tmp.y=1;tmp.z=tmp.w=0;mat[1].x=tmp.x;mat[1].y=tmp.y;mat[1].z=tmp.z;mat[1].w=tmp.w;
 tmp.x=tmp.y=0;tmp.z=1;tmp.w=0;mat[2].x=tmp.x;mat[2].y=tmp.y;mat[2].z=tmp.z;mat[2].w=tmp.w;
 tmp.x=tmp.y=tmp.z=0;tmp.w=1;mat[3].x=tmp.x;mat[3].y=tmp.y;mat[3].z=tmp.z;mat[3].w=tmp.w;
 func_003432B8(state,mat,mat,&tmp,&mat[3]);
 vt=*(char **)(state+0x148); ((void (*)(void *))*(void **)(vt+0xd4))(state+*(short *)(vt+0xd0));
 vt=*(char **)(state+0x148); ((void (*)(void *,void *))*(void **)(vt+0xf4))(state+*(short *)(vt+0xf0),*(char **)(a+0x1068)+0x14);
 r[6]=r[4]=r[5]=r[0]=r[1]=r[2]=r[3]=-1;
}
