typedef struct { u8 *b, *p, *e; } V258;
extern void func_00219F70(void*, void*);
extern void *func_0021A138(void*, void*, void*, void*);
extern void *func_0021A1F8(void*, void*, void*, void*);
extern void *func_0021A198(void*, void*, void*);
extern void func_00219DA8(void*, void*);
extern void func_00156C38(void*, void*);
extern void func_00208590(void*, u32);
extern void *func_002B1FC0(u32);
extern void *func_003D2910(u32);
extern void *func_00152D28(void*);
extern void func_002B2028(void);
extern void *D_0040E618[];

#define FH (D_0040E618[-1])
#define D24(x) ((s32)((s32)(x) * 0xAAAAAAAB) >> 3)

void func_0021A258(V258 *v, u8 *src, u32 n, void *dst) {
 s32 m,cnt; u8 *cur,*q,*cur_save; void *blk; s32 sp20; u8 sp[0x20]; s32 *sp20p;
 if(n != 0) {
 if((u32)D24(v->e-v->p)>=n) {
 func_00219F70(sp,dst); cur=v->p; m=D24(cur-src);
 if(n<(u32)m) {
 cur_save = cur;
 func_0021A138(cur-n*24,cur,cur,0);
 cur = cur-n*24;
 q = cur; cnt = D24(cur-src);
 v->p = v->p + n*24;
 if(cnt > 0) {
   cur_save -= 24;
   while(cnt > 0) {
     cur -= 24;
     func_00156C38(cur_save,cur);
     cnt--;
     func_00219DA8(cur_save+12,cur+12);
     cur_save -= 24;
   }
 }
 func_0021A198(src,src+n*24,sp);
 } else {
 func_0021A1F8(cur,(void*)(n-m),sp,0); q=cur+(n-m)*24;
 v->p = v->p + (n-m)*24; func_0021A138(src,cur,v->p,0);
 v->p = v->p + m*24; func_0021A198(src,cur,sp);
 }
 func_00208590(sp,2);
 } else {
 u8 *cur2; cur2=v->p; sp20=D24(cur2-v->b);
 sp20p = &sp20;
 m=sp20+*((n<=(u32)sp20)?sp20p:(s32*)&n);
 if(m!=0) {
   if(m*24!=0) {
     void *b1=func_002B1FC0(m*24);
     if(b1!=0) blk=b1; else blk=func_003D2910(m*24);
   } else if(FH!=0) { blk=FH; FH=*(void**)FH; } else blk=func_00152D28(0);
 } else blk=0;
 src=func_0021A138(src,v->p,func_0021A1F8(func_0021A138(v->b,src,blk,0),(void*)n,dst,0),0);
 cur=v->p; q=v->b;
 if((u32)q<(u32)cur) {do {func_00208590(q,2); q+=24;} while((u32)q<(u32)cur);}
 cnt=D24(v->e-v->b);
 if(cnt!=0) {if(cnt*24!=0) func_002B2028(); else {*(void**)v->b=FH; FH=v->b;}}
 v->p=src; v->b=blk; v->e=(u8*)blk+cnt*24;
 }
 }
}
