extern void func_002CA1D0(void*,s8,s16);extern int func_003F9698(const char*,...);extern char D_00482528[];
void func_002CBBB8(void *arg0, f32 fparg0, f32 fparg1, f32 fparg2) {
    f32 val;
    f32 f1 = ((f32*)arg0)[0xE0/4];
    f32 f2 = ((f32*)arg0)[0xE8/4];

    if (f1 < fparg0) {
        val = f1 + (fparg1 * f2);
        if (fparg0 < val) {
            ((f32*)arg0)[0xE0/4] = val;
        } else {
            ((f32*)arg0)[0xE0/4] = f1;
        }
    } else {
        val = f1 - (fparg2 * f2);
        if (val < fparg0) {
            ((f32*)arg0)[0xE0/4] = val;
        } else {
            ((f32*)arg0)[0xE0/4] = f1;
        }
    }

    val = ((f32*)arg0)[0xE0/4];
    if (val < 0.0f) val = 0.0f;
    if (val > 1.0f) val = 1.0f;
    ((f32*)arg0)[0xE0/4] = val;
}

void func_002CA418(char*p,s8 c){s16 found=-1;int i=6;for(;i<24;i++){if(!p[132+i]){found=i;func_002CA1D0(p,c,found);break;}}if(found<0)func_003F9698(D_00482528,c,c);}
