/* identical to func_003E1FB8 (matched), with its names changed by decompdecomp */
#define I(p,o) (*(int*)((char*)(p)+(o)))
extern int func_003E1078(void*);
extern int func_003FA310(char*,char*,...);
extern int func_003E0EA0(int,void*);
extern void func_003E16C0(char*);
extern char D_00489B98[];
int func_003E0C98(void*p,unsigned b,int c){void*q=*(void**)((char*)p+0x40); b=(b&0xfffffff)|0x20000000; I(q,0xb0)=1;I(q,0xd8)=b;I(q,0xe4)=c;I(q,0xe0)=0;I(q,0xdc)=0;return func_003E1078(p);}
void func_003E1708(void*p,char*s){int cmd[2];int h=I(p,0x858);if(h&&p&&I(p,12)){cmd[1]=(int)s;cmd[0]=0;func_003E0EA0(h,cmd);}else func_003E16C0(s);}
void func_003E16D0(void*p,char*fmt,int value){char buf[256];func_003FA310(buf,fmt,value);func_003E1708(p,buf);}
void func_003E1FE8(void*p){func_003E1708(p,D_00489B98);}
