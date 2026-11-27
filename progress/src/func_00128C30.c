extern char D_00448AD8[],D_00448B08[],D_00448B40[],D_00448B70[];
extern void func_001D4040(void *,char *);
extern int func_001E3598(int,void *);
extern void func_0011E278(int,int);
typedef struct { char p[12]; int x; char q[0x2c]; int y; char r[0x14]; int z; } A;
void func_00128C30(A *a) {
 int k,x,y,z,w;
 { int t=func_001E4280(); func_001D4040(&k,D_00448AD8); x=func_001E3598(t,&k); }
 { int t=func_001E4280(); func_001D4040(&k,D_00448B08); y=func_001E3598(t,&k); }
 { int t=func_001E4280(); func_001D4040(&k,D_00448B40); z=func_001E3598(t,&k); }
 { int t=func_001E4280(); func_001D4040(&k,D_00448B70); w=func_001E3598(t,&k); }
 if(x||y||z||w) { a->y=0; a->z=1; } else func_0011E278(a->x,1);
}
