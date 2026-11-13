typedef struct{s32*begin,*end,*cap;}V;extern u32 D_0040E618[];
void*func_002B1FC0(u32);void*func_003D2910(u32);void*func_00152D28(u32);void func_002B2028(void*);void func_003F93CC(void*,void*,s32);
void func_0032BB38(register V*a,register s32*pos,register s32*value){if(a->end!=a->cap){s32*end=a->end;s32 v;if(end)*end=end[-1];end=a->end;a->end=end+1;v=*value;{s32 bytes=((s32)((char*)(end-1)-(char*)pos)>>2)*4;func_003F93CC((char*)end-bytes,pos,bytes);}*pos=v;}
else{u32 len=a->end-a->begin;u32 total=len?len*2:1;u32 bytes=total*4;s32*buf,*p,*finish;
if(total){if(bytes){buf=func_002B1FC0(bytes);if(buf==0)buf=func_003D2910(bytes);}else{buf=(s32*)D_0040E618[-1];if(buf)D_0040E618[-1]=*buf;else buf=func_00152D28(0);}}else{buf=0;bytes=0;}
p=(s32*)((char*)buf+((char*)pos-(char*)a->begin));func_003F93CC(buf,a->begin,(pos-a->begin)*4);if(p)*p=*value;finish=p+1;{s32 n=a->end-pos;finish+=n;func_003F93CC(p+1,pos,n*4);}
{s32*old=a->begin;u32 n=a->cap-old;if(n){if(n*4)func_002B2028(old);else{*old=D_0040E618[-1];D_0040E618[-1]=(u32)old;}}}
a->end=finish;a->cap=(s32*)((char*)buf+bytes);a->begin=buf;}}
