void func_0028F600(void*, void*, s32);
void func_0028F658(void*, void*, s32, void*);
void func_0028F2E0(void*a, void*b){
    void *o;
    *(void**)((char*)a+0x1C) = b;
    o = *(void**)((char*)b+0x4C);
    if (o != NULL){
        if (*(s32*)((char*)a+0x14)==0){
            func_0028F600(a,b,*(s32*)((char*)o+8)-0x28);
        } else {
            func_0028F658(a,b,*(s32*)((char*)o+8)-0x28,(char*)a+0x18);
        }
        *(s32*)((char*)a+0xC)=1;
    }
}
