#define I(p,o) (*(int*)((char*)(p)+(o)))
extern int func_003E1300(void*,int,int);
extern int func_003E14A8(void*);extern void func_003E16D0(void*,char*,int);
extern unsigned func_003E5670(void*);
extern char D_00489A28[];
int func_003E1078(register void*a){register int status=0;register unsigned state=1;register void*p=*(void**)((char*)a+64);register int address=I(p,0xd8);I(p,0)=0;if(address&63){func_003E16D0(p,D_00489A28,address);return -1;}I(p,0x820)=0;do {if(status!=-1){read:state=func_003E5670(p);if(state&&I(p,0x174)!=I(p,0xd4)&&I(p,0x848))goto read;}switch(state){case 0:func_003E14A8(a);I(p,0)=1;break;case 1:I(p,0xa8)=0;I(p,0xa4)=0;I(p,0xa0)=0;status=func_003E1300(a,0,I(p,0x94));I(p,0xa0)++;break;case 2:status=func_003E1300(a,I(p,0xa4),I(p,0x98));I(p,0xa4)++;break;case 3:case 4:status=func_003E1300(a,I(p,0xa8),I(p,0x9c));I(p,0xa8)++;break;}if(I(p,0x820))break;}while(!I(p,0));return 1;}
