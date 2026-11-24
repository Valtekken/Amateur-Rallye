void *func_001D4568(void *arg0, int arg1) {
 typedef struct { void **begin; void **cur; } S;
 S *s = (S *)arg0;
 if (arg1 >= 0) {
  if ((unsigned int)arg1 < (unsigned int)(s->cur - s->begin)) return s->begin[arg1];
 }
 return 0;
}
