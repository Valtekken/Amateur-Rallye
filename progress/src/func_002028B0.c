extern void D_002AD390(void *); extern void func_002B2028(void *); extern u32 D_0040E618[];
typedef struct {void *b,*e,*c;} Vec;
void func_002028B0(Vec *arg0, int arg1) {
 void *oe=arg0->e,*cur=arg0->b,*ob; int m,sz,cnt,sz3;
 if((u32)cur<(u32)oe) do {
 Vec *vc=(Vec*)cur; u32 ec=(u32)vc->c; void *eb=vc->b;
 m=(s32)(ec-(u32)eb)>>2;
 if(m!=0){sz=m<<2; if(sz!=0){cur=(char*)cur+12;func_002B2028(eb);goto next;}
 *(void**)eb=(void*)D_0040E618[-1];D_0040E618[-1]=(u32)eb;}
 cur=(char*)cur+12;
 next:; }while((u32)cur<(u32)oe);
 u32 oc=(u32)arg0->c; ob=arg0->b;cnt=(s32)((oc-(u32)ob)*0xAAAAAAABu)>>2;
 if(cnt!=0){sz3=cnt*12;if(sz3!=0)func_002B2028(ob);else{*(void**)ob=(void*)D_0040E618[-1];D_0040E618[-1]=(u32)ob;}}
 if(arg1&1)D_002AD390(arg0);
}
