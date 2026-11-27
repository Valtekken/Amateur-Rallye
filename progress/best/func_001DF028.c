typedef struct 
{
  void *p;
  int count;
} Map;
extern int func_001DEE60(Map *, int, int);
extern void func_003F9698(const char *, ...);
extern char D_00476920[];
extern char D_00476930[];
extern char D_00476938[];
extern char D_00476940[];
extern char D_00476810[];
extern int D_004262B0[];
void func_001DF028(void *unused, Map *m)
{
  int i = 0;
  int j;
  char new_var;
  func_003F9698(D_00476920);
  D_004262B0[3]++;
  new_var = 0;
  if (m->count > new_var)
  {
    do
    {
      func_003F9698(D_00476930, i);
      j = new_var;
      while (func_001DEE60(m, i, j) != (-1))
      {
        func_003F9698(D_00476938, func_001DEE60(m, i, j));
        j++;
      }

      i++;
      func_003F9698(D_00476940);
    }
    while (i < m->count);
  }
  D_004262B0[3]--;
  func_003F9698(D_00476810);
}

