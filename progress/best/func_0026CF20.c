typedef struct { char pad[0x50]; float x,y,z; } Loc;
typedef struct { char pad[0x48]; signed char priority; char pad2[7]; Loc *loc; } Item;
extern void func_0026CE00(Item **,int,int);
void func_0026CF20(Item **arr,int start,int count,Item *unused,char *ctx) {
 int current=start,child=start*2+2, pick; float *ref=(float *)(ctx+0xc0);
 while(child<count) {
  Item *r=arr[child],*l=arr[child-1]; float dx=ref[0]-r->loc->x,dy=ref[1]-r->loc->y,dz=ref[2]-r->loc->z;
  float ex=ref[0]-l->loc->x,ey=ref[1]-l->loc->y,ez=ref[2]-l->loc->z;
  float dr=dx*dx+dy*dy+dz*dz, dl=ex*ex+ey*ey+ez*ez; pick=0; if(l->priority<r->priority || (l->priority==r->priority && dl<dr)) pick=1;
  child-=pick; arr[current]=arr[child]; current=child; child=(current+1)*2;
 }
 if(child==count){arr[current]=arr[child-1]; current=child-1;}
 func_0026CE00(arr,current,start);
}
