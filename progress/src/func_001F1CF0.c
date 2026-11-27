extern int func_001F0248(int,s8*),func_001D6278(int,char*,int),func_003FA760(char*,char*);extern void func_001D2CD8(void*,char*);extern char D_00477550[];
int func_001F1CF0(int *a, char *b){char buf[200]; s8 count,x,y; int i; int *p,*flag; char *str;
if(!func_001F0248(*a,&count)||count>=4)return 0;
flag=(int*)(b+0x3c); i=0; str=b+0x10; p=(int*)b;
for(;i<3;i++,flag++,str+=0x14,p+=5){if(i<count){if(!func_001F0248(*a,&x))return 0; p[0]=x!=0;if(!func_001F0248(*a,&y))return 0;p[1]=y!=0;if(!func_001D6278(*a,buf,200))return 0;func_001D2CD8(str,buf);*flag=func_003FA760(buf,D_00477550)!=0;}else *flag=0;}return 1;}
