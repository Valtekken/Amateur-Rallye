extern void **func_00201350(void); extern f32 sqrtf(f32);
typedef struct {f32 x,y,z,w;} V4;
typedef struct {char pad[12]; s32 idx; f32 radius,hi,lo,step; s32 dir,flip; char name[4];} Obj;
void func_002827D8(Obj *p,void *arg) {
 V4 a,b,d; char *e,*other; f32 v,dist; V4 *pa,*pb;
 if(func_001E3650(func_001E4280(),(s32)p->name)>0) return;
 e=*(char **)((u32)func_00201350() + (p->idx << 2)); other=*(char**)((char*)arg+0x50);
 pa=(V4*)(e+0xc0); pb=(V4*)(other+0x50); a.x=pa->x; a.y=pa->y; a.z=pa->z; b.x=pb->x; b.y=pb->y; b.z=pb->z;
 d.x=b.x-a.x; d.y=b.y-a.y; d.z=b.z-a.z;
 dist=sqrtf(d.x*d.x+d.y*d.y+d.z*d.z);
 {f32 old=*(f32*)e;
 if(dist<p->radius) {
 { f32 step=p->step; v=p->dir ? old-step : old+step;}
 if(p->lo<v) { if(v<p->hi) *(f32*)e=v; else if(p->flip) p->dir=1; }
 else if(p->flip) p->dir=0;
 }
 }
}
