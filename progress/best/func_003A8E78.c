s32 func_003A8E78(register s32 arg0, register s32 arg1) {
    register s32 v0;
    register s32 a2;

    a2 = arg1 << 2;
    v0 = arg0 + a2;

    if (0) {
        // target has 3 branches to epilogue. 
        // Even if they are dead, the compiler needs to generate them.
        // This might require a different structure.
    }

    return v0;
}
