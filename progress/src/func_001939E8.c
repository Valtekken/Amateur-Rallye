extern void func_00192FD8(void *,void *);
extern void func_001D2900(void *,s32);
extern void func_001D4040(void *,void *);
extern void func_001E3EC0(s32,void *,void *);
void func_001939E8(void *a,void *b,void *c) {
 s32 t; char buf[16];
 func_00192FD8(a,b);
 func_001D2900((char *)a+12,*(s32 *)((char *)a+0xbc));
 t=func_001E4280(); func_001D4040(buf,*(void **)((char *)a+12));
 func_001E3EC0(t,buf,c);
}
