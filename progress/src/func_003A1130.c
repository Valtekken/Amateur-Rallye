typedef struct {s32 *begin, *end, *cap;} VecP;
extern u32 func_003A4070(VecP*);
extern s32 func_003A1020(s32*,s32*,s32*);
extern s32* func_003A10A0(VecP*,u32,s32*,s32*);
extern s32* func_003A0EA8(s32*,s32*,s32*);
extern void func_003A37C0(s32*,s32*);
extern void func_003A36D0(VecP*,s32*,s32);
extern s32* func_003A3A98(VecP*);
extern s32* func_003A3AD0(VecP*);
extern u32 func_003A3B08(VecP*);
extern s32* func_003AA5F0(VecP*);
VecP *func_003A1130(register VecP *a, VecP * volatile b){
volatile u32 n; volatile s32* p; register u32 size;
if(b!=a){
size=func_003A3B08(b); n=size;
if(func_003A4070(a)<n){
p=func_003A10A0(a,n,func_003A3A98(b),func_003A3AD0(b));
func_003A37C0(a->begin,a->end);
func_003A36D0(a,a->begin,(s32)(a->cap - a->begin));
a->begin=p;a->cap=a->begin+n;
}else if(func_003A3B08(a)>=n){
p=func_003A0EA8(func_003A3A98(b),func_003A3AD0(b),func_003AA5F0(a));
func_003A37C0(p,a->end);
}else{
func_003A0EA8(func_003A3A98(b),func_003A3A98(b)+func_003A3B08(a),a->begin);
func_003A1020(func_003A3A98(b)+func_003A3B08(a),func_003A3AD0(b),a->end);
}a->end=a->begin+n;
}return a;}
