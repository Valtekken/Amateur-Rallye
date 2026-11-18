s32 func_003A0BD8(s32,s32);s32 func_00219DA8(s32,s32);
s32 func_003A5DC8(register s32 a,register s32 b){func_003A0BD8(a,b);func_00219DA8(a+12,b+12);return a;}

extern char *D_0043A908;
void func_003D8AE0(void){char*p=D_0043A908;if(p)do{if(!(*(s32*)p&2))(*(void(**)(void*,s32,s32))(*(char**)(p+80)+84))(p,0,0);p=*(char**)(p+52);}while(p);}
void func_003D7E50(void*);
void func_003D8B60(s32*a,s32*b){s32 f,v;a[1]=(s32)b;f=*b;if(f&2048){func_003D7E50(b);f=*b;}{s32 x=b[1];v=(f&256)?b[2]:b[3];a[2]=x-v;}a[0]=b[12];b[12]=(s32)a;}
typedef struct N{struct N*next;}N;
void func_003D8BD8(N*a){char*o=*(char**)((char*)a+4);N**p=(N**)(o+48);N*c=*p;if(c)do{if(c==a){*p=c->next;return;}p=(N**)c;{N*t=*(N*volatile*)p;if(!t)break;c=t;}}while(c);}
