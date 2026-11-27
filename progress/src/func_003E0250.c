extern u32 func_003E7530(void *, int);
extern void func_003E7580(void *);
extern u32 func_003E7478(void *, int);
extern void func_003E03A0(void *, void *);
int func_003E0250(void *a, u32 *b) {
 u32 x,y,z,n,i;
 i=0;
 func_003E7530(a,34);
 x=func_003E7530(a,3);
 func_003E7580(a);
 y=func_003E7530(a,15);
 func_003E7580(a);
 z=func_003E7530(a,15);
 func_003E7580(a);
 b[0]=func_003E7530(a,9);
 func_003E7530(a,30);
 n=func_003E7530(a,3);
 b[2]=(x>>2)&1;
 b[1]=(x<<30)|(y<<15)|z;
 while(i<n) {func_003E7530(a,8); i++;}
 if(func_003E7478(a,32)==0x1bb) { b[3]=1; func_003E03A0(a,b); }
 else b[3]=0;
 return 1;
}
