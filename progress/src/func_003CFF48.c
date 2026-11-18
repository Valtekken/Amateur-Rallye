extern char D_00488CF0[];
extern void func_003D13B0(void*);
extern void func_003CE0D0(void**,s32,s32);
char*func_003CFF48(void**a,u32 n){
    char*p=*a;
    if(n>=*(u32*)(p-16)){
        func_003D13B0(D_00488CF0);
        p=*a;
    }
    if(*(u32*)(p-8)>=2){
        func_003CE0D0(a,*(s32*)(p-16),1);
        p=*a;
    }
    *(s32*)(p-4)=1;
    return p+n;
}
