/* identical to func_002B8368 (matched), with its names changed by decompdecomp */
extern void func_002B2028(void*);extern void func_002BCB20(void*);
void func_002B82E8(s32*a,s32*b){s32 i;for(i=0;i<4;i++){if((s32)b==a[i+1])break;}if(i<4){*b=a[0];a[0]=(s32)b;}else{func_002B2028(b);a[5]--;}}
void*func_002BCC48(void*a){s32 i,*p;*(s32*)a=0;*(s32*)((char*)a+20)=0;p=(s32*)((char*)a+4);for(i=3;i>=0;i--){func_002BCB20(a);*p=*(s32*)a;p++;}return a;}
extern s32 func_002BDB28(); extern void *func_002BD648(s32,s32,s32,s32); extern s32 func_002BD590(s32,void*,s32); extern s32 func_003F94D0(s32,s32,s32); extern s32 func_003F9698(void*); extern char D_0047F660[],D_0047F6D0[];
s32 func_002B7CB8(void*a,s32 b,void**c,s32 d,s32*e,s32 f,s32 g,s32 h){s32 x,t,z;void*r,*v;if(h)func_003F94D0(h,0,8);v=*(void**)((char*)a+8);x=(*(s32(**)(void*,s32))((char*)v+124))((char*)a+*(s16*)((char*)v+120),b);t=func_002BDB28();r=func_002BD648(t,x,1,0);func_002BD590(t,r,1);z=0;if(r)z=*(s32*)((char*)r+4);*e=z;*c=r;return 1;}
s32 func_002B7DD8(s32 a,void*b){s32 r=0;func_002BDB28();if(b)r=*(s32*)((char*)b+4);return r;}
s32 func_002B7C58(void){char*p=D_0047F6D0;func_003F9698(p);do {} while(p);func_003F9698(p);return 1;}
s32 func_002B7B88(void){char*p=D_0047F660;func_003F9698(p);do {} while(p);func_003F9698(p);return 0;}
