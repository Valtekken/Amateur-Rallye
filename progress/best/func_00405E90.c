typedef struct { int attr,init,max,pad[5]; } SemaParam;
extern int CreateSema_2(SemaParam *); extern void DeleteSema_2(int); extern void WaitSema_2(int);
extern int func_004053F8(int,void *,int,int,int,int); extern void func_004055A0(int,int);
extern void *func_00405818(void *); extern void func_004058C0(void *); extern char D_0049FF00[];
int func_00405E90(void *a,int b,int flags,int d,int e,int f,int g,int h,int j) {
 void *t; int x; SemaParam sp;
 t=func_00405818(D_0049FF00); if(!t)return -1;
 {int q=*(int*)((char*)t+0x18); *(int*)((char*)a+0x20)=j; *(int*)((char*)a+4)=q; *(int*)a=(int)t;}
 *(int*)((char*)a+0x1c)=h; *(int*)((char*)t+0x20)=b; *(int*)((char*)t+0x24)=e;
 *(int*)((char*)t+0x28)=f; *(int*)((char*)t+0x2c)=g; *(int*)((char*)t+0x14)=(int)t;
 *(int*)((char*)t+0x34)=*(int*)((char*)a+0x24); *(int*)((char*)t+0x1c)=(int)a;
 if(!(flags&2)){ if(d==f) func_004055A0(d,e>=g?e:g); else {if(e>0)func_004055A0(d,e); if(g>0)func_004055A0(f,g);} }
 if(flags&1){ if(h==0) *(int*)((char*)t+0x30)=0; else *(int*)((char*)t+0x30)=1; *(int*)((char*)a+8)=-1;
 if(func_004053F8(0x8000000a,t,0x40,d,*(int*)((char*)a+0x14),e)) goto success; goto fail;
 } else {sp.init=1;sp.max=0;x=CreateSema_2(&sp);*(int*)((char*)a+8)=x;if(x<0){func_004058C0(t);return -3;} *(int*)((char*)t+0x30)=1;
 if(!func_004053F8(0x8000000a,t,0x40,d,*(int*)((char*)a+0x14),e)){DeleteSema_2(*(int*)((char*)a+8)); fail: func_004058C0(t); return -2;} WaitSema_2(*(int*)((char*)a+8));DeleteSema_2(*(int*)((char*)a+8)); success: return 0;}

}
