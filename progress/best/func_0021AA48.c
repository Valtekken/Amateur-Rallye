#include "context.h"

typedef struct {
    f32 f[13];
    s32 i;
} Elem38;

typedef struct {
    Elem38 *start;
    Elem38 *finish;
    Elem38 *end_of_storage;
} Vector38;

extern Elem38 *func_0021A860(Elem38 *, Elem38 *, Elem38 *, s32);
extern void func_0021A910(Elem38 *, Elem38 *, const Elem38 *);
extern Elem38 *func_0021A9A8(Elem38 *, u32, const Elem38 *, s32);
extern void *func_002B1FC0(u32);
extern void func_002B2028(void *);
extern void *func_003D2910(u32);
extern void *func_00152D28(s32);
extern void *D_0040E618[];

static inline Elem38 *Alloc38(u32 n) {
    u32 bytes;
    void *res;
    if (n == 0) {
        return 0;
    }
    bytes = n * (u32)sizeof(Elem38);
    if (bytes != 0) {
        res = func_002B1FC0(bytes);
        if (res == 0) {
            res = func_003D2910(bytes);
        }
        return (Elem38 *)res;
    } else {
        void **free_list = &D_0040E618[-1];
        void *head = *free_list;
        if (head == 0) {
            return (Elem38 *)func_00152D28(0);
        }
        *free_list = *(void **)head;
        return (Elem38 *)head;
    }
}

static inline void Dealloc38(Elem38 *p, u32 n) {
    if (n != 0) {
        u32 bytes = n * (u32)sizeof(Elem38);
        if (bytes != 0) {
            func_002B2028(p);
        } else {
            void **free_list = &D_0040E618[-1];
            *(void **)p = *free_list;
            *free_list = p;
        }
    }
}

static inline void CopyBackward38(Elem38 *first, Elem38 *last, Elem38 *result) {
    while (first != last) {
        *--result = *--last;
    }
}

void func_0021AA48(Vector38 *vec, Elem38 *position, u32 n, const Elem38 *x) {
    if (n != 0) {
        if ((u32)(vec->end_of_storage - vec->finish) >= n) {
            Elem38 x_copy = *x;
            const u32 elems_after = vec->finish - position;
            Elem38 *old_finish = vec->finish;
            if (elems_after > n) {
                func_0021A860(vec->finish - n, vec->finish, vec->finish, 0);
                vec->finish += n;
                CopyBackward38(position, old_finish - n, old_finish);
                func_0021A910(position, position + n, &x_copy);
            } else {
                func_0021A9A8(vec->finish, n - elems_after, &x_copy, 0);
                vec->finish += n - elems_after;
                func_0021A860(position, old_finish, vec->finish, 0);
                vec->finish += elems_after;
                func_0021A910(position, old_finish, &x_copy);
            }
        } else {
            const u32 old_size = vec->finish - vec->start;
            const u32 len = old_size + (old_size < n ? n : old_size);
            Elem38 *new_start = Alloc38(len);
            Elem38 *new_finish = new_start;
            Elem38 *p;

            new_finish = func_0021A860(vec->start, position, new_start, 0);
            new_finish = func_0021A9A8(new_finish, n, x, 0);
            new_finish = func_0021A860(position, vec->finish, new_finish, 0);

            for (p = vec->start; p < vec->finish; p++) {
            }
            Dealloc38(vec->start, vec->end_of_storage - vec->start);

            vec->start = new_start;
            vec->finish = new_finish;
            vec->end_of_storage = new_start + len;
        }
    }
}
