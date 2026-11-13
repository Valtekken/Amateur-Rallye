typedef struct{u64 x[6];}P;typedef struct{P*begin,*end,*cap;}V;
P*func_002DE728(P*,P*,P*,s32);P*func_002DE7D0(P*,u32,P*,s32);void func_002DE780(P*,P*,P*);
void*func_002B1FC0(u32);void*func_003D2910(u32);void*func_00152D28(u32);void func_002B2028(void*);extern u32 D_0040E618[];
void func_0033A7C8(V*a,P*pos,u32 n,P*value){if(n){P*oldend=a->end;
if((u32)(a->cap-oldend)>=n){P copy=*value;u32 after=oldend-pos;
if(n<after){P*s,*d;s32 k;func_002DE728(oldend-n,oldend,oldend,0);a->end+=n;s=oldend-n;d=oldend;k=s-pos;while(k>0){--s;--d;*d=*s;--k;}func_002DE780(pos,pos+n,&copy);}
else{func_002DE7D0(oldend,n-after,&copy,0);a->end+=n-after;func_002DE728(pos,oldend,a->end,0);a->end+=after;func_002DE780(pos,oldend,&copy);}}
else{u32 len=oldend-a->begin;u32 total=len+*(len<n?&n:&len);P*buf,*end,*p;u32 bytes;
if(total){bytes=total*48;if(bytes){buf=func_002B1FC0(bytes);if(!buf)buf=func_003D2910(bytes);}else{buf=(P*)D_0040E618[-1];if(buf)D_0040E618[-1]=*(u32*)buf;else buf=func_00152D28(0);}}else buf=0;
end=func_002DE728(a->begin,pos,buf,0);end=func_002DE7D0(end,n,value,0);end=func_002DE728(pos,a->end,end,0);
for(p=a->begin;p<a->end;++p){}
{P*old=a->begin;u32 cap=a->cap-old;if(cap){if(cap*48)func_002B2028(old);else{*(u32*)old=D_0040E618[-1];D_0040E618[-1]=(u32)old;}}}
a->end=end;a->begin=buf;a->cap=buf+total;}}}
