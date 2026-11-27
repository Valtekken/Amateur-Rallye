typedef struct Dim
{
  int pad[2];
  int x;
  int y;
} Dim;
typedef struct Map
{
  int scale;
  int pad;
  Dim *dim;
} Map;
typedef struct Obj
{
  Map *map;
  float a;
  float b;
  float c;
  float div;
} Obj;
typedef struct Vec
{
  float x;
  float y;
  float z;
} Vec;
extern void func_00260790(Obj *, void *, int *, int *);
extern int func_002779A0(Map *, int, int);
extern unsigned char *func_001C68B0(Map *, int, int);
extern void func_00260D30(Vec *, Obj *, float);
Vec *func_002608D8(Vec *out, Obj *obj, void *p)
{
  int x = 0;
  int y = 0;
  int n;
  func_00260790(obj, p, &x, &y);
  n = obj->map->dim->x * obj->map->scale;
  if (x >= n)
  {
    x = n - 1;
  }
  else
    if (x < 0)
  {
    x = 0;
  }
  n = obj->map->dim->y * obj->map->scale;
  if (y >= n)
  {
    y = n - 1;
  }
  else
  {
 do { if (y < 0) { y = 0; } } while (0);
  }
  if (func_002779A0(obj->map, x, y))
  {
    func_00260D30(out, obj, ((float) (*func_001C68B0(obj->map, x, y))) / obj->div);
  }
  else
  {
    out->x = 0;
    out->z = 1.0f;
    out->y = 0;
  }
  return out;
}
