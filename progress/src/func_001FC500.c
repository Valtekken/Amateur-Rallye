void *func_001FC500(void *arg0, void *arg1) {
void **it=*(void ***)arg0; void **end=*(void ***)((char *)arg0+4);
if(it!=end){void **bound=end; do {void *obj=*it; if(*(void **)((char *)obj+4)==*(void **)arg1)return obj; it++;}while(it!=bound);} return 0;}
