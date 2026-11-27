extern char D_00446858[];
extern void *D_002AD408(s32);
extern void *func_0021E290(void *), *func_00205BF8(void *);
extern void func_0021E540(void *, void *), func_001D4040(void *, void *), func_0021E748(void *,void *), func_0021E740(void *,s32), func_001D4810(void *,void *), func_002062A8(void *,void *),func_00205CE0(void *,s32);
typedef struct {float x,y,z;} Vec3;
typedef struct {s32 pad[20]; float p50,p54,p58; s32 pad2[7]; s64 p78;} Temp2;
void *func_00113778(void *arg0, void *arg1, Vec3 *arg2,s32 arg3,f32 fparg0) {
void *obj; Temp2 *temp_2; s32 sp[4]; Vec3 *v; s64 val; f32 fval;
obj=func_0021E290(D_002AD408(0x7C));
temp_2=func_00205BF8(D_002AD408(0x90));
val=temp_2->p78; val &= -3; val |= 2; val &= -2; temp_2->p78=val;
v=(Vec3 *)&temp_2->p50;
temp_2->p50=arg2->x; v->y=arg2->y; v->z=arg2->z;
fval=*(float *)((char *)arg0+0x88); temp_2->p50+=fval; v->y+=fparg0;
*(s32 *)((char *)obj+0x74)=0; func_0021E540(obj,temp_2);
func_001D4040(sp,arg1); func_0021E748(obj,sp); func_0021E740(obj,2);
sp[0]=0; func_001D4810(sp,D_00446858); func_002062A8(temp_2,sp); func_00205CE0(temp_2,arg3); return obj;
}
