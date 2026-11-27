typedef struct {char *begin,*end,*cap;} V;
extern void *func_002B1FC0(unsigned); extern void *func_003D2910(unsigned); extern void func_002B2028(void*); extern void *func_003F93CC(void*,const void*,unsigned);
extern void func_001D9018(char*,char*,u8*); extern char *func_001D9050(char*,unsigned,u8*);
static inline char *alloc(unsigned n){char *p;if(n){p=func_002B1FC0(n);if(!p)p=func_003D2910(n);return p;}return 0;}
static inline unsigned *maxp(unsigned*a,unsigned*b){return *a<*b?b:a;}
void func_001D9080(V*v,char*pos,unsigned count,u8*value){
 u8 tmp; unsigned size;
 if(count){
 if((unsigned)(v->cap-v->end)>=count){
 char *old=v->end; unsigned after=old-pos; tmp=*value;
 if(count<after){
 func_003F93CC(old,old-count,old-(old-count));
 v->end+=count;
 {unsigned bytes=(old-count)-pos;func_003F93CC(old-bytes,pos,bytes);}
 func_001D9018(pos,pos+count,&tmp);
 }else{
 func_001D9050(old,count-after,&tmp);
 v->end+=count-after;
 func_003F93CC(v->end,pos,after);
 v->end+=after;
 func_001D9018(pos,old,&tmp);
 }
 }else{
 char *old=v->end; unsigned n; char *buf,*p,*end; int prefix,suffix;
 size=old-v->begin; n=size+*maxp(&size,&count);
 buf=alloc(n);
 prefix=pos-v->begin; func_003F93CC(buf,v->begin,prefix);
 p=func_001D9050(buf+prefix,count,value);
 suffix=v->end-pos; end=p+suffix; func_003F93CC(p,pos,suffix);
 if(v->cap!=v->begin)func_002B2028(v->begin);
 v->begin=buf;v->end=end;v->cap=buf+n;
 }
 }
}
