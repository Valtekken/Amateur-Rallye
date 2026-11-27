#include "context.h"

typedef struct ListNode00256AB8 {
    /* 0x00 */ struct ListNode00256AB8 *next;
    /* 0x04 */ struct ListNode00256AB8 *prev;
    /* 0x08 */ s32 val;
} ListNode00256AB8;

typedef struct {
    /* 0x00 */ ListNode00256AB8 *head;
} ListRoot00256AB8;

extern void func_0025C650(void *ctx);
extern void func_0025C680(void *ctx, s32 val);
extern void func_0025C658(void *ctx, s32 mode);

void func_00256AB8(s32 arg0, ListRoot00256AB8 *arg1) {
    u8 ctx[0x40];
    ListNode00256AB8 *head;
    ListNode00256AB8 *curr;

    func_0025C650(ctx);

    head = arg1->head;
    curr = head->next;
    if (curr != head) {
        s32 val = curr->val;
        do {
            func_0025C680(ctx, val);
            curr = curr->next;
            head = arg1->head;
            if (curr == head) {
                break;
            }
            val = curr->val;
        } while (1);
    }

    func_0025C658(ctx, 2);
}
