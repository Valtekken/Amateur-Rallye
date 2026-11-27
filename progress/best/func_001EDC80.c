typedef struct LB_Node { s32 color; struct LB_Node *parent, *left, *right; s32 value[2]; } LB_Node;
typedef struct { LB_Node *head; u32 count; } LB_Tree;
typedef struct { LB_Node *node; s32 found; } LB_Result;
extern LB_Node **func_001ED900(LB_Node **out, LB_Tree *t, s32 hint, LB_Node *parent, s32 *value);

void *func_001EDC80(void *arg0, LB_Tree *arg1, s32 *arg2, void *arg5) {
    void *sp0[4], *sp10[4], *sp20[4];
    s32 var_2;
    LB_Node **var_9;
    LB_Node *var_7, *var_6;
    LB_Node *temp_2, *temp_3, *temp_3_2;
    LB_Node *var_3, *var_3_2, *var_4;

    var_7 = arg1->head;
    var_6 = var_7->parent;
    var_2 = 1;
    if (var_6 != NULL) {
        var_7 = var_6;
loop_2:
        var_2 = *arg2 < var_7->value[0];
        if (var_2 == 0) var_6 = var_7->right;
        else var_6 = var_7->left;
        if (var_6 != NULL) {
            var_7 = var_6;
            goto loop_2;
        }
    }
    sp0[0] = var_7;
    if (var_2 != 0) {
        temp_3 = arg1->head->left;
        sp10[0] = temp_3;
        if (var_7 == temp_3) {
            func_001ED900((LB_Node **)sp20, arg1, (s32)var_6, var_7, arg2);
            var_3 = (LB_Node *)sp20[0];
            goto block_29;
        }
        var_9 = (LB_Node **)sp0;
        if ((var_7->color == 0) && (var_7->parent->parent == var_7)) {
            sp0[0] = var_7->right;
        } else {
            temp_3_2 = (LB_Node *)var_9[0];
            temp_2 = temp_3_2->left;
            if (temp_2 != NULL) {
                var_3_2 = temp_2;
                if (var_3_2->right == NULL) {
                    var_9[0] = var_3_2;
                } else {
                    do {
                        var_3_2 = var_3_2->right;
                    } while (var_3_2->right != NULL);
                    var_9[0] = var_3_2;
                }
            } else {
                var_4 = temp_3_2->parent;
                var_9[0] = var_4;
                if (temp_3_2 == var_4->left) {
                    do {
                        var_4 = var_4->parent;
                        var_9[0] = var_4;
                    } while (var_9[0] == var_4->left);
                }
            }
        }
        goto block_25;
    }
block_25:
    if (((LB_Node *)sp0[0])->value[0] < *arg2) {
        func_001ED900((LB_Node **)sp10, arg1, (s32)var_6, var_7, arg2);
        var_3 = (LB_Node *)sp10[0];
block_29:
        ((LB_Result *)arg0)->found = 1;
        ((LB_Result *)arg0)->node = var_3;
    } else {
        ((LB_Result *)arg0)->node = (LB_Node *)sp0[0];
        ((LB_Result *)arg0)->found = 0;
    }
    return arg0;
}
