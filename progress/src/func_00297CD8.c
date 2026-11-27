extern s32 func_00297500(void),func_002971B0(s32),func_002971F8(s32);
extern void func_002973F0(s32,s32),func_00297398(s32,s32);
extern void *func_001E37E8(s32,void*); extern void func_001E3EC0(s32,void*,s32);
typedef struct {char pad[0x14]; s32 name,list; char pad2[8]; s32 id,left,right;} Obj;
typedef struct {s32 *begin,*end;} List;
void func_00297CD8(Obj *p) {
 List *l; s32 i,action,n; void *key;
 if(func_002971B0(func_00297500()) != p->id) return;
 l=func_001E37E8(func_001E4280(),&p->list); if(!l) return;
 i=func_001E3650(func_001E4280(),(s32)&p->name);
 action=func_002971F8(func_00297500()); func_002973F0(func_00297500(),0);
 if(action==1) i++; if(action==7) i--;
 if(action==4 && p->left) func_00297398(func_00297500(),p->left);
 if(action==5 && p->right) func_00297398(func_00297500(),p->right);
 if(i<=-1)i=0; n=l->end-l->begin; if((u32)i >= (u32)n)i=n-1; if(i<=-1)i=0;
 func_001E3EC0(func_001E4280(),&p->name,i);
}
