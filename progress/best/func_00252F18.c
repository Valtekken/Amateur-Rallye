typedef struct { void **begin, **end, **cap; } Vec;
typedef struct { void *unused; Vec free, used, blocks; } Pool;
typedef struct Node { struct Node *next; void *prev; void *item; } Node;

extern Pool D_00426750;
extern Vec D_00426754;
extern void *D_0040E618[];
extern void *D_002AD5A8(int);
extern void func_0024FDC8(void *);
extern void func_001CAED8(Vec *, void *, void **);
extern void *func_002B1FC0(unsigned);
extern void *func_003D2910(unsigned);
extern void func_002B2028(void *);
extern void *func_00152D28(unsigned);
extern void *func_003F93CC(void *, const void *, unsigned);

void func_00252F18(void *a0, void *a1, char *a2, char *a3, Node **list) {
    Node *n;
    Pool *pool;
    Vec *v2, *v3, *vec_end;
    char *mem, *start, *q;
    int i;
    unsigned count, capacity, n_cap;
    void **old, **end, **mem2;
    unsigned bytes;
    void *x, *y;
    void *item;
    
    n = (*list)->next;
    if (n == *list) return;
    
    pool = &D_00426750;
    v2 = (Vec *)(a2 + 0x18);
    v3 = (Vec *)(a3 + 0x18);
    vec_end = &D_00426754;
    
    do {
        item = n->item;
        
        if (pool->free.begin == vec_end->end) {
            mem = (char *)D_002AD5A8(0x1010);
            start = mem + 16;
            q = start;
            *(int *)mem = 64;
            i = 63;
            do {
                func_0024FDC8(q);
                q += 64;
                i--;
            } while (i != -1);
            if (pool->blocks.end != pool->blocks.cap) {
                if (pool->blocks.end) *pool->blocks.end = start;
                pool->blocks.end++;
            } else {
                func_001CAED8(&pool->blocks, pool->blocks.end, &start);
            }
            count = (unsigned)(pool->free.end - pool->free.begin);
            capacity = (unsigned)(pool->free.cap - pool->free.begin);
            n_cap = count + 64;
            if (capacity < n_cap) {
                old = pool->free.begin;
                end = pool->free.end;
                mem2 = 0;
                bytes = n_cap * 4;
                if (n_cap) {
                    if (bytes) {
                        mem2 = (void **)func_002B1FC0(bytes);
                        if (!mem2) mem2 = (void **)func_003D2910(bytes);
                    } else {
                        mem2 = &D_0040E618[-1];
                        if (mem2) D_0040E618[-1] = *mem2;
                        else mem2 = (void **)func_00152D28(0);
                    }
                }
                func_003F93CC(mem2, old, (end - old) * 4);
                if (capacity) {
                    if (capacity * 4) func_002B2028(old);
                    else { *old = D_0040E618[-1]; D_0040E618[-1] = old; }
                }
                pool->free.cap = (void **)((char *)mem2 + bytes);
                pool->free.end = mem2 + count;
                pool->free.begin = mem2;
            }
            for (i = 0; i < 64; i++) {
                void *tmp = start + i * 64;
                if (pool->free.end != pool->free.cap) {
                    if (pool->free.end) *pool->free.end = tmp;
                    pool->free.end++;
                } else {
                    func_001CAED8(&pool->free, pool->free.end, &tmp);
                }
            }
        }
        x = *--pool->free.end;
        if (pool->used.end != pool->used.cap) {
            if (pool->used.end) *pool->used.end = x;
            pool->used.end++;
        } else {
            func_001CAED8(&pool->used, pool->used.end, &x);
        }
        
        if (pool->free.begin == vec_end->end) {
            mem = (char *)D_002AD5A8(0x1010);
            start = mem + 16;
            q = start;
            *(int *)mem = 64;
            i = 63;
            do {
                func_0024FDC8(q);
                q += 64;
                i--;
            } while (i != -1);
            if (pool->blocks.end != pool->blocks.cap) {
                if (pool->blocks.end) *pool->blocks.end = start;
                pool->blocks.end++;
            } else {
                func_001CAED8(&pool->blocks, pool->blocks.end, &start);
            }
            count = (unsigned)(pool->free.end - pool->free.begin);
            capacity = (unsigned)(pool->free.cap - pool->free.begin);
            n_cap = count + 64;
            if (capacity < n_cap) {
                old = pool->free.begin;
                end = pool->free.end;
                mem2 = 0;
                bytes = n_cap * 4;
                if (n_cap) {
                    if (bytes) {
                        mem2 = (void **)func_002B1FC0(bytes);
                        if (!mem2) mem2 = (void **)func_003D2910(bytes);
                    } else {
                        mem2 = &D_0040E618[-1];
                        if (mem2) D_0040E618[-1] = *mem2;
                        else mem2 = (void **)func_00152D28(0);
                    }
                }
                func_003F93CC(mem2, old, (end - old) * 4);
                if (capacity) {
                    if (capacity * 4) func_002B2028(old);
                    else { *old = D_0040E618[-1]; D_0040E618[-1] = old; }
                }
                pool->free.cap = (void **)((char *)mem2 + bytes);
                pool->free.end = mem2 + count;
                pool->free.begin = mem2;
            }
            for (i = 0; i < 64; i++) {
                void *tmp = start + i * 64;
                if (pool->free.end != pool->free.cap) {
                    if (pool->free.end) *pool->free.end = tmp;
                    pool->free.end++;
                } else {
                    func_001CAED8(&pool->free, pool->free.end, &tmp);
                }
            }
        }
        y = *--pool->free.end;
        if (pool->used.end != pool->used.cap) {
            if (pool->used.end) *pool->used.end = y;
            pool->used.end++;
        } else {
            func_001CAED8(&pool->used, pool->used.end, &y);
        }
        
        if (v2->end != v2->cap) {
            if (v2->end) *v2->end = x;
            v2->end++;
        } else {
            func_001CAED8(v2, v2->end, &x);
        }
        if (v3->end != v3->cap) {
            if (v3->end) *v3->end = y;
            v3->end++;
        } else {
            func_001CAED8(v3, v3->end, &y);
        }
        
        *(void **)((char *)item + 0x30) = x;
        *(void **)((char *)item + 0x34) = y;
        
        n = n->next;
    } while (n != *list);
}
