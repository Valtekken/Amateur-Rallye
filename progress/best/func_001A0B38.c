extern s32 *func_001A12E0(void); extern void func_001E3E90(s32,s32,float);
void func_001A0B38(s32 unused,s32 a,s32 b,void *p,void *q){
 float speed=__builtin_fabsf(*(float*)((char*)p+0x40)**(float*)((char*)p+12))+__builtin_fabsf(*(float*)((char*)p+0x40)**(float*)((char*)*(void**)((char*)q+8)+20));
 float threshold=10.0f, scale=1.0f, k; int id=*(int*)((char*)p+0x28);
 if(id==func_001A12E0()[0]) {threshold=15.0f;k=0.02f;goto calc;}
 if(id==func_001A12E0()[1]) scale=(speed-10.0f)*0.1f;
 else if(id==func_001A12E0()[3]) threshold=8.0f;
 else if(id==func_001A12E0()[2]) {threshold=8.0f;k=0.01f;calc: scale=(speed-threshold)*k;}
 else if(id==func_001A12E0()[4]) threshold=0.0f;
 if(scale>1.0f)scale=1.0f;
 if(threshold<speed)func_001E3E90(a,b,scale);else func_001E3E90(a,b,0.0f);
}
