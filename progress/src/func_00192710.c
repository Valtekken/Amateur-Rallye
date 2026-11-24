extern void func_00192130(void *,void *); extern void func_001D2900(void *,int); extern void func_001D4040(void *,void *); extern void func_001E3EC0(int,void *,void *);
void func_00192710(void *a,void *b,void *c){int t; char buf[16]; func_00192130(a,b); func_001D2900((char*)a+12,*(int*)((char*)a+0x60)); t=func_001E4280(); func_001D4040(buf,*(void**)((char*)a+12)); func_001E3EC0(t,buf,c);}
