#include "context.h"

extern void func_002B2028(void *);
extern void D_002AD390(void *);
extern void *D_0040E618[];
extern void *D_0044CD00[];
extern void *D_0044DCD8[];

typedef struct {
    u8 pad[0x24];
} Elem24;

typedef struct {
    Elem24 *start;
    Elem24 *finish;
    Elem24 *end_of_storage;
} Vector24;

typedef struct {
    u8 pad[0x8];
    void **vptr;
    u8 pad2[0x98];
    Vector24 vec;
} Obj_00141AC0;

static inline void DestroyRange(Elem24 *first, Elem24 *last) {
    while (first < last) {
        first++;
    }
}

static inline void VectorClear(Vector24 *v) {
    Elem24 *first = v->start;
    Elem24 *last = v->finish;
    s32 diff = (u8 *)last - (u8 *)first;
    DestroyRange(first, last);
    v->finish = (Elem24 *)((u8 *)last - diff);
}

static inline void VectorDestroy(Vector24 *v) {
    Elem24 *start;
    s32 cap;
    DestroyRange(v->start, v->finish);
    start = v->start;
    cap = v->end_of_storage - start;
    if (cap != 0) {
        s32 bytes = cap * (s32)sizeof(Elem24);
        if (bytes != 0) {
            func_002B2028(start);
        } else {
            *(void **)start = D_0040E618[-1];
            D_0040E618[-1] = start;
        }
    }
}

void func_00141AC0(Obj_00141AC0 *arg0, s32 arg1) {
    arg0->vptr = D_0044CD00;
    VectorClear(&arg0->vec);
    VectorDestroy(&arg0->vec);
    arg0->vptr = D_0044DCD8;
    if (arg1 & 1) {
        D_002AD390(arg0);
    }
}
