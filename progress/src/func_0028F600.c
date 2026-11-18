typedef struct {s32 value;} CopyTag;
extern s32 func_002C5160(s32,s32,s32,CopyTag);
s32 func_003978C8(register s32 a,register s32 b,register s32 c,register s32 d){return func_002C5160(a,b,c,(CopyTag){0});}
extern void func_002062A8(void*,s32),func_002060F8(void*),func_00205CE0(void*,s32);
s32 func_0028F600(void*a,void*b,s32 c){void*p;if(b && (p=*(void**)((u8*)b+0x4c))){func_002062A8(p,c);func_002060F8(p);func_00205CE0(p,0);return 1;}return 0;}
extern void func_0028F658(void*,void*,s32,void*);
void func_0028F2E0(void*a,void*b){void*p;*(void**)((u8*)a+28)=b;p=*(void**)((u8*)b+76);if(p){s32 x=*(s32*)((u8*)p+8);if(!*(s32*)((u8*)a+20))func_0028F600(a,b,x-40);else func_0028F658(a,b,x-40,(u8*)a+24);*(s32*)((u8*)a+12)=1;}}
extern char D_0047B528[],D_0047CE38[];
extern void func_001D4040(void*,const char*);
typedef struct {float x,y,z;} V;
void*func_0028CD80(s32*p){s32 k[4];V v;func_001D4040(k,D_0047B528);v.x=0;p[1]=k[0];p[0]=-1;p[2]=(s32)D_0047CE38;*(float*)(p+4)=320;v.z=0;p[3]=0;v.y=0;*(V*)(p+5)=v;return p;}
