extern void func_00192130(void *, s32);
extern void func_001D2900(void *, s32);
extern void func_001D4040(void *, s32);
extern void func_001E40D0(s32, void *, void *);
typedef struct { u8 pad[12]; s32 c; u8 pad2[0x7c]; s32 d; } S;
typedef struct { f32 x,y,z,w; } V;
void func_00192D38(S *a, s32 b, V *c) {
 u8 buf[16]; V v; S *s0=a; V *s1; s32 k;
 func_00192130(a,b); func_001D2900(&s0->c,s0->d); s1=c;
 k=func_001E4280(); func_001D4040(buf,s0->c);
 v.x=s1->x; v.y=s1->y; v.z=s1->z; v.w=s1->w;
 func_001E40D0(k,buf,&v);
}
