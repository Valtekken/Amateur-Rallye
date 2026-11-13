extern char D_00446420[],D_00446440[],D_00446460[],D_00446480[],D_004464A0[],D_004464C0[];
extern void func_001D4040(void *,const char *);
s32 func_0010F9F0(s32 arg0,s32 sel,s32 type){
s32 result=0; char buf[16]; s32 handle;
switch(type){
case 0: if(!sel){handle=func_001E4280();func_001D4040(buf,D_00446420);result=func_001E3650(handle,(s32)buf);goto done;}else{handle=func_001E4280();func_001D4040(buf,D_00446440);result=func_001E3650(handle,(s32)buf);goto done;}break;
case 1: if(!sel){handle=func_001E4280();func_001D4040(buf,D_00446460);result=func_001E3650(handle,(s32)buf);goto done;}else{handle=func_001E4280();func_001D4040(buf,D_00446480);result=func_001E3650(handle,(s32)buf);goto done;}break;
case 2: if(!sel){handle=func_001E4280();func_001D4040(buf,D_004464A0);result=func_001E3650(handle,(s32)buf);goto done;}else{handle=func_001E4280();func_001D4040(buf,D_004464C0);result=func_001E3650(handle,(s32)buf);goto done;}break;
default:goto done;
}done:return result;}
