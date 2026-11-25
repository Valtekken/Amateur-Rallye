void *func_001D4568(void *arg0, int arg1) {
 typedef struct { void **begin; void **cur; } S;
 S *s = (S *)arg0;
 if (arg1 >= 0) {
  int count = s->cur - s->begin;
  if ((unsigned)arg1 < (unsigned)count) {
   void **p = s->begin + arg1;
   return (void *)*p;
  }
 }
 return 0;
}
