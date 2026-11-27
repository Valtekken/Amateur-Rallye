#include "context.h"

typedef struct {
    f32 key;
    s32 val;
} HeapElem;

extern void func_001C8B70(HeapElem *, s32, s32, HeapElem);

void func_001C8C10(HeapElem *first, s32 holeIndex, s32 len, HeapElem value) {
    s32 topIndex = holeIndex;
    s32 secondChild = 2 * holeIndex + 2;

    while (secondChild < len) {
        if (first[secondChild - 1].key < first[secondChild].key) {
            secondChild--;
        }
        first[holeIndex] = first[secondChild];
        holeIndex = secondChild;
        secondChild = 2 * (secondChild + 1);
    }

    if (secondChild == len) {
        first[holeIndex] = first[secondChild - 1];
        holeIndex = secondChild - 1;
    }

    func_001C8B70(first, holeIndex, topIndex, value);
}
