extern void func_0027B878(void *, void *);
typedef struct { char *begin, *end; } Vec;
void func_00222980(Vec *v, int *key) {
 unsigned i=0;
 if (((int)((unsigned)(v->end-v->begin)*0xE9BD37A7u)>>4)!=0) {
 do { char *cur=v->begin+i*0x170;
 if (*key == *(int *)cur) {
 char *next=cur+0x170;
 if(next!=v->end) {
 char *src=next,*dst=cur;
 int n=(int)((unsigned)(v->end-src)*0xE9BD37A7u)>>4;
 while(n>0) {func_0027B878(dst,src);src+=0x170; n--;dst+=0x170;}
 }
 v->end-=0x170;
 }
 i++;
 } while(i<(unsigned)((int)((unsigned)(v->end-v->begin)*0xE9BD37A7u)>>4));
 }
}
