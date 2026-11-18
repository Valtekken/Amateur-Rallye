s32 func_003FA9B8(s32);
s32 func_003FABD0(s32,s32,s32);
s32 func_001D2728(s32 *arg0, s32 arg1, s32 arg2, s32 arg3){
 s32 t16,t21,t4,var16;
 t4=*arg0;
 if(t4==0) return -1;
 t16=func_003FA9B8(t4);
 t21=func_003FA9B8(arg3);
 if(arg2>t16)arg2=t16;
 if(arg1<0)arg1=0;
 var16=arg2-1;
 if(var16>=arg1){
  do {
    if(func_003FABD0(*arg0+var16,arg3,t21)!=0) return var16;
    var16-=1;
  } while(var16>=arg1);
 }
 return -1;
}
