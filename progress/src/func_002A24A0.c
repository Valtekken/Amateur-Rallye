typedef struct N { struct N *child,*next; char pad[24]; int type; } N;
extern int D_00494C30,D_00494C38,D_00494C40,D_00494C48,D_00494C50,D_00494C58;
extern void func_002942D8(void *,N *),func_002949A8(void *,N *),func_00295298(void *,N *),func_00295BC8(void *,N *),func_001FF618(void *,N *);
int func_002A24A0(void *unused,N *arg) {
 N *p; int x; int tmp;
 if(arg->type != D_00494C30) return 0;
 p=arg->child;
 while(p) {
 x=p->type;
 if(x==D_00494C38) {tmp=0;func_002942D8(&tmp,p);}
 else if(x==D_00494C40) {tmp=0;func_002949A8(&tmp,p);}
 else if(x==D_00494C48) {tmp=0;func_00295298(&tmp,p);}
 else if(x==D_00494C50) {tmp=0;func_00295BC8(&tmp,p);}
 else if(x==D_00494C58) {tmp=0;func_001FF618(&tmp,p);}
 else return 0;
 p=p->next;
 }
 return 1;
}
