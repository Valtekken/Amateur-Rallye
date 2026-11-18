typedef struct{s32 value __attribute__((aligned(1)));}CopyTag;extern s32 func_002C5160(s32,s32,s32,CopyTag);
s32 func_003978C8(register s32 a,register s32 b,register s32 c,register s32 d){return func_002C5160(a,b,c,(CopyTag){0});}
typedef struct Node{ s32 flags; s32 w[12];struct Node*next;}Node;extern Node*D_0043A908;
void func_003D7D08(Node*a){s32 f=a->flags;if(f&128){Node**p=&D_0043A908;while(*p){if(*p==a){*p=a->next;break;}p=&(*p)->next;}a->flags=f&~128;}}
s64 func_003D7D98(void*a){s64 n=(s32)(*(u32*)((u8*)a+8)-*(u32*)((u8*)a+12));void*p=*(void**)((u8*)a+48);while(p){s32 k=*(s32*)((u8*)p+8);p=*(void**)p;if(k<(s32)n)n=k;}return (s32)n;}
void func_003D7DE0(volatile s32*a){s32 old=a[2];s32 x=a[11];s32 f=a[0];a[11]=old;s32 y=a[9];f&=~256;s32 z=a[3];a[1]=y;a[0]=f;a[2]=x;a[9]=z;a[3]=y;}
