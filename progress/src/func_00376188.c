typedef struct { s64 a, b, c, d; } __attribute__((packed)) P32;
typedef struct { P32 *b, *e, *c; } V32;

extern u32 D_0040E618[];
extern void *func_002B1FC0(int), *func_003D2910(int), *func_00152D28(int);
extern void func_002B2028(void*);
extern void* func_00326C10(P32*, P32*, P32*, int);

static inline P32* range(P32* a, P32* b, P32* c){return (P32*)func_00326C10(a,b,c,0);}
static inline void copy(P32* d, const P32* s){*d=*s;}
static inline void construct(void* ptr, const P32* s){if(ptr){P32* d=(P32*)ptr;copy(d,s);}}
static inline void append(P32** p, P32* val){construct(*p, val); ++*p;}
static inline P32* backcopy(P32* first, P32* last, P32* result){int n = last - first; while (n > 0) { --result; --last; copy(result, last); --n; } return result;}
static inline void* memalloc(int n){void* p = func_002B1FC0(n); if (!p) p = func_003D2910(n); return p;}
static inline P32* allocate(u32 n, int* bytes){P32* p; *bytes = n * 32; if (n) { if (*bytes) { p = memalloc(*bytes); } else { u32* q = (u32*)D_0040E618[-1]; if (!q) p = func_00152D28(0); else { u32 next = *q; p = (P32*)q; D_0040E618[-1] = next; } } } else { p = 0; *bytes = 0; } return p;}
static inline void dispose(P32* p, int n){ if (n) { if (n * 32) func_002B2028(p); else { *(u32*)p = D_0040E618[-1]; D_0040E618[-1] = (u32)p; } } }

void func_00376188(V32* v, P32* pos, P32* val){
    if (v->e != v->c) {
        P32 tmp; P32 *last = v->e;
        if (last) copy(last, last - 1);
        v->e++;
        tmp = *val;
        backcopy(pos, v->e - 2, v->e - 1);
        copy(pos, &tmp);
    } else {
        u32 n = v->e - v->b;
        int bytes;
        P32 *p, *cur, *end, *q;
        n = n ? n * 2 : 1;
        p = allocate(n, &bytes);
        { P32* first = v->b; P32* dest = p; cur = range(first, pos, dest); }
        append(&cur, val);
        end = range(pos, v->e, cur);
        for (q = v->b; q < v->e; q++) {}
        dispose(v->b, v->c - v->b);
        v->b = p;
        v->e = end;
        v->c = (P32*)((char*)p + bytes);
    }
}
