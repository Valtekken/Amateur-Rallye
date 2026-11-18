typedef struct 
{
  f32 value;
  u32 pad;
  s64 ticks;
  f32 scale;
  f32 inv;
  s32 shift;
} Timer;
s32 func_002BF920(void);
s64 D_002BFA80(s32);
f32 __floatdisf(s64);
extern s32 D_0043BFCC;
extern f32 D_0043BFD0;
void func_003E8150(Timer *p);
extern u8 D_0048BD29[];
s8 *func_003FB548(s8 *a);
typedef struct Re
{
  u8 pad[0x38];
  s32 ready;
} Re;
typedef struct 
{
  u8 pad[0x54];
  Re *r;
} Stream;
extern Re *D_004404DC;
void func_003F7820(Re *, s32);
s32 func_003FB738(Re *, Stream *, s32, s32);
s32 func_003FB6C0(Stream *a, register s32 b, register s32 c)
{
  Re *r = a->r;
  unsigned int new_var;
  if (!a->r)
  {
 do { r = D_004404DC; a->r = r; } while (0);
  }
  if (!r->ready)
  {
    func_003F7820(r, 0);
  }
  new_var = func_003FB738(a->r, a, b, c);
  {
    s32 v = new_var;
    return v;
  }
}

typedef struct Node
{
  u32 prev;
  u32 size;
  struct Node *next;
  struct Node *back;
} Node;
typedef struct 
{
  u32 a;
  u32 b;
  Node *top;
} Arena;
extern Arena D_004404E0;
extern u32 D_00440910[];
void func_003FF678(void);
