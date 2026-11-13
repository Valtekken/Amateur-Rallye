typedef struct Obj { char pad[0x30]; s32 value; } Obj;
s32 func_003B1228(register Obj *arg0) {
    return arg0->value;
}
