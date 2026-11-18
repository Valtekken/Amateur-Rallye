typedef struct {s32 value;} CopyTag;
extern s32 func_002C5160(s32,s32,s32,CopyTag);
s32 func_003978C8(register s32 a,register s32 b,register s32 c,register s32 d){return func_002C5160(a,b,c,(CopyTag){0U});}
extern s32 func_002BB070(void*);
extern void func_003F9698(char*,...);
extern u8 D_00428978[];
extern char D_00480238[],D_004802C0[];
typedef struct {s32 v;} __attribute__((packed)) UnalignedS32;
s32 func_002BBBD0(void *a,s32 b){s32 r=0; s32 i; s32 zero=0; s32 ok=func_002BB070(D_00428978);u8 *p;if(ok!=zero){i=b;p=D_00428978+i*12;}else p=0;if(p){r=((UnalignedS32*)(*(u8**)p+8))->v;}else func_003F9698(D_00480238);return r;}
s32 func_002BBD08(void *a,s32 b,s32 c){s32 r=0;u8 *p;if(func_002BB070(D_00428978))p=D_00428978+b*12;else p=0;if(p){if(c<0)c=0;else{long n=(long)(u32)((UnalignedS32*)(*(u8**)p+8))->v;if(c<n){}else{c=n;}}*(int*)(p+8)=c;r=1;}else func_003F9698(D_004802C0);return r;}
extern u16 D_00480138;extern s8 D_00496840[],D_00496841[];
void *func_002BB8E0(void *self,s8 *s){int i;if(*s!=92){i=0;loop:if(i<31){s8 c=s[i];if(c){if(c==58)s+=i+1;else{i++;if(c!=92)goto loop;}}}}{s8 *d,*e;*(u16*)D_00496840=D_00480138;d=D_00496841;e=d+253;{s8 *next=s+1;s32 c=*s;if((c^92)==0)s=next;}if((u32)d<(u32)e)do{s32 c=*s;s32 v=92;if((c^47)!=0)v=c;*d=v;d++;s++;}while((u32)d<(u32)e);}D_00496840[255]=0;return D_00496840;}
