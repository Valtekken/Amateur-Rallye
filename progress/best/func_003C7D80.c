typedef unsigned long long u64;
typedef signed long long s64;
typedef signed short s16;
typedef signed int s32;
typedef unsigned int __attribute__((mode(TI))) u128;

typedef struct Dma {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    u64 unk10;
    u64 unk18;
    s64 unk20;
    s64 unk28;
    s64 unk30;
    s64 unk38;
    s64 unk40;
    s64 unk48;
    s64 unk50;
    s64 unk58;
    s64 unk60;
    s64 unk68;
} Dma;

s32 func_003C7D80(Dma *arg0, s16 arg1, s32 arg2, s16 arg3, s16 arg4, s32 arg5, s16 arg6, s16 arg7)
{
    u64 v12;
    u64 v13;
    s64 a1, a3, a4, a6, a7;
    s64 v5, v8, v10;

    *(u128 *)&arg0->unk10 = 0;

    a1 = (s64)arg1;
    a3 = (s64)arg3;
    a4 = (s64)arg4;
    a6 = (s64)arg6;
    a7 = (s64)arg7;

    v12 = arg0->unk10;
    v13 = arg0->unk18;

    v12 &= (u64)-0x8000;
    v12 |= 5;
    v12 |= 0x8000;
    v12 &= (u64)-1 >> 4;

    v5 = ((s64)(s32)(arg2 << 16)) | ((a1 << 48) >> 48);
    v5 |= ((a3 << 48) >> 24);

    v8 = ((s64)(s32)(arg5 << 16)) | ((a4 << 48) >> 48);

    v10 = ((a6 << 48) >> 48) | ((a7 << 48) >> 16);

    v13 &= (u64)-0x10;
    v12 |= ((u64)0x8000 << 45);
    v13 |= 0xE;

    arg0->unk4 = 0x06008000;
    arg0->unk68 = 0x53;
    arg0->unk8 = 0x13000000;
    arg0->unkC = 0x50000006;
    arg0->unk10 = v12;
    arg0->unk18 = v13;
    arg0->unk20 = v5;
    arg0->unk28 = 0x50;
    arg0->unk30 = v8;
    arg0->unk38 = 0x51;
    arg0->unk40 = v10;
    arg0->unk48 = 0x52;
    arg0->unk58 = 0x61;
    arg0->unk60 = 1;
    arg0->unk0 = 0;
    arg0->unk50 = 0;
    return 7;
}
