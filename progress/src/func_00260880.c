typedef struct Vec{f32 x,y,z;} Vec;
typedef struct Grid{f32 a,x,z,scale;} Grid;
Vec *func_00260880(Vec *out,Grid *g,s32 *x,s32 *z) {
Vec v; v.y=0; v.x=g->x+(f32)*x*g->scale; v.z=g->z+(f32)*z*g->scale; out->y=v.y;out->z=v.z;out->x=v.x; return out;
}
