#define F(p,t,o) (*(t*)((char*)(p)+(o)))
typedef void(*Set)(void*,void*);
typedef struct Pos {float x,y,z; s32 w,tag;} Pos;
typedef union Scratch {Pos pos;u8 color[32];} Scratch;
extern void func_003B7438(s32*,s32*,void*);extern void func_003B7460(s32*,s32*,void*);
extern void func_003B7278(s32*,Pos*,void*);extern void func_003B7310(s32*,void*,void*);
extern void func_002364A0(void*);extern void func_002364D0(void*,s32);
extern void*func_003B87D8(void*);extern void*func_003B8868(void*);extern void*func_003B88F8(void*);extern void*func_003B8988(void*);
extern float D_00426508[];extern char D_004264A8[];
#define VC(obj,off,val) F(*(void**)(obj),Set,(off)+4)((char*)(obj)+F(*(void**)(obj),s16,off),(void*)(val))
void func_003B6EF8(s32*a,void*b,void*c,void*d){
Scratch sp;s32 v20,v24,v28,v2c,v30,v34,v38,v3c,v40,v44;void*n;
func_003B7438(a,&v20,d);VC(c,160,v20);
func_003B7438(a,&v24,d);VC(c,152,v24);
func_003B7460(a,&v28,d);
if(v28){sp.pos.x=D_00426508[0];sp.pos.y=D_00426508[1];sp.pos.z=D_00426508[2];sp.pos.tag=-1;sp.pos.w=0;func_003B7278(a,&sp.pos,d);VC(c,120,&sp);}else{VC(c,120,D_004264A8);}
func_003B7460(a,&v2c,d);
if(v2c){func_002364A0(&sp);func_003B7310(a,&sp,d);{s32 value=sp.color[3];s32 total=a[0],count=a[1],max=a[2];total+=value;count++;a[0]=total;a[1]=count;if(max<value)a[2]=value;}VC(c,112,&sp);func_002364D0(&sp,2);}else{VC(c,112,0);}
func_003B7460(a,&v30,d);
if(v30){func_003B7460(a,&v34,d);func_003B7460(a,&v38,d);if(v34){if(v38)n=func_003B87D8(b);else n=func_003B8868(b);}else n=func_003B8988(b);
func_003B6EF8(a,b,n,d);VC(c,128,n);VC(n,144,c);}else{VC(c,128,0);}
func_003B7460(a,&v3c,d);
if(v3c){func_003B7460(a,&v40,d);func_003B7460(a,&v44,d);if(v40){if(v44)n=func_003B87D8(b);else n=func_003B88F8(b);}else n=func_003B8988(b);
func_003B6EF8(a,b,n,d);VC(c,136,n);VC(n,144,c);}else{VC(c,136,0);}
}
