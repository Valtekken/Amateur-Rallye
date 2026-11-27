extern char *func_001D4010(void *); extern int func_002AD350(float);
extern int func_003FAAF0(const char*,const char*,int),func_003FA580(const char*,const char*);
extern void func_002CE390(int,float),func_002B5708(void*,const char*,...);
extern char D_004285F0[],D_00483BA8[],D_00483BB8[],D_00483BC0[],D_00483BD8[],D_00483BF8[];
void func_002D1938(char *a,float f) {
 
 if(*(int*)(a+8)>=0) { char *p=a+52;
 if(!func_003FAAF0(D_00483BA8,func_001D4010(p),12) || !func_003FAAF0(D_00483BB8,func_001D4010(p),6)) {
 func_003FA580(D_00483BC0,func_001D4010(p));
 func_002B5708(D_004285F0,D_00483BD8,func_001D4010(p),func_002AD350(f),*(int*)(a+8));
 }
 if(*(float*)(a+48)!=f) func_002CE390(*(int*)(a+8),f);
 } else { char *p=a+52; if(!func_003FAAF0(D_00483BA8,func_001D4010(p),12)) {
 if(!func_003FA580(D_00483BC0,func_001D4010(p))) f*=0.25f;
 func_002B5708(D_004285F0,D_00483BF8,func_001D4010(p),func_002AD350(f));
 }
 }
 *(float*)(a+48)=f;
}
