extern void *func_003FFA18(void *,int);
extern int func_003FFDD8(u32 *);
extern int func_003FFD50(u32);
void *func_00400788(void *a, s64 bits, int *exp, int *n) {
 u32 w[2]; int shift, count, length; u64 v; u32 hi; void *obj; u32 *out;
 obj=func_003FFA18(a,1); hi=(u32)(bits>>32); v=((u64)(hi & 0x7fffffff)<<32) | ((u64)bits & 0xffffffffULL); out=(u32 *)((char *)obj+20); w[1]=hi&0xfffff; 
 if(v>>52) w[1]|=0x100000;
 w[0]=(u32)v;
 if(w[0]) {shift=func_003FFDD8(w); if(shift){out[0]=w[0]|(w[1]<<-shift);w[1]>>=shift;}else out[0]=w[0]; count=w[1]?2:1;out[1]=w[1];*(int *)((char *)obj+16)=count;}
 else {count=1;shift=func_003FFDD8(w+1)+32;out[-1]=1;out[0]=w[1];}
 if(v>>52){*exp=(v>>52)+shift-0x433;length=53-shift;}else {*exp=shift-0x432;length=count*32-func_003FFD50(out[count-1]);}
 *n=length;return obj;
}
