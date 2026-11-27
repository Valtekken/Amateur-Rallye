extern volatile unsigned short func_001E2460(void *,void *);
extern void func_001E2470(void *,const char *,void *);
extern void func_001E2510(void *,const char *,void *);
extern void func_001E25B0(void *,const char *,void *);
extern void func_001E2A48(void *,const char *,void *);
extern char D_0047BA70[],D_0047BA78[],D_0047BA90[],D_0047BA98[],D_0047BAA0[],D_0047BAB8[],D_0047BAD0[],D_0047BAE0[];
void func_00296950(char *a,char *b,void *c){
 int reg[1], flag=0; float *pos=(float *)(a+0x10); char *p;
 func_001E2460(reg,c);
 func_001E25B0(reg,D_0047BA70,a+0xC);
 func_001E2470(reg,D_0047BA78,&flag);
 func_001E2A48(reg,D_0047BA90,pos);
 func_001E2A48(reg,D_0047BA98,a+0x1C);
 func_001E2510(reg,D_0047BAA0,a+0x28);
 func_001E2510(reg,D_0047BAB8,a+0x2C);
 func_001E2510(reg,D_0047BAD0,a+0x30);
 func_001E2470(reg,D_0047BAE0,a+0x6C);
 if(flag){p=*(char **)(b+0x4C);if(!p)p=*(char **)(b+0x50);pos[0]=*(float *)(p+0x50);p+=0x50;pos[1]=*(float *)(p+4);pos[2]=*(float *)(p+8);}
 *(float *)(a+0x30)=((float (*)(float,float,float))func_0015ACE0)(*(float *)(a+0x30),0.1f,0.9f);
}
