typedef struct {s32 type;char*name;f64 arg1,arg2,retval;s32 err;} MathEx;
extern f64 func_002AD350(float);
extern float func_002AC758(f64);
extern float func_003F5F40(float);
extern int func_003F7148(float);
extern int func_003F6EF8(MathEx*);
extern int*func_003F73E0(void);
extern int D_0048BD04;extern char D_0048B6F8[];extern f64 D_0048B700;
float func_003F3E80(float x){MathEx e;float z;int mode;
z=func_003F5F40(x);mode=D_0048BD04;
if(mode!=-1){if(func_003F7148(x)==0){if(x<0.0f){e.type=1;e.name=D_0048B6F8;e.err=0;e.arg1=e.arg2=func_002AD350(x);if(mode==0)e.retval=0.0;else e.retval=D_0048B700;
if(D_0048BD04==2||func_003F6EF8(&e)==0)*func_003F73E0()=33;
if(e.err)*func_003F73E0()=e.err;
return func_002AC758(e.retval);}}else return z;}return z;}
