extern void func_00110238(int,int);
extern int func_00110430(void),func_00137D30(void *);
extern void func_001377D0(void *),func_001378A8(void *),func_00137CF0(void *),func_00138B00(void *);
extern void func_001D4040(void *,char *);
extern void *func_001E37E8(int,void *);
extern char D_0044A8A8[];
typedef struct { char pad[16]; int index; } A;
typedef struct { char *begin,*end; } V;
void func_00137F80(A *a,int dir) {
 int tmp; V *v;
 if(dir) {
 if(a->index>0) { a->index--; func_00138B00(a); func_001377D0(a); func_001378A8(a); func_00137CF0(a); { int x=func_00110430(); func_00110238(x,func_00137D30(a)); } }
 } else {
 { int x=func_001E4280(); func_001D4040(&tmp,D_0044A8A8); v=func_001E37E8(x,&tmp); }
 if((unsigned)a->index < (unsigned)(((v->end-v->begin)>>2)-1)) { a->index++; func_00138B00(a); func_001377D0(a); func_001378A8(a); func_00137CF0(a); { int x=func_00110430(); func_00110238(x,func_00137D30(a)); } }
 }
}
