s32 func_003A0BD8(s32,s32);s32 func_00219DA8(s32,s32);
s32 func_003A5DC8(register s32 a,register s32 b){func_003A0BD8(a,b);func_00219DA8(a+12,b+12);return a;}
s8*func_003FAF48(s8*p,s8*q){s32 n;if(!*p)return !*q?p:0;do{n=0;if(!*q)return p;if(*q==*p){do{n++;if(!q[n])return p;}while(q[n]==p[n]);}p++;}while(*p);return 0;}
s8*func_003FAFE0(s8*p,s8*d,s8**save){s8*q,c,t,*ret;if(!p){p=*save;if(!p)return 0;}again:c=*p++;q=d;while((t=*q++)!=0){if(c==t)goto again;}ret=p-1;if(!c){*save=0;return 0;}for(;;){c=*p++;q=d;do{t=*q++;if(t==c){if(t)p[-1]=0;else p=0;*save=p;return ret;}}while(t);}}
extern s32 D_004404DC;s64 func_003FB080(s32,s32,s32,s32);
s64 func_003FB2B8(s32 a,s32 b,s32 c){return func_003FB080(D_004404DC,a,b,c);}
