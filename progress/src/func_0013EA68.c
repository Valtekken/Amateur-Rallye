extern void func_0011DFB8(s32),func_0011E278(s32,s32),func_0011E650(s32,s32,s32),func_0013EC60(void*),func_0013F3D0(void*,s32,s32),func_0013F4C8(void*),func_001D4040(char*,const char*),func_001E3D10(s32,void*,s32);
extern s32 func_0011E2B8(s32,s32),func_0011E528(s32),func_001E3598(s32,void*),func_002971B0(s32),func_00297500(void);
static inline void init(char*p,const char*k){func_001D4040(p,k);}
extern char D_004477F0[],D_0044A248[],D_0044B668[];
typedef struct {s32 pad[3],unkC,unk10;} Obj;
void func_0013EA68(Obj *o){s32 sp[4],sp10[4];s32 a,mgr,i,chosen;const char *key;
func_0011DFB8(o->unkC);if(func_0011E528(o->unkC))return;if(o->unk10)return;
mgr=func_001E4280();func_001D4040((char*)sp,D_004477F0);
if(func_001E3598(mgr,sp))func_0011E650(o->unkC,5,0);else func_0011E650(o->unkC,3,0);
mgr=func_001E4280();key=D_0044B668;func_001D4040((char*)sp,key);
if(func_001E3650(mgr,(s32)sp)==0){func_0011E278(o->unkC,7);o->unk10=1;} else {
{s32 mgr2=func_001E4280();init((char*)sp10,key);
if(func_001E3650(mgr2,(s32)sp10)==2){func_0011E278(o->unkC,0x29);o->unk10=1;}}}
func_0013EC60(o);a=func_002971B0(func_00297500());i=2;
do{if(i==a)func_0013F3D0(o,i,1);else func_0013F3D0(o,i,0);i++;}while(i<6);
chosen=func_0011E2B8(o->unkC,1);
if(chosen==-3){func_0013F4C8(o);o->unk10=1;return;}
if(chosen>=-3){if(chosen<6){if(chosen>0){mgr=func_001E4280();func_001D4040((char*)sp,D_0044A248);func_001E3D10(mgr,sp,1);func_0013F4C8(o);o->unk10=1;}}}
}
