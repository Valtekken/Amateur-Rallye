typedef struct VT VT;
typedef struct RefObj RefObj;

struct VT {
    int unk_00;
    int unk_04;
    short off;
    short pad;
    void (*destroy)(void *, int);
};

struct RefObj {
    int count;
    VT *vt;
    int num_vectors;
    char pad_0C[4];
    struct Vec3 *vectors;
};

struct Vec3 {
    f32 x, y, z;
};

extern void func_0022DB70(void *, s32, RefObj **);
extern void func_0024F6E0(RefObj **, RefObj *);
extern f32 func_003F3E80(f32);

static inline void release(RefObj *p) {
    if (p && --p->count == 0) {
        p->vt->destroy((char *)p + p->vt->off, 3);
    }
}

f32 func_0022DCC8(s32 arg0, RefObj **arg1) {
    struct {
        f32 ref_vec[3];
        int pad_0C;
        RefObj *local_ref;
        int pad_14[3];
    } stack_slot;

    RefObj *arg1_obj = *arg1;
    RefObj *local_ref;
    f32 max_dist_sq = 0.0f;
    f32 cached_f20;
    struct Vec3 *vec;
    int count;

    if (arg1_obj) {
        arg1_obj->count++;
    }

    func_0022DB70(&stack_slot, arg0, &stack_slot.local_ref);
    func_0024F6E0(&stack_slot.local_ref, arg1_obj);

    local_ref = stack_slot.local_ref;

    if (local_ref && local_ref->num_vectors > 0) {
        vec = local_ref->vectors;
        count = local_ref->num_vectors;
        do {
            f32 dx = stack_slot.ref_vec[0] - vec->x;
            f32 dy = stack_slot.ref_vec[1] - vec->y;
            f32 dz = stack_slot.ref_vec[2] - vec->z;
            f32 dist_sq = dx*dx + dy*dy + dz*dz;
            if (max_dist_sq < dist_sq) {
                max_dist_sq = dist_sq;
            }
            vec++;
            count--;
        } while (count != 0);
    }

    if (cached_f20 != cached_f20) {
        cached_f20 = func_003F3E80(max_dist_sq);
    }

    release(local_ref);
    release(arg1_obj);

    return cached_f20;
}
