typedef struct Entry{s32 w[7];}Entry;extern Entry D_0049B9D0[][4];extern char*func_003CA3B0(s32,s32);extern void func_003F931C(void*,void*,s32);
s32 func_003CA460(s32 a,s32 b,void*c){char*p;if(!D_0049B9D0[a][b].w[4])return 0;p=func_003CA3B0(a,b);func_003F931C(c,p,*(s32*)(p+96));return *(s32*)(p+96);}
extern void func_003CB550(void*,void*);
void func_003CBA48(char*a,void*b,void*c,void*d,void*e){func_003CB550(a,b);func_003CB550(a+16,c);func_003CB550(a+32,d);func_003CB550(a+48,e);}
extern s32 PollSema_2(s32);extern s32 SignalSema_2(s32);extern s32 func_00405E90(void*,s32,s32,void*,s32,void*,s32,s32,s32);
extern s32 D_004361F0,D_004361F4;typedef struct Rpc{s32 w[10];}Rpc;extern Rpc D_0049BC40;extern s32 D_0049BCC0[],D_0049D200[];
s32 func_003CC1D0(s32 a){s32 r;if(PollSema_2(D_004361F4)<0)return -200;if(!D_0049BC40.w[9]){SignalSema_2(D_004361F4);return -100;}D_0049BCC0[5]=a;r=func_00405E90(&D_0049BC40,20,1,D_0049BCC0,48,D_0049D200,4,0,0);if(!r)D_004361F0=20;else SignalSema_2(D_004361F4);return r;}
s32 func_003CC288(s32 a){s32 r;if(PollSema_2(D_004361F4)<0)return -200;if(!D_0049BC40.w[9]){SignalSema_2(D_004361F4);return -100;}D_0049BCC0[1]=a;r=func_00405E90(&D_0049BC40,21,0,D_0049BCC0,48,D_0049D200,4,0,0);if(r){SignalSema_2(D_004361F4);return r;}SignalSema_2(D_004361F4);return D_0049D200[0];}
