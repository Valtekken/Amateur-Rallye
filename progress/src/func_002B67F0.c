extern void func_003F9698(void*);extern char D_0047F748[];
s32 func_002B7D78(void){func_003F9698(D_0047F748);while(1){}func_003F9698(D_0047F748);return 0;}
extern s32 func_00407A18(s32,s32,void*);
s32 func_002B6888(s32 a,s32 b){s32 x=1,i=0;for(;i<3 && func_00407A18(b,1,&x);i++){x=1;}return x==0;}
s32 func_002B67F0(s32 a,s32 b){s32 i=0,r=1,x=r;while(x){if(func_00407A18(b,1,&x)){i++;x=1;if(i>=11){r=0;break;}}else i=0;}return r;}
extern s32 func_00406EA8(s32,s32);extern void func_00407130(s32);
s32 func_002B6740(void*a){s32 r=0,t,f;char*v=*(char**)((char*)a+8);t=(*(s32(**)(void*))(v+124))((char*)a+*(s16*)(v+120));v=*(char**)((char*)a+8);(*(void(**)(void*))(v+92))((char*)a+*(s16*)(v+88));f=func_00406EA8(t,1);if(f>=0){r=1;v=*(char**)((char*)a+8);(*(void(**)(void*,s32))(v+100))((char*)a+*(s16*)(v+96),f);func_00407130(f);v=*(char**)((char*)a+8);(*(void(**)(void*))(v+92))((char*)a+*(s16*)(v+88));}return r;}
