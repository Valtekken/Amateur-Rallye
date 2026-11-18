extern u32 func_003FA9B8(void);
u32 func_002BFD98(u8*p){u32 s=func_003FA9B8(),step=(s>>5)|1,n=s;if(s>=step){do{u8 b=*p;u8 c=b;if(c==47)c=92;n-=step;p++;s^=(s<<5)+(s>>2)+(c&223);}while(n>=step);}return s;}
void*func_002BE0A8(void*a,void**p,s32 k){void*c=*p;while(c){if(*(volatile s32*)((char*)c+8)==k)break;c=*(void**)c;}return c;}
void func_002BE070(void*a,void**p,void*q){void*next=*(void**)q;void**prev=*(void***)((char*)q+4);if(prev)*prev=next;else *p=next;next=*(void**)q;if(next)*(void**)((char*)next+4)=*(void**)((char*)q+4);}
s32 func_002BDF90(s32*p,s32 k){s32 r=0,v=p[0];while(v){if(k==*(volatile s32*)(p+1)){r=v;break;}p+=2;v=p[0];}return r;}
