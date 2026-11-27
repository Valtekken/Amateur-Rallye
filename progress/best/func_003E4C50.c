extern int func_003E5438(int,int); extern void func_003E4DF0(int,void *,int,int,int,int,int,int);
void func_003E4C50(int a,char *b,int c,char *d,int i,int f,int g,int h,int j,int k,int l){char *p; volatile int unused[4];
if(f==1){if(g==0 && k==0){int x=func_003E5438(a,1);*(int*)(d+i*4+8)=x;*(int*)(d+i*4)=x;}p=b+i*8;func_003E4DF0(a,p,c,h,j,k,l,0);*(int*)(p+16)=*(int*)p;*(int*)(p+20)=*(int*)(p+4);}
else {d[i]=func_003E5438(a,1);func_003E4DF0(a,b+i*8,c,h,j,k,l,0);d[i+2]=func_003E5438(a,1);func_003E4DF0(a,b+i*8+16,c,h,j,k,l,0);}}
