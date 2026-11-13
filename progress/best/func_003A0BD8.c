typedef struct {s32 begin,end,cap;} Vec28;
extern u32 func_003A05C0(Vec28*);
extern s32 func_003A0910(s32,s32,s32);
extern s32 func_003A0990(Vec28*,u32,s32,s32);
extern s32 func_003A0B68(s32,s32,s32);
extern void func_003AA758(s32,s32);
extern void func_003AA7B8(Vec28*,s32,s32);
extern s32 func_003AAAA0(Vec28*);
extern s32 func_003AAAD8(Vec28*);
extern u32 func_003AAB10(Vec28*);
extern s32 func_003AAB90(Vec28*);
Vec28 *func_003A0BD8(register Vec28 *a, Vec28 * volatile b){
volatile u32 n; volatile s32 p; register u32 size;
if(b!=a){
size=func_003AAB10(b); n=size;
if(func_003A05C0(a)<n){
p=func_003A0990(a,n,func_003AAAA0(b),func_003AAAD8(b));
func_003AA758(a->begin,a->end);
func_003AA7B8(a,a->begin,(s32)((a->cap-a->begin)*0xB6DB6DB7u)>>2);
a->begin=p;a->cap=a->begin+n*28;
}else if(func_003AAB10(a)>=n){
p=func_003A0B68(func_003AAAA0(b),func_003AAAD8(b),func_003AAB90(a));
func_003AA758(p,a->end);
}else{
func_003A0B68(func_003AAAA0(b),func_003AAAA0(b)+func_003AAB10(a)*28,a->begin);
func_003A0910(func_003AAAA0(b)+func_003AAB10(a)*28,func_003AAAD8(b),a->end);
}a->end=a->begin+n*28;
}return a;}
