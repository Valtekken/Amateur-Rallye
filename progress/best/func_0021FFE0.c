extern const char D_00478F98[];
extern const char D_00478FB0[];

extern int func_003F9698(const char *, ...);
extern int func_001D4010(void *);
extern int func_002AD350(float);

void func_0021FFE0(void *arg0) {
    void **node;
    func_003F9698(D_00478F98);
    node = *(void ***)((char *)arg0 + 4);
    if (node != (void **)arg0) {
        char *entity = (char *)node[0];
        do {
            int name = func_001D4010(entity + 0x5C);
            float *unk50 = *(float **)(entity + 0x50);
            int name_val = name;
            signed char drawPriority = *(signed char *)(entity + 0x48);
            float f0 = unk50[0x50 / 4];
            int group = *(int *)(entity + 0x74);
            int v0 = func_002AD350(f0);
            float *unk50_b = *(float **)(entity + 0x50);
            float f1 = unk50_b[0x54 / 4];
            int v1 = func_002AD350(f1);
            float *unk50_c = *(float **)(entity + 0x50);
            float f2 = unk50_c[0x58 / 4];
            int v2 = func_002AD350(f2);
            func_003F9698(D_00478FB0, entity, name_val, drawPriority, group, v0, v1, v2);

            node = (void **)node[1];
            if (node == (void **)arg0) break;
            entity = (char *)node[0];
        } while (1);
    }
}
