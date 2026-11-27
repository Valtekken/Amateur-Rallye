extern char D_0047C498[],D_0047C4A8[],D_0047C6B8[];
extern char *func_001D4010(void *); extern int func_003FA580(const char *,const char *);
extern void func_001D4040(void *,const char *); extern int func_001E38C8(int,void *),func_001E3598(int,void *); extern void func_001E3D10(int,void *,int);
extern void func_002A23C8(void *,void *,void *); extern void *D_002AD408(int); extern void func_001D3310(void *); extern void func_002A19D0(void *,void *,int,int);
void func_002A1D30(char *a,void *b,int c,int d) {
 int sp[4], sp10[4]; int x,y,flag,val; void *p;
 if(func_003FA580(func_001D4010(b),D_0047C498)==0) {
 x=func_001E4280(); func_001D4040(sp,D_0047C4A8);
 flag=0;val=0; if(func_001E38C8(x,sp)) {{ int temp=func_001E4280();func_001D4040(sp10,D_0047C4A8);val=func_001E3598(temp,sp10); }} else flag=1;
 if(!flag && !val) return;
 y=func_001E4280();func_001D4040(sp,D_0047C4A8);func_001E3D10(y,sp,0);
 }
 sp[0]=0;func_002A23C8(a,b,sp);*(int *)(a+12)=3;p=D_002AD408(0x24);func_001D3310(p);*(void **)((char *)p+0x14)=D_0047C6B8;func_002A19D0(p,sp,c,d);
}
