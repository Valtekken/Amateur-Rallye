typedef struct RBNode {
    s32 color;
    struct RBNode *parent;
    struct RBNode *left;
    struct RBNode *right;
} RBNode;

typedef struct {
    s32 unk_00;
    RBNode *node;
} Arg0;

typedef struct {
    RBNode *root;
} Arg1;

extern void func_003ACDA0(RBNode *, Arg1 *);
extern void func_003ACE60(RBNode *, Arg1 *);

void func_003A57D0(Arg0 *arg0, Arg1 *arg1) {
    register Arg0 *var_17 = arg0;
    RBNode *sp0;
    
    var_17->unk_00 = 0;
    
loop_1:
    if (var_17 != arg1->root) {
        RBNode *node = var_17->node;
        if (node != NULL && node->color == 0) {
            RBNode *parent = node->parent;
            if (node == parent->left) {
                RBNode *sibling = parent->right;
                sp0 = sibling;
                if (sibling != NULL && sibling->color == 0) {
                    node->color = 1;
                    sibling->color = 1;
                    parent->color = 0;
                    var_17 = (Arg0 *)parent;
                    goto loop_1;
                } else {
                    if (var_17 == (Arg0 *)node->right) {
                        var_17 = (Arg0 *)node;
                        func_003ACDA0(node, arg1);
                    } else {
                        node->color = 1;
                        parent->color = 0;
                        func_003ACE60(parent, arg1);
                    }
                }
            } else {
                RBNode *sibling = parent->left;
                sp0 = sibling;
                if (sibling != NULL && sibling->color == 0) {
                    node->color = 1;
                    sibling->color = 1;
                    parent->color = 0;
                    var_17 = (Arg0 *)parent;
                    goto loop_1;
                } else {
                    if (var_17 == (Arg0 *)node->left) {
                        var_17 = (Arg0 *)node;
                        func_003ACE60(node, arg1);
                    } else {
                        node->color = 1;
                        parent->color = 0;
                        func_003ACDA0(parent, arg1);
                    }
                }
            }
        }
    }
    arg1->root->color = 1;
}
