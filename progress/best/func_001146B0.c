extern s32 func_00114678(void *, s32);
extern void *func_00115328(void *, s32);
extern void func_00151A28(void **, s32, u32, void *, s32);
extern void func_001525D8(void *, void *, f32);
extern void func_001537E8(void **, void *, s32);
extern void func_001539A0(void **, s32, u32, void **, s32, void *);
extern s32 func_001E3598(s32, void *);
extern void *func_001E37E8(s32, void *);
extern void func_001E3D10(s32, void *, s32);
extern void func_002060F8(void *);
extern void func_002062A8(void *, void *);
extern void func_00206338(void *, void *);
extern void func_002063A0(void *, void *);
extern void func_002B2028(void *);
extern s32 func_003FA9B8(s32);

extern u32 D_0040E618[];
extern struct {
    s32 unk0;
    void *unk4;
    s32 unk8;
    s32 unkC;
} D_0040E658;
extern void D_00444870;
extern u32 D_0048D8D0[];

extern float D_0048D890[],D_0048D8A0[],D_0048D8B0[],D_0048D8C0[];
static inline __attribute__((always_inline)) void release9(u8*p){u8*h=p-16;if(--*(s32*)(h+8)==0){if(*(s32*)(h+4)+16)func_002B2028(h);else{*(u32*)h=D_0040E618[-1];D_0040E618[-1]=(u32)h;}}}
void func_001146B0(u8 *arg0) {
    f32 sp[0x50/4];
    void *sp50;
    u8 *temp_4;
    u8 *temp_4_2;
    u8 *temp_20;
    u8 *temp_2;
    u8 *temp_19;
    s32 temp_2_2;
    f32 *sp10;
    f32 *sp20;
    f32 *sp30;
    f32 *sp40;
    s32 temp_16;
    s32 var_3;
    s32 temp_5;

s32 selected,idx;u32 i;float height;u8*obj;
temp_20=*(u8**)(*(u8**)(arg0+0x74)+0x4c);if(!temp_20)return;func_002060F8(temp_20);
temp_2=func_001E37E8(func_001E4280(),arg0+0x3c);if(!temp_2)return;
if(temp_2!=*(u8**)(arg0+0x6c)){*(u8**)(arg0+0x6c)=temp_2;*(s32*)(arg0+0x18)=0;}
func_002062A8(temp_20,arg0+0x70);temp_19=temp_20+0x20;
temp_2_2=func_001E3650(func_001E4280(),(s32)(arg0+0x40));
                sp40=&sp[16];sp10=&sp[4];sp20=&sp[8];sp30=&sp[12];
                sp40[1] = 0.0f;
                sp40[3] = 0.0f;
                sp40[0] = sp40[1];
                sp40[2] = 0.0f;
                sp[0] = 1.0f;
                sp[1] = sp40[1];
                sp[2] = sp40[1];
                sp[3] = sp40[1];
                sp40[1] = 1.0f;
                sp40[3] = 0.0f;
                sp40[2] = 0.0f;
                sp10[0] = sp40[0];
                sp10[1] = sp40[1];
                sp10[2] = sp40[2];
                sp10[3] = sp40[3];
                sp40[0] = 0.0f;
                sp40[1] = 0.0f;
                sp40[2] = 1.0f;
                sp40[3] = 0.0f;
                sp20[0] = sp40[0];
                sp20[1] = sp40[1];
                sp20[2] = sp40[2];
                sp20[3] = sp40[3];
                sp40[0] = 0.0f;
                sp40[1] = 0.0f;
                sp40[2] = 0.0f;
                sp40[3] = 1.0f;
                sp30[0] = sp40[0];
                sp30[1] = sp40[1];
                sp30[2] = sp40[2];
                sp30[3] = sp40[3];
                func_001525D8(sp, sp, 1.0f);
                
                sp30[0]=*(f32*)(temp_20+0x50);sp30[1]=*(f32*)(temp_20+0x54);sp30[2]=*(f32*)(temp_20+0x58);
                *(f32 *)(temp_20 + 0x20) = sp[0];
                *(f32 *)(temp_19 + 0x4) = sp[1];
                *(f32 *)(temp_19 + 0x8) = sp[2];
                *(f32 *)(temp_19 + 0xC) = sp[3];
                *(f32 *)(temp_20 + 0x30) = sp10[0];
                *(f32 *)(temp_20 + 0x34) = sp10[1];
                *(f32 *)(temp_20 + 0x38) = sp10[2];
                *(f32 *)(temp_20 + 0x3C) = sp10[3];
                *(f32 *)(temp_20 + 0x40) = sp20[0];
                *(f32 *)(temp_20 + 0x44) = sp20[1];
                *(f32 *)(temp_20 + 0x48) = sp20[2];
                *(f32 *)(temp_20 + 0x4C) = sp20[3];
                *(f32 *)(temp_20 + 0x50) = sp30[0];
                *(f32 *)(temp_20 + 0x54) = sp30[1];
                *(f32 *)(temp_20 + 0x58) = sp30[2];
                *(f32 *)(temp_20 + 0x5C) = sp30[3];
                

height=20.0f;selected=temp_2_2;*(s64*)(temp_20+0x78)=(*(s64*)(temp_20+0x78)&~1LL)|1;
if(selected<*(s32*)(arg0+0x18))*(s32*)(arg0+0x18)=selected;
if(selected>=*(s32*)(arg0+0x18)+*(s32*)(arg0+0x1c))*(s32*)(arg0+0x18)=selected-*(s32*)(arg0+0x1c)+1;
if(*(s32*)(arg0+0x18)<0)*(s32*)(arg0+0x18)=0;
obj=*(u8**)(*(u8**)(arg0+0x7c)+0x4c);*(s64*)(obj+0x78)=(*(s64*)(obj+0x78)&~1LL)|(*(s32*)(arg0+0x18)>0);
obj=*(u8**)(*(u8**)(arg0+0x80)+0x4c);*(s64*)(obj+0x78)=(*(s64*)(obj+0x78)&~1LL)|((u32)(*(s32*)(arg0+0x18)+*(s32*)(arg0+0x1c))<(u32)((*(s32*)(temp_2+4)-*(s32*)temp_2)>>2));
i=0;
while(i<(u32)((*(s32*)(temp_2+4)-*(s32*)temp_2)>>2) && (s32)i<*(s32*)(arg0+0x1c)){
idx=*(s32*)(arg0+0x18)+i;
if((u32)idx<(u32)((*(s32*)(temp_2+4)-*(s32*)temp_2)>>2)){
sp40[0]=0;sp40[1]=height;sp40[2]=0;func_002063A0(temp_20,sp40);
if(idx==selected)func_00206338(temp_20,D_0048D8A0);else func_00206338(temp_20,D_0048D890);
                    temp_16 = *(s32 *)(*(s32 *)temp_2 + idx * 4);
                    if (D_0040E658.unkC != 0) {
                        var_3 = func_00151930(&D_0040E658);
                    } else {
                        var_3 = (s32)((u8 *)&D_0040E658 + 0x10);
                        D_0040E658.unk8++;
                    }
                    *(void **)&sp40[0] = (void *)var_3;
                    func_00151A28((void **)&sp40[0], 0, 0xFFFFFFFFU, (void *)temp_16, func_003FA9B8(temp_16));
                    temp_5 = *(s32 *)((*(u8 **)&sp40[0]) - 0x10);
                    if (temp_5 != 0) {
                        if (*(u32 *)((*(u8 **)&sp40[0]) - 0x8) >= 2U) {
                            func_001537E8((void **)&sp40[0], (void*)temp_5, 1);
                        }
                        *(s32 *)((*(u8 **)&sp40[0]) - 4) = 1;
                        if (*((*(s8 **)&sp40[0]) + ((s32)temp_5 - 1)) != 0x2A) {
                        } else {
                            s32 var_3_2;
                            void *temp_16_2 = (void*)(*(s32*)((*(u8 **)&sp40[0])-16)-1);
                            if (D_0040E658.unkC != 0) {
                                var_3_2 = func_00151930(&D_0040E658);
                            } else {
                                var_3_2 = (s32)((u8 *)&D_0040E658 + 0x10);
                                D_0040E658.unk8++;
                            }
                            sp50 = (void *)var_3_2;
                            func_001539A0(&sp50, 0, 0xFFFFFFFFU, (void **)&sp40[0], 0, temp_16_2);
                            {
                                u8 *t4 = (*(u8 **)&sp40[0]) - 0x10;
                                s32 t2 = *(s32 *)(t4 + 8) - 1;
                                *(s32 *)(t4 + 8) = t2;
                                if (t2 == 0) {
                                    if (*(s32 *)(t4 + 4) + 16 != 0) {
                                        func_002B2028(t4);
                                    } else {
                                        *(u32 *)t4 = D_0040E618[-1];
                                        D_0040E618[-1] = (u32)t4;
                                    }
                                }
                            }
                            {
u8 *h=(u8*)sp50-16;void *p=sp50;
if (*(s32*)(h+12)) p=(void*)func_00151930(h);else (*(s32*)(h+8))++;
*(void **)&sp40[0]=p;
h=(u8*)sp50-16;
if (--*(s32*)(h+8)==0){if(*(s32*)(h+4)+16)func_002B2028(h);else{*(u32*)h=D_0040E618[-1];D_0040E618[-1]=(u32)h;}}
}
                        }
                        if(idx==selected)func_00206338(temp_20,D_0048D8C0);else func_00206338(temp_20,D_0048D8B0);
                        if(idx==selected){u8 *cursor=*(u8**)(*(u8**)(arg0+0x84)+0x4c);*(float*)(cursor+0x50)=*(float*)(temp_20+0x50)-26.0f;*(float*)(cursor+0x54)=height-4.0f+*(float*)(temp_20+0x54);}
                        {
                            u8 *temp_6 = *(u8 **)(temp_20 + 0) + 0x10;
                            void *var_5;
                            if (*(s32*)((*(u8 **)&sp40[0])-16) == 0) {
                                var_5 = &D_00444870;
                            } else {
                                *(u8 *)((*(u8 **)&sp40[0]) + *(s32*)((*(u8 **)&sp40[0])-16)) = 0;
                                var_5 = *(void **)&sp40[0];
                            }
                            ((void (*)(void *, void *, void *))*(void **)(temp_6 + 4))(
                                temp_20 + *(s16 *)(*(u8 **)(temp_20 + 0) + 0x10),
                                var_5,
                                temp_6
                            );
                        }
                    }
height+=-20.0f;release9(*(u8**)sp40);
}i++;}
func_00114678(arg0,3);
}
