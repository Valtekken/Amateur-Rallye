typedef float (*Fn)(void*,void*);
float func_001B43C0(void *a) { void *p=*(void**)((char*)a+0xc8); if(p) { void *v=*(void**)p; return (*(Fn*)((char*)v+0x1c))((char*)p+*(short*)((char*)v+0x18),a); } return 0.51f; }
