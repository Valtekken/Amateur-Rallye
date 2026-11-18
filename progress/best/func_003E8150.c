typedef struct {f32 value;u32 pad;s64 ticks;f32 scale,inv;s32 shift;} Timer;
s32 func_002BF920(void);s64 D_002BFA80(s32);f32 __floatdisf(s64);extern s32 D_0043BFCC;extern f32 D_0043BFD0;
void func_003E8150(Timer*p){f32 f;if(!D_0043BFCC){s64 now=D_002BFA80(func_002BF920());s32 sh=p->shift;s64 shifted=now>>sh;s64 delta;if(sh==0)shifted=now;delta=shifted-p->ticks;if(delta>>31)p->value=(f32)delta*p->inv;else p->value=(f32)(s32)delta*p->inv;}else p->value=D_0043BFD0-(f32)p->ticks*p->inv;}
extern u8 D_0048BD29[];
s8 *func_003FB548(s8*a){s8*p=a;u8 c,t;if(*a){c=*(u8*)a;do{if(D_0048BD29[(s8)c]&2)*p=(s8)c-32;p++;t=*(u8*)p;c=t;}while(t);}return a;}
typedef struct Re {u8 pad[0x38];s32 ready;} Re;
typedef struct {u8 pad[0x54];Re*r;} Stream;
extern Re*D_004404DC;void func_003F7820(Re*,s32);s32 func_003FB738(Re*,Stream*,s32,s32);
s32 func_003FB6C0(Stream*a,register s32 b,register s32 c){Re*r=a->r;if(!r){r=D_004404DC;a->r=r;}if(!r->ready)func_003F7820(r,0);{s32 v=func_003FB738(a->r,a,b,c);return v;}}
typedef struct Node{u32 prev,size;struct Node*next,*back;} Node;
typedef struct {u32 a,b;Node*top;} Arena;extern Arena D_004404E0;extern u32 D_00440910[];
void func_003FF678(void){volatile s32 i=1;u32 total=D_004404E0.top->size&0xfffffffcu;s32 n=total>=16;do{Node*head=(Node*)((u32)&D_004404E0+(u32)(i*8));Node*p=head->back;i++;if(p!=head){do{u32 size=p->size;n++;p=p->back;total+=size&0xfffffffcu;}while(p!=head);}}while(i<128);D_00440910[1]=n;D_00440910[7]=D_00440910[0]-total;D_00440910[8]=total;D_00440910[9]=D_004404E0.top->size&0xfffffffcu;}
