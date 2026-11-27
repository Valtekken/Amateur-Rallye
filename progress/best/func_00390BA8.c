extern void func_001D2DE8(void *,int),func_001D6278(void *,void *,int),func_0030BE70(void *,int *),func_00390A98(void **,void *),func_003F9698(char *,int,int); extern void *func_003A4EE8(void *,int); extern char D_004878C8[];
void func_00390BA8(void **a,char *b){volatile int count=0,i,v; char *p=*a; char *vt=*(char **)(p+8)+0x90; void (*fn)(void *,int *)=*(void (**)(void *,int *))(vt+4);
 fn(p+*(short*)vt,(int*)&count);if(count!=3){func_003F9698(D_004878C8,count,3);for(;;){}}
 for(i=0;i<3;i++){v=0;func_0030BE70(*a,(int*)&v);*(int*)(b+0x3c+i*4)=v;if(v)func_00390A98(a,b+i*0x14);}
 v=0;p=*a;vt=*(char**)(p+8)+0x90;fn=*(void (**)(void *,int *))(vt+4);fn(p+*(short*)vt,(int*)&v);
 if(v){func_001D2DE8(b+0x54,v);func_001D6278(*a,func_003A4EE8(b+0x54,0),v+1);}
}
