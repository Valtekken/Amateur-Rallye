extern void func_001577C8(void *, void **, void *);
extern void func_003302B8(void *);

typedef struct {
    void *unk0;
    void **begin;
    void **end;
} Vec;

void func_003301C8(void *obj, void *arg1) {
    s32 sp0;
    u8 *obj_u8 = (u8 *)obj;
    u8 *arg1_u8 = (u8 *)arg1;
    
    sp0 = (s32)arg1;
    s8 val48 = *(s8 *)(arg1_u8 + 0x48);
    s32 unk2C = *(s32 *)(obj_u8 + 0x2C);
    
    if (val48 != unk2C) {
        *(s32 *)(obj_u8 + 0x2C) = val48;
        func_003302B8(obj);
    }
    
    Vec *vec1 = (Vec *)(obj_u8 + 0x8);
    s32 val50 = *(s32 *)(arg1_u8 + 0x50);
    
    if (val50 != 0) {
        void **begin = vec1->begin;
        void **end = vec1->end;
        
        if (begin != end) {
            if (begin != NULL) {
                *begin = arg1;
            }
            vec1->begin = begin + 1;
        } else {
            func_001577C8(vec1, begin, &sp0);
        }
    }
    
    void *obj4C = *(void **)(arg1_u8 + 0x4C);
    if (obj4C != NULL) {
        u8 *obj4C_u8 = (u8 *)obj4C;
        s32 val64 = *(s32 *)(obj4C_u8 + 0x64);
        Vec *vec2;
        
        if (val64 == 2) {
            vec2 = (Vec *)(obj_u8 + 0x20);
        } else {
            vec2 = (Vec *)(obj_u8 + 0x14);
        }
        
        void **begin2 = vec2->begin;
        void **end2 = vec2->end;
        
        if (begin2 != end2) {
            if (begin2 != NULL) {
                *begin2 = arg1;
            }
            vec2->begin = begin2 + 1;
        } else {
            func_001577C8(vec2, begin2, &sp0);
        }
    }
}
