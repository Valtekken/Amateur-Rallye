
typedef struct {s32 a[3];} Cell;
typedef struct {Cell *begin,*end,*cap;} Cells;
typedef struct {Cells cells;f32 step;f32 size[3];u8 pad[24];f32 origin[3];f32 maximum[3];s32 count[3];s32 xy;} Grid;
extern void func_002EED08(Grid*,Cell*,s32,Cells*);
extern void func_002B2028(void*);
extern u32 D_0040E618[];
Grid *func_002EDF10(Grid *a,f32 *b,f32 step){Cells tmp; s32 i=2; s32 *p=a->count;a->cells.begin=0;a->cells.end=0;a->cells.cap=0;do{f32 extent=b[3]-b[0];f32 span;s32 n;*(f32*)((u8*)p-60)=extent;n=(s32)(extent/step)+1;*p=n;span=n*step;*(f32*)((u8*)p-24)=(b[0]+b[3])*0.5f-span*0.5f;*(f32*)((u8*)p-12)=b[3];*(f32*)((u8*)p-60)=span;b++;p++;}while(--i>=0);a->xy=a->count[0]*a->count[1];a->step=step;tmp.begin=0;tmp.end=0;tmp.cap=0;func_002EED08(a,a->cells.begin,a->xy*a->count[2],&tmp);{Cell *p=tmp.begin;while(p<tmp.end){p++;}}{s32 n=tmp.cap-tmp.begin;if(n){if(n*12)func_002B2028(tmp.begin);else{*(u32*)tmp.begin=D_0040E618[-1];D_0040E618[-1]=(u32)tmp.begin;}}}return a;}
