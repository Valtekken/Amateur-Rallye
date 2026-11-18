extern void func_003D4D70(int);
extern int func_003D4EA0(void**);
extern int func_003DA6B8(int);
extern int func_003DA700(int,int);

void **func_003D3FC8(void **arg0, int arg1) {
    void *t = *arg0;
    unsigned char f = ((unsigned char*)t)[0x1A];
    int ok;
    if (f) { ok=0; ((unsigned char*)t)[0x1A]=f|2; }
    else {
        int x = *(int*)(t+4);
        if (x) func_003D4D70(x);
        ok=1;
        if (*(long long*)((char*)*arg0+0x10)&1) ok=func_003D4EA0(arg0);
    }
    if (ok) {
        int c = func_003DA6B8(*(int*)*arg0);
        if (c==-1) { ((unsigned char*)*arg0)[0x1A] |= 1; }
        else {
            while (1) {
                if (func_003DA700(c,arg1)==-1) { ((unsigned char*)*arg0)[0x1A] |= 2; break; }
                c = func_003DA6B8(*(int*)*arg0);
                if (c==-1) { ((unsigned char*)*arg0)[0x1A] |= 1; break; }
            }
        }
    }
    return arg0;
}
