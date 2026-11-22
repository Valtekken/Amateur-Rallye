typedef struct { f32 x,y,z; } V;
s32 func_00235440(void *arg0, void *arg1) {
 volatile f32 sp[9];
 f32 *p0=(f32*)((char*)arg0+8), *p1=(f32*)((char*)arg1+8);
 V *q0=*(V**)arg0, *q1=*(V**)arg1;
 f32 lim0=*(f32*)((char*)arg0+0x14), lim1=*(f32*)((char*)arg1+0x14);
 f32 a0=p0[0], b0=p1[0], a1=p0[1], b1=p1[1], a2=p0[2], b2=p1[2];
 f32 d=a0*b0+a1*b1+a2*b2;
 f32 t, f1, f2, f3, dx,dy,dz;
 if(!(d <= 0.999f)) return 0;
 dx=d*b0; dy=d*b1; dz=d*b2;
 sp[6]=dx; sp[7]=dy; sp[8]=dz;
 f1=q0->x-q1->x; f3=q0->y-q1->y; f2=q0->z-q1->z;
 sp[0]=f1; sp[1]=f3; sp[2]=f2;
 dx=a0-dx; dy=a1-dy; dz=a2-dz;
 sp[3]=dx; sp[4]=dy; sp[5]=dz;
 t=(f1*dx+f3*dy+f2*dz)/(d*d-1.0f);
 f1=(q0->x-q1->x)*b0+(q0->y-q1->y)*b1+(q0->z-q1->z)*b2+t*d;
 if(0<=t && t<=lim0 && 0<=f1 && !(f1<=lim1)) return 1;
 return 0;
}
