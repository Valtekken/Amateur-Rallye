extern int func_001930D8(int,int),func_00193138(int,int),func_00193B60(void);
extern void func_001D4040(void*,const char*),func_0021E4F0(void*),func_0029EA38(void*);
extern int func_003FA310(char*,const char*,...);
extern char D_0044C0C0[],D_0044C478[],D_0044C498[],D_0044C568[],D_0044C580[];
static inline void setkey(char *a,char *buf,const char *fmt,int offset) {
 int n=func_001930D8(func_00193B60(),*(int*)(a+12));
 func_003FA310(buf,fmt,n); func_001D4040(a+offset,buf);
}
void func_0014E518(char *a,char *b) {
 char buf[256]; void *p;
 if(!func_00193138(func_00193B60(),*(int*)(a+12))) func_0021E4F0(b);
 setkey(a,buf,D_0044C568,0x20);
 setkey(a,buf,D_0044C580,0x24);
 setkey(a,buf,D_0044C478,0x28);
 setkey(a,buf,D_0044C498,0x2c);
 setkey(a,buf,D_0044C0C0,0x30);
 p=*(void**)(b+4); if(p) func_0029EA38(p);
 *(int*)(a+24)=0;
}
