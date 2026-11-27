typedef struct Buf {void *data; int n; char pad[18]; unsigned char flags;} Buf; typedef struct R {Buf *b; int n;} R;
extern void func_003D4D70(void *),func_003D6F88(void *); extern int func_003D9E30(void *,char *,int,int,int,int *),func_003DA6B8(void *);
R *func_003D63E0(R *r,char *dst,int n,signed char delim){int c,ok; Buf *b; void *p;
r->n=0;if(n<=0){r->b->flags|=2;return r;} b=r->b; if(b->flags){b->flags|=2;ok=0;}else{if(b->n && ((int*)b->data)[2]==((int*)b->data)[1])func_003D4D70((void*)b->n);ok=1;}
if(ok){p=r->b->data;r->n=func_003D9E30(p,dst,n-1,delim,-1,&c);if(c==-1 || (c=func_003DA6B8(p))==-1){{int mask=1; if(!r->n)mask=3; r->b->flags|=mask;}}else if(c!=(unsigned char)delim){r->b->flags|=2;func_003D6F88(p);}}else c=-1;
dst[r->n]=0;if(c==(unsigned char)delim)r->n++;return r;}
