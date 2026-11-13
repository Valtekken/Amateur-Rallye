typedef struct{char*begin,*end,*cap;}V;
extern void*func_002B1FC0(unsigned);extern void*func_003D2910(unsigned);extern void*func_00152D28(unsigned);extern void func_002B2028(void*);extern void*func_003F93CC(void*,const void*,unsigned);extern void func_00155438(char*,char*,s64*);extern char*func_00155470(char*,unsigned,s64*);extern u32 D_0040E618[];
static inline char*raw(unsigned n){char*p=func_002B1FC0(n);if(!p)p=func_003D2910(n);return p;}
static inline char*alloc(unsigned n){char*p;if(n){unsigned bytes=n*8;if(bytes)return raw(bytes);p=(char*)D_0040E618[-1];if(!p)return func_00152D28(0);D_0040E618[-1]=*(u32*)p;return p;}return 0;}
static inline void back(char*first,char*last,char*dest){int bytes=((last-first)>>3)*8;func_003F93CC(dest-bytes,first,bytes);}
static inline unsigned* maxp(unsigned*a,unsigned*b){return *a<*b?b:a;}
void func_001554A0(V*v,char*pos,unsigned count,s64*value){
    s64 tmpv;unsigned size;
    if(count){
        if((unsigned)((v->cap-v->end)>>3)>=count){
            char*old=v->end;unsigned after=(old-pos)>>3;tmpv=*value;
            if(count<after){
                unsigned bytes=count*8;
                func_003F93CC(old,old-bytes,bytes);
                v->end+=count*8;
                back(pos,old-count*8,old);
                func_00155438(pos,pos+count*8,&tmpv);
            }else{
                func_00155470(old,count-after,&tmpv);
                v->end+=(count-after)*8;
                func_003F93CC(v->end,pos,after*8);
                v->end+=after*8;
                func_00155438(pos,old,&tmpv);
            }
        }else{
            char*old=v->end;unsigned n;char*buf,*p,*end;int prefix,suffix,sz;
            size=(old-v->begin)>>3;
            n=size+*maxp(&size,&count);
            buf=alloc(n);
            prefix=pos-v->begin;
            func_003F93CC(buf,v->begin,(prefix>>3)*8);
            p=func_00155470(buf+prefix,count,value);
            suffix=v->end-pos;
            end=p+suffix;
            func_003F93CC(p,pos,(suffix>>3)*8);
            {char*first=v->begin;sz=(v->cap-first)>>3;
                if(sz){if(sz*8)func_002B2028(first);else{u32*fp=(u32*)first;*fp=D_0040E618[-1];D_0040E618[-1]=(u32)fp;}}
            }
            v->begin=buf;v->end=end;v->cap=buf+n*8;
        }
    }
}
