typedef struct{s32 value;}CopyTag;extern s32 func_002C5160(s32,s32,s32,CopyTag);
s32 func_003978C8(register s32 a,register s32 b,register s32 c,register s32 d){return func_002C5160(a,b,c,(CopyTag){0});}

extern int func_0027E698(void*,float);
#define F(p,o) (*(float*)((char*)(p)+(o)))
void func_002A8248(void*p,float f){if(f<-1.0f)F(p,56)=-1.0f;else{if(f>1.0f)F(p,56)=1.0f;else F(p,56)=f;}func_0027E698((char*)p+164,F(p,56));}
typedef struct Node{int a,b;struct Node*next;int val;}Node;
extern void func_001C6938(void*,int),func_002B2028(void*);
void func_002A6DF0(void*p,Node*n){if(n){do{Node*next;func_001C6938(p,n->val);next=n->next;func_002B2028(n);n=next;}while(n);}}
extern float func_003F3E80(float);
float func_002A4160(float*p){float x=p[0],y=p[1],z=p[2];float n=x*x+y*y+z*z;float r=0;if(!(n<=1.1920929e-7f)){float d=n-1.0f;int b=0;if(-0.0000011920929f<=d&&d<=0.0000011920929f)b=1;r=1.0f;if(!b)r=1.0f/__builtin_sqrtf(n);}return r;}
