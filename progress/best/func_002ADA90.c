extern void func_002AD918(void);
extern void func_002AD758(void);

typedef struct Node {
    struct Node *next;
    void (*fn)(void *, int, void **);
    void *ctx;
} Node;

typedef struct Header {
    void *p0;
    Node *chain;
} Header;

typedef struct Frame {
    void *f0;
    void *f4;
    void *f8;
} Frame;

void func_002ADA90(void) {
    // Reconstructing the logic from the assembly.
    // The function seems to handle exception handling (EH) context.
}
