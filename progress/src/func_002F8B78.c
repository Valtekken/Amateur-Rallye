
extern void func_00374BB8(s32,s32,s32,s32);
typedef struct {s32 *indices; u8 pad[32]; u8 *base;} Pool;
void func_002F8B78(register Pool *a,s32 b,s32 c,s32 d,s32 e){s32 *p=(s32*)(a->base+*(s32*)((u8*)a->indices+(b<<2))*300);func_00374BB8(*p,c,d,e);}
extern void func_003F9698(const char*,char*);
extern char D_00484510[];
typedef struct {volatile s32 v; s32 pad[3];} Iter;
void func_002F8AF8(register void *a){Iter i,cur;i.v=0;cur.v=*(s32*)((u8*)a+48);if(cur.v){do{cur.v=i.v;func_003F9698(D_00484510,*(char**)((u8*)a+36)+i.v*300+4);{s32 n=i.v+1;s32 c=*(s32*)((u8*)a+48);i.v=n;cur.v=c;if(n==c)break;}}while(1);}}
extern s32 func_003FA760(char*,void*);
void *func_002F8A38(register void *o,register void *a,register void *b){Iter i,cur,saved;i.v=0;cur.v=*(s32*)((u8*)a+48);if(cur.v){do{cur.v=i.v;if(!func_003FA760(*(char**)((u8*)a+36)+i.v*300+4,b)){saved.v=i.v;cur.v=(*(s32**)((u8*)a+12))[i.v];*(s32*)o=cur.v;return o;}{s32 n=i.v+1;s32 c=*(s32*)((u8*)a+48);i.v=n;cur.v=c;if(n==c)break;}}while(1);}*(s32*)o=*(s32*)((u8*)a+88);return o;}
extern void func_003C8B08(void*,s32);
extern void func_003C8710(void*,s32,s32,s16);
extern void func_003C8798(void*,s32,s32,s16);
void func_002F1868(register void *a,s32 b){s32 bit=b&1;s16 inv;void *p;func_003C8B08((u8*)a+0x2600,bit);inv=1-bit;p=(u8*)a+0x2660;if(bit)p=(u8*)a+0x27d0;func_003C8710(p,2048,2048,inv);p=(u8*)a+0x26e0;a=(u8*)a+0x2850;if(bit)p=a;func_003C8798(p,2048,2048,inv);}
