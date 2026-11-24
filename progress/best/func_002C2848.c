void func_002C2848(void *a){void *v=*(void**)a; s16 n=*(s16*)((char*)v+0x10); void (*fn)(void*,s16)=*(void(**)(void*,s16))((char*)v+0x14); fn((char*)a+n,n);}
