typedef struct { char x[12]; } E;
typedef struct { E *b, *e, *c; } V;
E *func_003AA1C0(V *);
s32 func_0039E598(register V *a) { return a->c - func_003AA1C0(a); }
