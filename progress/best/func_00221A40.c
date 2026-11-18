void *func_00222CF8();
void func_00221B88(void*,void*,s32,s32*,void*,void*,void*,void*);
void func_00221A40(void *arg0, void *arg1, s32 arg2) {
    void *t2,*t8,*t9,*t3,*t10,*t11,*t12,*t7,*t3_3;
    s32 t6,t6_2;
    if (arg2 != -1) {
        *(s32*)((char*)arg0+0x8C)=0;
        *(s32*)((char*)arg0+0x88)=0;
        *(s32*)((char*)arg0+0x90)=0;
        t2 = func_00222CF8();
        t6 = *(s32*)((char*)t2+0xC);
        t9 = (char*)arg1+0xC;
        t8 = (char*)arg0+0x38;
        t3 = (char*)arg0+0x20;
        *(s32*)((char*)arg0+0x74)=t6;
        t10=(char*)arg0+0x2C;
        t11=(char*)arg1+0x18;
        t12=(char*)arg0+0x44;
        *(f32*)t8 = *(f32*)((char*)arg1+0xC);
        *(f32*)((char*)t8+4)=*(f32*)((char*)t9+4);
        *(f32*)((char*)t8+8)=*(f32*)((char*)t9+8);
        *(f32*)t3 = *(f32*)arg1;
        *(f32*)((char*)t3+4)=*(f32*)((char*)arg1+4);
        *(f32*)((char*)t3+8)=*(f32*)((char*)arg1+8);
        *(f32*)t10 = *(f32*)arg1;
        *(f32*)((char*)t10+4)=*(f32*)((char*)arg1+4);
        *(f32*)((char*)t10+8)=*(f32*)((char*)arg1+8);
        *(f32*)t12 = *(f32*)((char*)arg1+0x18);
        *(f32*)((char*)t12+4)=*(f32*)((char*)t11+4);
        *(f32*)((char*)t12+8)=*(f32*)((char*)t11+8);
        *(f32*)((char*)arg0+0x54)=1.0f;
        *(f32*)((char*)arg0+0x60)=*(f32*)((char*)arg1+0x24);
        *(s32*)((char*)arg0+0x5C)=0;
        *(s32*)((char*)arg0+0x50)=0;
        *(f32*)((char*)arg0+0x70)=*(f32*)((char*)arg1+0x38);
        s32 **t7ptr = (s32**)t2;
        t7 = (char*)*t7ptr + arg2*0x170;
        t3_3 = (char*)*t7ptr + t6*0x170;
        *(s32*)((char*)t3_3+0x128)=*(s32*)t7;
        t6_2=*(s32*)t7;
        *(s32*)((char*)t3_3+0x12C)=t6_2;
        *(f32*)((char*)t3_3+0x120)=*(f32*)((char*)arg1+0x2C);
        *(s32*)((char*)t3_3+0x130)=0;
        *(f32*)((char*)t3_3+0x124)=*(f32*)((char*)arg1+0x30);
        *(f32*)((char*)arg0+0xA0)=*(f32*)((char*)arg1+0x34);
        func_00221B88(arg0, t3, t6_2, (s32*)t7, t8, t9, t10, t11);
    }
}
