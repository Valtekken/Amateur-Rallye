typedef struct { void *begin; void *end; void *cap; } Vec;

extern void *func_00151C90(void *, void *, void *, int);
extern void func_002B2028(void *);
extern void *func_00152D28(void *);

void func_00151D18(void *arg0, void *arg1, void *arg2) {
    Vec *v = (Vec *)arg0;
    Vec *pos = (Vec *)arg1;
    Vec *src = (Vec *)arg2;
    Vec tmp;
    
    if (v->end != v->cap) {
        Vec *end = v->end;
        if (end) {
            Vec *d = end;
            Vec *s = end - 1;
            int cn = (s32)(((s32)s->end - (s32)s->begin) * 0xAAAAAAAB) >> 4;
            void *cp = 0;
            d->begin = 0;
            d->end = 0;
            d->cap = 0;
            if (cn != 0) {
                int bytes = cn * 0x30;
                if (bytes != 0) {
                    // Mocking the logic
                }
            }
            d->begin = cp; d->end = cp; d->cap = (void *)((u8 *)cp + cn * 0x30);
            // d->end = (void *)func_001C7D18(s->begin, s->end, cp, 0);
        }
        v->end++;
        // ...
    }
}
