typedef unsigned int Q __attribute__((mode(TI)));typedef struct Four{Q q[4];}Four;
void func_003CB550(register Q*a,register Q*b){*a=*b;}
void func_003CB560(Q*a,Q*b){Q p=b[0],q=b[1],r=b[2],s=b[3];a[0]=p;a[1]=q;a[2]=r;a[3]=s;}
void func_003CB3A0(register u32*a,register u32*b){u32 t0=b[0];u32 t1=b[4];u32 t2=b[8];u32 t3=b[12];u32 t4=b[1];u32 t5=b[5];u32 t6=b[9];u32 t7=b[13];u32 t8=b[2];u32 t9=b[6];u32 t10=b[10];u32 t11=b[14];u32 t12=b[3];u32 t13=b[7];u32 t14=b[11];u32 t15=b[15];a[0]=t0;a[1]=t1;a[2]=t2;a[3]=t3;a[4]=t4;a[5]=t5;a[6]=t6;a[7]=t7;a[8]=t8;a[9]=t9;a[10]=t10;a[11]=t11;a[12]=t12;a[13]=t13;a[14]=t14;a[15]=t15;}
typedef struct Entry{s32 w[7];}Entry;extern Entry D_0049B9D0[][4];extern u8*func_003CA3B0(s32,s32);
u8 func_003CA4E0(register s32 a,register s32 b){u8*p;if(!D_0049B9D0[a][b].w[4])return 99;p=func_003CA3B0(a,b);if(p[112]!=6)return p[112];if(p[113]==2)return 5;return p[112];}
