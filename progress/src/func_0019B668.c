extern void func_001D4040(void*,const char*);
extern char D_00471DA0[],D_00473A18[];
typedef struct {u32 a,b,c;} V;
static inline void zero(V *v){v->a=0;v->b=0;v->c=0;}
void *func_0019B668(void *arg0){
 u32 key[4]; volatile char pad[32]; u32 *p=arg0; u32 *q;
 func_001D4040(key,D_00471DA0);
 p[0]=key[0];p[1]=(u32)D_00473A18;p[2]=6;p[3]=3;p[4]=2;
 p[5]=1;p[6]=1;p[7]=1;p[8]=1;p[9]=1;
 zero((V*)(p+10));zero((V*)(p+13));
 q=p+16;q[0]=1;q[1]=1;*(float*)&q[2]=0.05f;
 *(float*)&q[4]=4.0f;
 
 *(float*)&q[5]=(*(float*)&q[3]=10.0f);*(float*)&q[7]=(*(float*)&q[6]=0.6f);*(float*)&q[8]=6.0f;*(float*)&q[9]=2.0f;q[10]=2; *(float*)&q[11]=90.0f;
 return arg0;
}
