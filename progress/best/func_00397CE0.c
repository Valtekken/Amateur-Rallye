typedef struct {s32 x[3];} CopyTag;
extern s32 func_002C5160(s32,s32,s32,CopyTag);
s32 func_003978C8(register s32 a, register s32 b, register s32 c, register s32 d){return func_002C5160(a,b,c,(CopyTag){0});}

typedef struct {s32 x[6];} E3976;
E3976* func_003976B0(s32);
E3976* func_00397678(s32);
s32 func_003976E8(register s32 a){register E3976* e=func_003976B0(a); return e-func_00397678(a);}

s32 func_00397C98(register s32 a0, register s32 a1, register s32* a2, register s32 a3){
    *a2 += (a1 - a0) >> 3;
    return a3;
}

s32 func_00397C40(s32*);
void func_00397CE0(s32 arg0, s32 arg1, s32 arg2) {
    s32 local = arg0;
    s32 r = func_00397C40(&local);
    func_00397C98(local, arg1, arg2, r);
}
