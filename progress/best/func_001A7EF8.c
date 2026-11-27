extern int func_001A8330(void *); extern int func_001D4010(void *); extern void func_003F9698(const char *,...); extern char D_00472A00[]; extern void func_0021E4F0(void*),func_003F93CC(int,int,int),func_001551C0(void*,int,int,float*),func_001A9498(float*,void*,float),func_001A9E08(float*,void*,float*),func_001A9FD0(float*,void*,void*),func_001AA2E0(float*,void*,void*,void*),func_001AA308(void*,void*);
void func_001A7EF8(char *a,char*b){float p[4],q[4],z; float *dst; int start,end; char *list,*v;
if(!func_001A8330(a)){func_003F9698(D_00472A00,func_001D4010(b+0x5c));func_0021E4F0(b);return;}
list=a+0x110; v=a+0xbc; start=*(int*)list;end=*(int*)(list+4);func_003F93CC(start,end,0);*(int*)(list+4)-=end-start;z=0;func_001551C0(list,*(int*)list,*(int*)(a+0x120),&z);
func_001A9498(p,a,1.0f);func_001A9498(q,a,0.0f);
dst=(float*)(a+0xb0); dst[0]=q[0];dst[1]=q[1];dst[2]=q[2];func_001A9E08(q,a,p);
dst=(float*)(a+0xbc); dst[1]=q[1];dst[0]=q[0];dst[2]=q[2];func_001A9FD0(q,a,v);
dst=(float*)(a+0xc8); dst[0]=q[0];dst[1]=q[1];dst[2]=q[2];func_001AA2E0(q,a,v,a+0xc8);
dst=(float*)(a+0xd4); dst[0]=q[0];dst[1]=q[1];dst[2]=q[2];func_001AA308(a,b);
*(float*)(a+0x68)=0; if(*(int*)(a+0x2c))*(int*)(a+0x60)=0;
if(*(float*)(a+0x50)!=0) {*(int*)(a+0x128)=1;*(float*)(a+0x11c)=0;*(float*)(a+0x124)=(float)*(int*)(a+0x120);} else *(int*)(a+0x128)=0;}
