#define I(p,o) (*(int*)((char*)(p)+(o)))
extern int func_003E1078(void*);
extern void func_003F2778(void*);
int func_003E0D28(void*p,unsigned b,int w,int h){int n=w*h;void*q=*(void**)((char*)p+64);b=(b&0xfffffff)|0x20000000;I(q,0xe0)=h*16;I(q,0xd8)=b;I(q,0xe4)=n;I(q,0xb0)=0;I(q,0xdc)=w*16;return func_003E1078(p);}
void func_003E2008(char*p){func_003F2778(*(char**)(p+64)+76);}
typedef struct{unsigned char*d;int shift,n,m,stride;unsigned char*a,*b;} Job;
static inline unsigned sample(unsigned char*a,unsigned char*b,int j){j&=31;return j<16?a[j]:b[j-16];}
void func_003E30C8(register Job*p){register unsigned char*a=p->a,*b=p->b,*d=p->d;register int n=p->n,mask=-1;unsigned prev[16];register int k;for(k=0;k<16;k++)prev[k]=sample(a,b,k+p->shift);if(!n)goto tail;do{rows:a+=p->stride;b+=p->stride;for(k=0;k<16;k++){unsigned v=sample(a,b,k+p->shift);((u16*)d)[k]=(prev[k]+v+1)>>1;prev[k]=v;}--n;d+=p->stride*2;if(n>0)goto rows;tail:a+=128;b+=128;n=p->m;if(!(mask&n))break;mask=0;goto rows;}while(1);}
void func_003E3250(register Job*p){register unsigned char*a=p->a,*b=p->b,*d=p->d;register int n=p->n,mask=-1;do{do{register int k;for(k=0;k<16;k++){unsigned v=sample(a,b,k+p->shift),w=sample(a,b,k+p->shift+1);((u16*)d)[k]=(v+w+1)>>1;}--n;a+=p->stride;b+=p->stride;d+=p->stride*2;}while(n>0);a+=128;b+=128;n=p->m;if(!(mask&n))break;mask=0;}while(1);}
