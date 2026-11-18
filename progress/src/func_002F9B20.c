typedef struct {u8 pad[0x1b0];s32 w,h,x,format;} Image;
typedef struct {Image*image;u8 pad[0x114];s32 flag;u8 rest[16];} Entry;
typedef struct {s32*indices;u8 pad[0x20];Entry*textures;u8 rest[0x50];u32 count;} Mgr;
s32 func_002F9AD0(Mgr*);void func_00376658(Entry*);void func_003768A8(Entry*);void func_002F9840(Mgr*,s32,s32,s32);
void func_002F9B20(Mgr*m,u32*k,s32 arg){s32 *map=m->indices;Entry*e=&m->textures[*(s32*)((u32)map+(*k<<2))];Image*i;s32 a,b,n;func_00376658(e);i=e->image;a=2;if(!e->flag)a=4;b=1;if(!(i->format<2))b=2;n=i->w*i->h;n*=a;n*=b;func_002F9840(m,*k,n,arg);while(m->count>0x440000u){u32 idx=func_002F9AD0(m);s32 *map=m->indices;func_003768A8(&m->textures[*(s32*)((u32)map+(idx<<2))]);}}
