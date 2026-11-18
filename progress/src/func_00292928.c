extern "C" {
s32 func_001DF4C8(s32);
void func_002924A0(void*);void func_002A5790(void*,void*,void*);
void func_00292928(void*a){char*o=*(char**)((char*)a+4);if(o){char*v=*(char**)(o+16); ((void(*)(void*,s32))*(void**)(v+12))(o+*(s16*)(v+8),3);}*(s32*)((char*)a+4)=0;*(s32*)a=0;}
void*func_00292970(void*a,void*b){func_00292928(a);s32 v=*(s32*)((char*)b+4);if(v) *(s32*)((char*)a+4)=func_001DF4C8(v);*(s32*)a=*(s32*)b;return a;}
void*func_00292330(void*a,void*b){s32*p=(s32*)a;for(s32 i=3;i!=-1;i--){p[0]=0;p[1]=0;p+=2;}((s32*)a)[8]=0;((s32*)a)[11]=0;((s32*)a)[12]=0;((s32*)a)[9]=0;func_002924A0(a);void*sp=a;void**e=*(void***)((char*)b+4);if(e!=*(void***)((char*)b+8)){if(e)*e=a;*(void***)((char*)b+4)=*(void***)((char*)b+4)+1;}else func_002A5790(b,e,&sp);return a;}
}
