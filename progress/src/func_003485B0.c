extern char*func_00152B80(u32,s32*);
extern char*D_0040E618[];
void*func_003485B0(u32 n){s32 count=20;char*chunk=func_00152B80(n,&count);char*cur,*next;s32 i;
if(count==1)return chunk;{D_0040E618[((n+7)>>3)-1]=next=chunk+n;for(i=1;;i++){cur=next;next=next+n;if(count-1==i){*(char**)cur=0;break;}*(char**)cur=next;}}return chunk;}
typedef void (*Handler)(void);
extern Handler D_00437E58;
extern char D_00439570[], D_00487F40[];
extern Handler func_002ABA80(int);
extern int func_002B1FC0(int);
extern void *func_003D4938(void *,void *);
extern void func_003D4F40(void *);
void func_003B68F0(int p) {
 Handler h;
void (*raise_error)(void *)=func_003D4F40;
 do {
 h=D_00437E58;
 if(!h) { char *msg=D_00487F40; raise_error(func_003D4938(D_00439570,msg)); h=func_002ABA80(1); }
 h();
 } while(!func_002B1FC0(p));
}
typedef void (*Handler2)(void);
extern Handler2 D_00437E58;
extern char D_00439570[], D_00487F60[];
extern Handler2 func_002ABA80(int);
extern int func_002B1FC0(int);
extern void *func_003D4938(void *,void *);
extern void func_003D4F40(void *);
void func_003B75A8(int p) {
 Handler2 h;
void (*raise_error2)(void *)=func_003D4F40;
 do {
 h=D_00437E58;
 if(!h) { char *msg=D_00487F60; raise_error2(func_003D4938(D_00439570,msg)); h=func_002ABA80(1); }
 h();
 } while(!func_002B1FC0(p));
}
typedef void (*Handler3)(void);
extern Handler3 D_00437E58;
extern char D_00439570[], D_00487FA0[];
extern Handler3 func_002ABA80(int);
extern int func_002B1FC0(int);
extern void *func_003D4938(void *,void *);
extern void func_003D4F40(void *);
void func_003B8C20(int p) {
 Handler3 h;
void (*raise_error3)(void *)=func_003D4F40;
 do {
 h=D_00437E58;
 if(!h) { char *msg=D_00487FA0; raise_error3(func_003D4938(D_00439570,msg)); h=func_002ABA80(1); }
 h();
 } while(!func_002B1FC0(p));
}
