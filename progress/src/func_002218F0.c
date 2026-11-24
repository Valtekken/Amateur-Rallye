extern int *func_0021F4B0(void); extern int *func_00222CF8(void); extern void func_00221378(void*,int,int);
#define I(p,o) (*(int*)((char*)(p)+(o)))
#define F(p,o) (*(float*)((char*)(p)+(o)))
void func_002218F0(void *a) { int *v,n,off; char *p; float x, dt=0.033333335f;
 I(a,0xa4)++;
 if(!*func_0021F4B0()) {
 v=func_00222CF8(); n=((int)((v[1]-v[0])*0xE9BD37A7)>>4)-1;
 if(n>=0) { off=n*0x170; do { n--; p=(char*)*func_00222CF8()+off; x=F(p,0x18); off-=0x170;
 F(p,0x148)=F(p,0x100)*dt;
 F(p,0x14c)=F(p,0x2c)*dt;
 F(p,0x150)=F(p,0x1c)*dt;
 F(p,0x154)=F(p,0x20)*x*dt;
 F(p,0x158)=F(p,0x24)*x*dt;
 F(p,0x15c)=F(p,0x28)*x*dt;
 F(p,0x160)=F(p,0xb4)*dt;
 F(p,0x164)=F(p,0xdc)*dt;
 F(p,0x168)=F(p,0x5c)*dt;
 F(p,0x16c)=F(p,0x34)*dt;
 }while(n>=0); }
 I(a,0x84)=I(a,0x80)=I(a,0);
 func_00221378(a,0,I(a,0x10));
 }} 
