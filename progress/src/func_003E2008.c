/* identical to func_003E1FF8 (matched), with its names changed by decompdecomp */
#define I(p,o) (*(int*)((char*)(p)+(o)))
extern int func_003E1078(void*);
extern void func_003F2778(void*);
int func_003E0CE0(void*p,unsigned b,int c){void*q=*(void**)((char*)p+64);b=(b&0xfffffff)|0x20000000;I(q,0xe4)=c;I(q,0xd8)=b;I(q,0xb0)=0;I(q,0xe0)=0;I(q,0xdc)=0;return func_003E1078(p);}
void func_003E2008(char*p){func_003F2778(*(char**)(p+64)+76);}
typedef unsigned int U128 __attribute__((mode(TI)));
typedef struct{unsigned char*d;int shift,n,m,stride;unsigned char*a,*b;} Job;
void func_003E2FB8(register Job*p){register unsigned char*d=p->d,*a=p->a,*b=p->b;register int n=p->n,mask=-1;do{do{int k;unsigned short*out=(unsigned short*)d;for(k=0;k<16;k++){int j=k+p->shift;out[k]=j<16?a[j]:b[j-16];}n--;a+=p->stride;b+=p->stride;d+=p->stride*2;}while(n>0);a+=128;b+=128;n=p->m;if(!(mask&n))break;mask=0;}while(1);}
void func_003E3030(register Job*p){register unsigned char*d=p->d,*a=p->a,*b=p->b;register int n,mask,outer=-1;do{n=p->n;mask=-1;do{do{int k;for(k=0;k<8;k++){int j=(k+p->shift)&15;((unsigned short*)d)[k]=j<8?a[j]:b[j-8];}--n;a+=p->stride;b+=p->stride;d+=p->stride*2;}while(n>0);a+=320;b+=320;n=p->m;if(!(mask&n))break;mask=0;}while(1);a=p->a+64;b=p->b+64;d=p->d+128;if(!outer)break;outer=0;}while(1);}
