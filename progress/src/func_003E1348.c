#define I(p,o) (*(int*)((char*)(p)+(o)))
extern int func_003E0EF0(void*),func_003E14A8(void*),func_003E5670(void*),func_003E5F10(void*),func_003E6070(void*,int);
extern void func_003E5FE0(void*,int,int);
int func_003E1348(register void*a,register int b,register int c){
    register int skip=0;
    register int tmp;
    register void*p=*(void**)((char*)a+64);
    I(p,0x120)=0;
    if(c==-1||b<c)skip=1;
    if(!I(p,8)){I(a,8)=0;I(p,8)=1;}
    {int ok=func_003E6070(p,0);if(ok)if(skip)func_003E5F10(p);}
    I(p,0x120)=1;
    if(!func_003E5670(p)){
        func_003E14A8(a);
        I(p,0)=1;
        return 0;
    }
    {
        int v=2;
        if(I(p,0xD4)^1) v=1;
        if(I(p,0x174)==v){
            int flag=0;
            if(func_003E6070(p,1)!=0) flag=1;
            tmp=0;
            if(flag&&skip){
                if(func_003E5F10(p)!=0) tmp=1;
            }
            func_003E5FE0(p,I(p,0x118),I(p,4));
            I(p,0x120)=0;
            I(a,8)=I(p,0x118)-I(p,0xac);
            I(p,0x118)+=1; I(p,4)+=1;
            if(!skip)func_003E0EF0(a);
            return tmp;
        }
    }
    return -1;
}
