extern void *func_002B1FC0(s32),*func_003D2910(s32);
extern void func_001C6938(void*,void*),func_002B2028(void*),D_002AD390(void*);
extern char D_00477140[];
void func_001E9B90(void*a,s32 b){*(void**)((char*)a+12)=D_00477140;if(*(s32*)((char*)a+4)){func_001C6938(a,*(void**)((char*)*(void**)a+4));*(void**)((char*)*(void**)a+8)=*(void**)a;*(s32*)((char*)*(void**)a+4)=0;*(void**)((char*)*(void**)a+12)=*(void**)a;*(s32*)((char*)a+4)=0;}func_002B2028(*(void**)a);if(b&1)D_002AD390(a);}
void *func_001E9B10(void*a){void*p;*(void**)a=0;*(void**)((char*)a+12)=D_00477140;p=func_002B1FC0(24);if(!p)p=func_003D2910(24);*(void**)a=p;*(s32*)((char*)a+4)=0;*((char*)a+8)=0;*(s32*)p=0;*(s32*)((char*)*(void**)a+4)=0;*(void**)((char*)*(void**)a+8)=*(void**)a;*(void**)((char*)*(void**)a+12)=*(void**)a;return a;}
typedef void(*Handler)(void);extern Handler D_00437E58;extern char D_00439570[],D_00477130[];extern Handler func_002ABA80(int);extern void*func_003D4938(void*,void*);extern void func_003D4F40(void*);
void func_001EA198(int n){void(*raise_error)(void*)=func_003D4F40;Handler h;do{h=D_00437E58;if(!h){char*msg=D_00477130;raise_error(func_003D4938(D_00439570,msg));h=func_002ABA80(1);}h();}while(!func_002B1FC0(n));}
f32 func_001E9468(void*a,s32 i){float*p=*(float**)((char*)a+36);if(i<0)return *p;return p[i];}
