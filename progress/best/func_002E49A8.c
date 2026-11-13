s32 (*func_002ABA80(s32))();
s32 func_002B1FC0(s32);
s32 func_003D4938(s32 *,s32 *);
s32 func_003D4F40(s32);
extern s32 (*D_00437E58)();
extern s32 D_00439570,D_00484100;
void func_002E49A8(s32 arg0) {
s32 (*p)();

s32 (*raise_error)(s32)=func_003D4F40;
do { p=D_00437E58; if(!p) {s32 *msg=&D_00484100;raise_error(func_003D4938(&D_00439570,msg)); p=func_002ABA80(1);} p(); } while(!func_002B1FC0(arg0));
}
