typedef struct {u8 p[16];s32 *a; s32 e; s32 c; s32 *b; s32 f; s32 d; void *g;} Obj;
void func_002E4770(Obj *p){s32 n,i;n=(p->e-(s32)p->a)>>2;for(i=0;i<n;i++){s32 *q=*(s32**)((char*)p->a+(i<<2));if(q)q[7]=0;}n=(p->f-(s32)p->b)>>2;for(i=0;i<n;i++){s32 *q=*(s32**)((char*)p->b+(i<<2));if(q)q[3]=0;}*(s32*)((char*)p->g+0x38)=0;}
extern s32 D_004292FC,D_004297E8;
extern s32 func_0030C630(s32,s32,s32,s32,s32,s32,s32,s32,s32);
extern s32 func_0030DDD0(s32,s32,s32);
extern s32 func_0030DE80(s32,s32,s32,s32,s32,s32,s32);
void func_002CE930(s32 a,s32 b,s32 c){func_0030C630(a,0,0,c,0,D_004292FC,0,0,0);func_0030DDD0(0,0,D_004297E8);func_0030DE80(1,0,1,1,0,c,D_004297E8*2+0x5010);}
extern s32 func_0030CC90(s32);
extern s32 func_0030D9C0(s32,s32,s32);
extern s32 func_0030D4D0(s32);
void func_002CE8C8(s32 a,s32 b){D_004292FC=0xEB3;D_004297E8=0x14280;func_0030CC90(3);func_0030D9C0(b,a,0);func_0030D4D0(0);}
extern s32 func_0030CAB8(void);
extern char D_00429868[];
void func_002CE730(s32 a){if((u32)(a-2)<46){s32 *p;func_0030CAB8();p=(s32*)(D_00429868+a*16);p[0]|=128;p[3]=0;p[1]=0;p[2]=0;}}
