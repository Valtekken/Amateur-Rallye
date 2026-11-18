void func_002390A0(s32, s32);

void func_002498E0(void *arg0, void *arg1) {
    s32 n;
    s32 i;
    n = (*(s32 *)((char*)arg1 + 4) - *(s32 *)arg1) >> 2;
    for (i = 0; i < n; i++) {
        void *v = *(void **)(*(s32 *)arg1 + (i << 2));
        if (v != 0) {
            func_002390A0((s32)v, (s32)arg0 + 0x74);
        }
    }
}
