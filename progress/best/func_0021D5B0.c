extern void func_00217220(void *, void *);
extern void func_00217598(void *, void *, int);
extern void *func_002B1FC0(int);
extern void *func_003D2910(int);
s32 func_001D3920(void *arg0);
typedef struct 
{
  char d[20];
} E176;
void func_002176B0(E176 *p, E176 *end);
void *func_0021D110(void *arg0);
void func_0021D5B0(void *arg0, void *arg1, f32 fparg0)
{
  f32 x = *((f32 *) arg1);
  f32 sq = fparg0 * fparg0;
  *((f32 *) arg0) = x;
  {
    f32 y = *((f32 *) (((u8 *) arg1) + 4));
    *((f32 *) (((u8 *) arg0) + 4)) = y;
  }
  {
    f32 z = *((f32 *) (((u8 *) arg1) + 8));
 do { *((f32 *) (((u8 *) arg0) + 0x10)) = sq; *((f32 *) (((u8 *) arg0) + 8)) = z; *((f32 *) (((u8 *) arg0) + 0xC)) = fparg0; } while (0);
  }
}
