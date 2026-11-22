typedef struct { u32 f0; u32 f4; } S3248;
extern void *D_002AD408(s32);
extern void *func_001EE2F8(void *);
extern void func_001E4CC8(void *);
extern void func_001E5DE8(void *, s32);
extern void func_001EB7A8(void *, u32, s32, void *);
extern void func_001E3918(void *, void *);

void *func_001E3248(S3248 *arg0) {
    char sp_buf[32];
    void *v19;
    u32 v18, v2, v16, v17;

    v19 = func_001EE2F8(D_002AD408(0x10));
    v18 = (s32)((arg0->f4 - arg0->f0) * 0xB6DB6DB7) >> 2;
    func_001E4CC8(sp_buf);
    v17 = ((S3248*)v19)->f4;
    v2 = (s32)((v17 - ((S3248*)v19)->f0) * 0xB6DB6DB7) >> 2;
    if (v18 < v2) {
        v16 = ((S3248*)v19)->f0 + v18 * 0x1C;
        v18 = v17 - v16;
        while (v16 < v17) {
            func_001E5DE8((void *)v16, 2);
            v16 += 0x1C;
        }
        ((S3248*)v19)->f4 = ((S3248*)v19)->f4 - v18;
    } else {
        func_001EB7A8(v19, v17, (s32)(v18 - v2), sp_buf);
    }
    func_001E5DE8(sp_buf, 2);
    func_001E3918(v19, arg0);
    return v19;
}
