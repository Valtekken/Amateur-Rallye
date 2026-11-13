extern void *func_0017E620(void);extern char *func_001D4010(void*);extern void func_001D4040(void*,const char*);
void *func_00118590(void *out,s32 unused,s32 id){s32 key[4];char *o=func_0017E620();char *v=*(char**)o;char *(*f)(void*,s32,s32)=*(void**)(v+44);char *str=f(o+*(s16*)(v+40),57,id);func_001D4040(key,str);func_001D4040(out,func_001D4010(key));return out;}
