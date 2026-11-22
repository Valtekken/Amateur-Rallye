extern char D_0047AF50[];
extern void D_0047D3B8;
extern void func_001D4040(void*, const char*);

void* func_00283B90(void* arg0, int arg1) {
    void* sp0;
    func_001D4040(&sp0, D_0047AF50);
    ((void**)arg0)[1] = sp0;
    ((int*)arg0)[0] = -1;
    ((void**)arg0)[2] = &D_0047D3B8;
    ((int*)arg0)[3] = arg1;
    ((int*)arg0)[4] = 0;
    ((float*)arg0)[5] = 1.0f;
    ((float*)arg0)[6] = 1.0f;
    return arg0;
}
