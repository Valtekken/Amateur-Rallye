typedef struct{s32 value;}CopyTag;extern s32 func_002C5160(s32,s32,s32,CopyTag);
s32 func_003978C8(register s32 a,register s32 b,register s32 c,register s32 d){return func_002C5160(a,b,c,(CopyTag){0});}
extern void func_002AC8C0(float*,s32*);extern float func_002AC7B0(s32*);extern s32 func_002ACFA0(s32*,s32*);
s32 func_002AD0B8(float a,float b){s32 x[4],y[4];func_002AC8C0(&a,x);func_002AC8C0(&b,y);return func_002ACFA0(x,y);}
float func_002AD108(s32 a){s32 p[4];u32 m,t;s32 e;p[0]=3;p[1]=(u32)a>>31;if(!a)p[0]=2;else{p[2]=30;if(p[1]){if((u32)a==0x80000000)return -2147483648.0f;p[3]=-a;}else p[3]=a;m=p[3];if(m<=0x3fffffff){e=p[2];do{t=m*2;e--;m=t;}while(t<=0x3fffffff);p[2]=e;p[3]=t;}}return func_002AC7B0(p);}
s32 func_002AD1C0(float a){s32 p[4];u32 v;func_002AC8C0(&a,p);if(((u32)p[0]^2)==0)return 0;else if((u32)p[0]<2)return 0;if((p[0]^4)!=0){if(p[2]<0)return 0;if(p[2]<31){v=(u32)p[3]>>(30-p[2]);return p[1]?-v:v;}}return p[1]?0x80000000:0x7fffffff;}
