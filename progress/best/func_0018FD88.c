extern void *D_002AD408(u32),*func_001891D0(void*);
extern void func_0018B798(void*,void*),func_0018FAF0(void*,void*,void*),func_001D4040(void*,const char*),func_001E3F80(s32,void*,void*),func_001E33C8(s32,void*,int),func_002B2028(void*);
extern char D_0044E838[],D_0040E618[];
static inline char *str(char **pp){char *p=*pp;int n=*(int*)(p-16);if(!n)return D_0044E838;p[n]=0;return *pp;}
void func_0018FD88(void *a,void *b,void *c){char *p[4];u32 key[4];void *obj;int x;char *h;
func_0018FAF0(p,a,b);obj=func_001891D0(D_002AD408(0x344));func_0018B798(obj,c);
x=func_001E4280();func_001D4040(key,str(p)); {void *k=key;func_001E3F80(x,k,obj);func_001E4280();}
x=func_001E4280();func_001D4040(key,str(p));func_001E33C8(x,key,0);
h=p[0]-16;if(--*(int*)(h+8)==0){if(*(int*)(h+4)+16)func_002B2028(h);else {*(void**)h=*(void**)(D_0040E618-4);*(void**)(D_0040E618-4)=h;}}
}
