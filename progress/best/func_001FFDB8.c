extern void *func_001E2460(void *p, int arg);
extern int func_001E28F8(void *p, char *name, int *out);
extern int func_001D4010(int *p);
extern void func_001D4810(void *dst, int val);
extern int func_001E2A48(void *p, char *name, float *out);
extern float func_003F3E80(float x);

extern char D_004783B8[];
extern char D_004783C8[];
extern char D_004783D8[];

int func_001FFDB8(void *arg0, int arg1, void *arg2)
{
    struct {float sp0, sp4, sp8, _p0;
float sp10, sp14, sp18, _p1;
int sp20, _p20[3];
volatile float sp30, sp34, sp38, _p3;
float sp40, sp44, sp48, _p4;
float sp50, sp54, sp58, _p5;
float sp60, sp64, sp68, _p6;
float sp70, sp74, sp78, _p7;
float sp80, sp84, sp88, _p8;
volatile float sp90, sp94, sp98, sp9C;
char spA0[0x10];
} frame;
    float f20;
    void *s2 = arg2;
    void *s0 = frame.spA0;
    int *s1p;

    (void)arg0;
    func_001E2460(s0, arg1);
    s1p = &frame.sp20;
    frame.sp20 = 0;
    if (func_001E28F8(s0, D_004783B8, s1p) == 0)
        return 0;
    func_001D4810(s2, func_001D4010(s1p));

    if (func_001E2A48(s0, D_004783C8, &frame.sp0) == 0)
        return 0;
    if (func_001E2A48(s0, D_004783D8, &frame.sp10) == 0)
        return 0;

    {
        float *s1 = (float *)s2 + 16;
        float *s0f = &frame.sp40;
        frame.sp30 = frame.sp10; frame.sp34 = frame.sp14; frame.sp38 = frame.sp18;
        f20 = 1.0f;
        frame.sp80 = 0.0f; frame.sp84 = f20; frame.sp88 = 0.0f;

        s1[0]=frame.sp0; s1[1]=frame.sp4; s1[2]=frame.sp8; s1[3]=f20;
        frame.sp70=s1[0]; frame.sp74=s1[1]; frame.sp78=s1[2];
        frame.sp50=frame.sp80; frame.sp54=frame.sp84; frame.sp58=frame.sp88;
        frame.sp60=frame.sp30; frame.sp64=frame.sp34; frame.sp68=frame.sp38;

        s0f[0] = frame.sp54*frame.sp68 - frame.sp64*frame.sp58;
        s0f[1] = frame.sp60*frame.sp58 - frame.sp50*frame.sp68;
        s0f[2] = frame.sp50*frame.sp64 - frame.sp54*frame.sp60;
        {
            float len2 = s0f[0]*s0f[0] + s0f[1]*s0f[1] + s0f[2]*s0f[2];
            if (len2 <= 1.1920929e-7f) {
                s0f[0]=frame.sp58; s0f[2]=frame.sp58; s0f[1]=frame.sp58;
            } else {
                float root=__builtin_sqrtf(len2); float inv=1.0f/root;
                s0f[0]*=inv; s0f[1]*=inv; s0f[2]*=inv;
            }
        }

        frame.sp50 = frame.sp64*frame.sp48 - frame.sp68*frame.sp44;
        frame.sp54 = frame.sp68*frame.sp40 - frame.sp60*frame.sp48;
        frame.sp58 = frame.sp60*frame.sp44 - frame.sp64*frame.sp40;
        {
            float len2 = frame.sp50*frame.sp50 + frame.sp54*frame.sp54 + frame.sp58*frame.sp58;
            if (len2 <= 1.1920929e-7f) {
                frame.sp50=0.0f; frame.sp54=0.0f; frame.sp58=0.0f;
            } else {
                float root=__builtin_sqrtf(len2); float inv=1.0f/root;
                frame.sp50*=inv; frame.sp54*=inv; frame.sp58*=inv;
            }
        }

        frame.sp94=0.0f; frame.sp9C=0.0f; frame.sp90=f20; frame.sp98=0.0f;
        {
            float *r0=(float*)s2+4, *r1=(float*)s2+8, *r2=(float*)s2+12, *r3=s1;
            float z=frame.sp94, o=frame.sp90;
            r0[0]=o; r0[1]=z; r0[2]=frame.sp98; r0[3]=frame.sp9C;
            frame.sp90=z; frame.sp94=o; frame.sp9C=z;
            r1[0]=frame.sp90; r1[1]=frame.sp94; r1[2]=frame.sp98; r1[3]=frame.sp9C;
            frame.sp90=z; frame.sp94=z; frame.sp98=o; frame.sp9C=z;
            r2[0]=frame.sp90; r2[1]=frame.sp94; r2[2]=frame.sp98; r2[3]=frame.sp9C;
            frame.sp90=z; frame.sp94=z; frame.sp98=z; frame.sp9C=o;
            r3[0]=frame.sp90; r3[1]=frame.sp94; r3[2]=frame.sp98; r3[3]=frame.sp9C;
            r0[0]=frame.sp40; r0[1]=frame.sp44; r0[2]=frame.sp48; r0[3]=z;
            r1[0]=frame.sp50; r1[1]=frame.sp54; r1[2]=frame.sp58; r1[3]=z;
            r2[0]=frame.sp60; r2[1]=frame.sp64; r2[2]=frame.sp68; r2[3]=z;
            r3[0]=frame.sp70; r3[1]=frame.sp74; r3[2]=frame.sp78; r3[3]=o;
        }
    }
    return 1;
}
