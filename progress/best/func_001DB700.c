typedef struct {
    f32 *start;
    f32 *end;
    f32 *capacity;
} ArrayStruct;

typedef struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 count;
} DebugCounter;

extern DebugCounter D_004262B0;
extern char *D_004767D0;
extern char *D_004767F0;
extern char *D_004767F8;
extern char *D_00476810;

extern s32 func_002AD350(f32);
extern void func_003F9698(char *, ...);

void func_001DB700(ArrayStruct *arr, char *str) {
    f32 *loop_ptr = arr->start;
    f32 *start_ptr = arr->start;
    s32 size_diff;
    s32 capacity_diff;
    s32 idx;
    s32 v1;
    s32 v2;
    
    if (str == 0) {
        str = D_004767F0;
    }
    
    size_diff = (s32)((char*)arr->end - (char*)arr->start) >> 3;
    capacity_diff = (s32)((char*)arr->capacity - (char*)arr->start) >> 3;
    
    func_003F9698(D_004767D0, (s32)str, size_diff, capacity_diff);
    
    D_004262B0.count = D_004262B0.count + 1;
    
    while (loop_ptr != arr->end) {
        idx = (s32)((char*)loop_ptr - (char*)start_ptr) >> 3;
        v1 = func_002AD350(loop_ptr[0]);
        v2 = func_002AD350(loop_ptr[1]);
        func_003F9698(D_004767F8, idx, v1, v2);
        loop_ptr = loop_ptr + 2;
    }
    
    D_004262B0.count = D_004262B0.count - 1;
    func_003F9698(D_00476810);
}
