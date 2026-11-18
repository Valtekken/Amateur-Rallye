s32 func_003A0BD8(s32,s32);s32 func_00219DA8(s32,s32);
s32 func_003A5DC8(register s32 a,register s32 b){func_003A0BD8(a,b);func_00219DA8(a+12,b+12);return a;}
s32 func_003D7DE0();void func_002B2028(s32);
void func_003D7F00(s32*a){if(*a&256)func_003D7DE0();func_002B2028(a[9]);a[9]=0;a[11]=0;a[10]=0;}
void func_003D82C8(void*,void*,void*,s32);
void func_003D8350(char*a){if(*(s32*)(a+28))goto out;if(!(*(s32*)a&2)){if((*(s32(**)())(*(char**)(a+80)+100))()!=-1)goto out;}init:func_003D82C8(a,a+75,a+76,0);out:;}
s32 func_003D83C8(char*a){u8*p;s32 r;if((*(s32(**)())(*(char**)(a+80)+28))()==-1)r=-1;else{p=*(u8**)(a+4);r=*p++;*(u8**)(a+4)=p;}return r;}
