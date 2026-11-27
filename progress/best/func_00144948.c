typedef struct {char pad[16]; float last; char key[4];} A;
typedef struct {int x; void *obj; char pad[68]; int active;} B;
extern float func_001E3610(int,void *);
extern void func_0029ECB8(void *,char *);
extern int func_003FA310(char *,const char *,...);
extern char D_00447A60[];
void func_00144948(A *a,B *b) {
 char buf[32]; float t; void *obj;
 if(b->active && (obj=b->obj)) {
  t=func_001E3610(func_001E4280(),a->key);
  if(t<0.001f)t=0;
  if(__builtin_fabsf(a->last-t)>0.01f || t<0.001f) {
   a->last=t;
   func_003FA310(buf,D_00447A60,(int)(t/60.0f),(int)t%60,(int)(t*100.0f)%100);
   func_0029ECB8(obj,buf);
  }
 }
}
