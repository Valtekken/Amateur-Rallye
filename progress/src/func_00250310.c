typedef struct S3 { u32 pad[7]; s32 **unk1C; s32 unk20; } S3;

s32 func_00250310(S3 *arg0, s32 arg1) {
    s32 *p;
    s32 end;
    s32 n;
    s32 i;
    end = arg0->unk20;
    p = (s32 *)arg0->unk1C;
    n = (end - (s32)p) >> 2;
    i = 0;
    if (n > 0) {
        do {
            if (*p == arg1) {
                return 1;
            }
            i++;
            p++;
        } while (i < n);
    }
    return 0;
}
