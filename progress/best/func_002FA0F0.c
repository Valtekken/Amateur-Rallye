extern void *D_002AD5A8(int); extern void D_002AD530(void *);
extern void func_003E7B20(int,int),FlushCache_2(int);
extern void func_003C7B98(void*,int,int,int,int,int,int,int);
extern void func_003C7EC0(void*,void*);
extern void func_002FA250(void); extern unsigned func_00377788(void*),func_003777A0(void*);
void func_002FA0F0(char *arg) {
 char buf[96]; unsigned i,j,off,end; unsigned width=64; int flag; void *raw; unsigned *p;
 func_002FA250(); off=func_00377788(*(void**)(arg+60)); end=func_003777A0(*(void**)(arg+60));
 raw=D_002AD5A8(0x4100); flag=off<end; p=(unsigned*)(((u32)raw+255)&~255);
 for(i=0;i<width;i++) for(j=0;j<width;j++) p[i*width+j]=0;
 func_003E7B20(0,0);
 if(flag) do {
 func_003C7B98(buf,(short)off,(short)(flag<<16>>16),0,0,0,width,width);
 off+=(width*width)>>6; FlushCache_2(0); func_003C7EC0(buf,p);
 } while(off<end);
 func_003E7B20(0,0); if(raw) D_002AD530(raw);
}
