typedef struct { char *begin,*end,*cap; } V;
extern void func_001E3990(void *);
extern void func_001E4CC8(void *);
extern void func_001E5DE8(void *,int);
extern void func_001EB7A8(V *,void *,unsigned,void *);
void func_001E39E8(V *v) {
 register unsigned n=(int)((v->end-v->begin)*0xB6DB6DB7)>>2; char *p,*end; register int bytes; unsigned size; char tmp[28];
 func_001E3990(v);
 end=v->end; p=v->begin; bytes=end-p;
 while(p<end) { func_001E5DE8(p,2); p+=28; }
 v->end-=bytes;
 func_001E4CC8(tmp);
 size=(int)((v->end-v->begin)*0xB6DB6DB7)>>2;
 if(n<size) { end=v->end; p=v->begin+n*28; bytes=end-p; while(p<end) { func_001E5DE8(p,2); p+=28; } v->end-=bytes; }
 else func_001EB7A8(v,v->end,n-size,tmp);
 func_001E5DE8(tmp,2);
}
