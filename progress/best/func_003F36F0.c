extern int D_0048BD04; extern char D_0048B6B8[]; extern s64 D_0048B6C0;
extern float func_003F4D58(float,float); extern int func_003F7148(float); extern s64 func_002AD350(float); extern float func_002AC758(s64); extern int func_003F6EF8(void*); extern int *func_003F73E0(void);
typedef struct {int type; char *name; s64 a,b,result; int error;} E;
float func_003F36F0(float x,float y){E e; int mode; float r=func_003F4D58(x,y); mode=D_0048BD04; if(mode!=-1 && !func_003F7148(y) && !func_003F7148(x) && y==0.0f){e.type=1;e.name=D_0048B6B8;e.error=0;e.a=func_002AD350(x);e.b=func_002AD350(y);if(mode==0)e.result=func_002AD350(x);else e.result=D_0048B6C0;if(D_0048BD04==2 || !func_003F6EF8(&e))*func_003F73E0()=33;if(e.error)*func_003F73E0()=e.error;return func_002AC758(e.result);}return r;}
