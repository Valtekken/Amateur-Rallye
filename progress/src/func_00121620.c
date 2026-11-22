extern void func_001D4040(void*,const char*);
extern char D_00447C08[];
extern s32 D_0044D4E8[];
void *func_00121620(void *arg0){
 s32 *p=arg0; s32 key[8]; s32 *t;
 func_001D4040(key,D_00447C08);
 p[1]=key[0]; p[2]=D_0044D4E8; p[0]=-1; p[3]=0; p[4]=0;
 t=p+4; t[1]=0; t[2]=0;
 p[10]=-1; p[7]=0; p[8]=0; p[9]=0; p[11]=0;
 return p;
}
