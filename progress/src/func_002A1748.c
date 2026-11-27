typedef struct Node {struct Node *child,*next; char pad[24]; s32 type;} Node;
extern s32 D_00494C18,D_00494C20,D_00494C28;
extern s32 func_002A1700(void); extern void func_002A1188(s32);
extern s32 func_001E6050(void*,void*,s32,s32);
extern void func_001E3B20(s32,s32),func_001E3918(s32,s32),func_001E4338(s32,s32),func_00224528(void*,void*);
s32 func_002A1748(void *unused,Node *p,s32 key,s32 mode) {
 s32 sp0[4],sp10[4]; Node *n; s32 h;
 if(p->type!=D_00494C18) return 0;
 if(mode) func_002A1188(func_002A1700());
 n=p->child;
 while(n) {
  if(n->type==D_00494C20) {
   sp0[0]=0; h=func_001E6050(sp0,n,key,1);
   if(!h) return 0;
   if(mode) func_001E3B20(func_001E4280(),h); else func_001E3918(func_001E4280(),h);
   if(h) func_001E4338(h,3);
  } else if(n->type==D_00494C28) func_00224528(sp10,n);
  else return 0;
  n=n->next;
 }
 return 1;
}
