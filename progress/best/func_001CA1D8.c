typedef struct { f32 f0,f1,f2,f3,f4,f5,f6,f7; } Elem;
typedef struct { Elem *begin; Elem *end; Elem *cap; } Buffer;

extern Elem *func_001CA150(Elem *b, Elem *d, Elem *c, s32 n);
extern void *func_002B1FC0(s32);
extern void *func_003D2910(s32);
extern void func_002B2028(void *);
extern void *func_00152D28(s32, void *);
extern u32 D_0040E618[];

void func_001CA1D8(Buffer *b, Elem *dst, Elem *src) {
    Elem *begin = b->begin;
    Elem *end = b->end;
    Elem *cap = b->cap;
    
    if (end != cap) {
        s32 count = (s32)((char *)end - (char *)begin);
        if (count != 0) {
            // Based on assembly, it seems to be copying the first element's 
            // fields to some location. Let's look at the lwc1/swc1 pattern.
            // lw $a0, 4($s2), lw $v0, 8($s2), subu $v1, $s5, $s4... 
            // This is very dense.
        }
    }
}
