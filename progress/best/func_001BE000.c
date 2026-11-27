/* func_001BE000: based on m2c draft */ 
typedef struct {
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk18;
    void *unk1C;
    void *unk20;
    void *unk24;
    void *unk2C;
} S_D_00472F40;

extern void func_002B2028(s32);
extern void D_002AD390(s32);

void func_001BE000(s32 arg1) {
    S_D_00472F40 *this = (S_D_00472F40 *)0;  /* simplified */
    s32 temp_18;
    s32 var_16 = 0;
    s32 temp_6_2;
    s32 temp_6_3;
    s32 temp_6_4;
    s32 temp_6_5;
    s32 temp_4;
    s32 temp_4_2;
    s32 temp_2_7;
    
    /* this->unk0 = &D_00472F40; */;
    
    temp_18 = (s32)((this->unk8 - this->unk4) >> 2);
    /* if (temp_18 > 0) */;
    if (temp_18 > 0) {
        do {
            /* temp_6 = *(this->unk4 + (var_16 * 4)) */;
            /* if (temp_6 != NULL) */;
            /* temp_2 = temp_6->unkDC; */;
            /* temp_2->unkC(temp_6 + temp_2->unk8, 3, temp_6) */;
            var_16 += 1;
        } while (var_16 < temp_18);
    }
    /* temp_6_2 = this->unk1C; */;
    /* if (temp_6_2 != NULL) */;
    /* temp_2_2 = temp_6_2->unkDC; */;
    /* temp_2_2->unkC(temp_6_2 + temp_2_2->unk8, 3, temp_6_2) */;
    /* temp_6_3 = this->unk20; */;
    /* if (temp_6_3 != NULL) */;
    /* temp_2_3 = temp_6_3->unkDC; */;
    /* temp_2_3->unkC(temp_6_3 + temp_2_3->unk8, 3, temp_6_3) */;
    /* temp_6_4 = this->unk24; */;
    /* if (temp_6_4 != NULL) */;
    /* temp_2_4 = temp_6_4->unkDC; */;
    /* temp_2_4->unkC(temp_6_4 + temp_2_4->unk8, 3, temp_6_4) */;
    /* temp_6_5 = this->unk2C; */;
    /* if (temp_6_5 != NULL) */;
    /* temp_2_5 = temp_6_5->unkDC; */;
    /* temp_2_5->unkC(temp_6_5 + temp_2_5->unk8, 3, temp_6_5) */;
    /* temp_4 = this->unk10; */;
    temp_2_7 = (s32)((this->unk18 - temp_4) >> 2);
    /* if (temp_2_6 != 0) */;
    if (temp_2_7 != 0) {
        /* if ((temp_2_7 * 4) != 0) */;
        func_002B2028(temp_4);
    } else {
        /* *temp_4 = D_0040E618.unk-4; */;
        /* D_0040E618.unk-4 = temp_4; */;
    }
    /* temp_4_2 = this->unk4; */;
    /* temp_2_7 = (s32) (this->unkC - temp_4_2) >> 2; */;
    /* if (temp_2_7 != 0) */;
    if (temp_2_7 != 0) {
        /* if ((temp_2_7 * 4) != 0) */;
        func_002B2028(temp_4_2);
    } else {
        /* *temp_4_2 = D_0040E618.unk-4; */;
        /* D_0040E618.unk-4 = temp_4_2; */;
    }
    /* this->unk0 = &D_004737B0; */;
    /* if (arg1 & 1) */;
    if (arg1 & 1) {
        D_002AD390(0);  /* simplified */
    }
}
