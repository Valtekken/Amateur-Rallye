void*D_002AD408(s32);s32 func_002AD350(f32);f32*func_003E7FE8(void*);void func_003E80A8(f32*,f32);void func_003E8150(f32*);void func_003F9698(const char*,s32,const char*,s32);
extern f32*D_0043BFC8;extern char D_0048A050[],D_0048A068[];
f32 func_003E7F30(s32 a,const char*b){f32*t,f;if(!D_0043BFC8){t=func_003E7FE8(D_002AD408(32));D_0043BFC8=t;func_003E80A8(t,0.0f);}func_003E8150(D_0043BFC8);f=*D_0043BFC8;if(a){const char*q=b;if(!q)q=D_0048A068;func_003F9698(D_0048A050,a,q,func_002AD350(f));}return f;}
void*func_003F8A30(void*,s32);void func_003F94D0(void*,s32,u32);
void*func_004029F8(void*a,s32 b,s32 c){u32*p=func_003F8A30(a,b*c);u32 n,*q;if(!p)return 0;n=(p[-1]&0xfffffffcu)-4;if(n<37){q=p;if(n>=20){p[0]=0;q=p+2;p[1]=0;if(n>=28){p[2]=p[3]=0;q=p+4;if(n>=36){p[4]=0;q=p+6;p[5]=0;}}}q[0]=0;q++;q[1]=0;q[0]=0;}else func_003F94D0(p,0,n);return p;}
s32 func_0040AF58(void);void func_0040AFA0(void);
void func_00403370(void){s32 t=func_0040AF58();*(volatile u32*)0x1000f000=4;if(t)func_0040AFA0();while(!(*(volatile u32*)0x1000f000&4)){}t=func_0040AF58();*(volatile u32*)0x1000f000=4;if(t)func_0040AFA0();}
void SetVSyncFlag_2(void*,s64*);
s64 func_00403400(void){struct{s32 flag,pad;s64 val;}f;s32 t;f.flag=0;SetVSyncFlag_2(&f.flag,&f.val);t=func_0040AF58();*(volatile u32*)0x1000f000=4;if(t)func_0040AFA0();while(!(*(volatile u32*)0x1000f000&4)&&!*(volatile s32*)&f.flag){}t=func_0040AF58();*(volatile u32*)0x1000f000=4;if(t)func_0040AFA0();return f.val;}
