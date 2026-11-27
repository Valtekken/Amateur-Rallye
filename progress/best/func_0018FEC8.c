extern void *D_002AD408(u32), *func_0018D9D0(void*);
extern void func_0018DDF0(void*,void*), func_0018FAF0(void*,void*,void*), func_001D4040(void*,const char*), func_001E3F80(s32,void*,void*), func_001E33C8(s32,void*,int), func_002B2028(void*);
extern char D_0044E838[];
extern u32 D_0040E618[];
static inline char *str(char **pp){char *p=*pp;int n=*(int*)(p-16);if(!n)return D_0044E838;p[n]=0;return *pp;}
static inline void *mk(void *p, const char *s){func_001D4040(p,s);return p;}
void func_0018FEC8(void *a,void *b,void *c){char *p[4];u32 key[4];void *obj;int x;char *h;void *k;
func_0018FAF0(p,a,b);obj=func_0018D9D0(D_002AD408(0x3C));func_0018DDF0(obj,c);
x=func_001E4280();k=mk(key,str(p));func_001E3F80(x,k,obj);
x=func_001E4280();mk(key,str(p));func_001E33C8(x,k,0);
h=p[0]-16;if(--*(int*)(h+8)==0){if(*(int*)(h+4)+16)func_002B2028(h);else {*(u32*)h=D_0040E618[-1];D_0040E618[-1]=(u32)h;}}
}
