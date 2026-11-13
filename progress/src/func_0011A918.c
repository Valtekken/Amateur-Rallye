/* identical to func_0010F9F0 (matched), with its names changed by decompdecomp */
extern char D_004470D8[],D_004470F0[],D_00447108[],D_00447120[],D_00447138[],D_00447150[];
extern void func_001D4040(void *,const char *);
s32 func_0011A918(s32 arg0,s32 sel,s32 type){
s32 result=0; char buf[16]; s32 handle;
switch(type){
case 0: if(!sel){handle=func_001E4280();func_001D4040(buf,D_004470D8);result=func_001E3650(handle,(s32)buf);goto done;}else{handle=func_001E4280();func_001D4040(buf,D_004470F0);result=func_001E3650(handle,(s32)buf);goto done;}break;
case 1: if(!sel){handle=func_001E4280();func_001D4040(buf,D_00447108);result=func_001E3650(handle,(s32)buf);goto done;}else{handle=func_001E4280();func_001D4040(buf,D_00447120);result=func_001E3650(handle,(s32)buf);goto done;}break;
case 2: if(!sel){handle=func_001E4280();func_001D4040(buf,D_00447138);result=func_001E3650(handle,(s32)buf);goto done;}else{handle=func_001E4280();func_001D4040(buf,D_00447150);result=func_001E3650(handle,(s32)buf);goto done;}break;
default:goto done;
}done:return result;}
