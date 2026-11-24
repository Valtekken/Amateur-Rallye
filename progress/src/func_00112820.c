extern s32 func_00206588(void*);
extern void func_002068C0(s32, s32, s32*, s32*);
extern void func_002063A0(void*, void*);
typedef struct { f32 f0, f1; s32 z, pad; } Loc;
void func_00112820(void *arg0, void *arg1, s32 arg2, s32 arg3, f32 fp) {
 s32 v10,v14; Loc loc; s32 obj=func_00206588(arg1); if(!obj)return;
 func_002068C0(obj,arg2,&v10,&v14);
 { f32 d=-(f32)v10*0.5f; loc.f0=d; loc.f1=fp;loc.z=0;
 func_002063A0(arg1,&loc);
 {void *v=*(void**)arg1;void (*fn)(void*,s32)=*(void**)((char*)v+0x14);fn((char*)arg1+*(s16*)((char*)v+0x10),arg2);}
 if(arg3){void *p=*(void**)((char*)arg0+0x5c);void *q=*(void**)((char*)p+0x4c);
 *(f32*)((char*)q+0x50)=d+(-20.0f)+*(f32*)((char*)arg1+0x50);
 *(f32*)((char*)q+0x54)=fp+20.0f+*(f32*)((char*)arg1+0x54);}}
}
