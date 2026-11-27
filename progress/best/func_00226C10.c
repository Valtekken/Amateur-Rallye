typedef struct Vec3 { f32 x, y, z; } Vec3;
typedef struct Node { struct Node *next; struct Node *prev; Vec3 *p; } Node;
typedef struct BBox {
    Node **items;
    Node **end;
    s32 pad8;
    Vec3 min;
    Vec3 max;
} BBox;

void func_00226C10(BBox *a)
{
    s32 count = (s32)(a->end - a->items);
    s32 first = 1;
    s32 i;
    Node *n;
    Vec3 *p;
    Node **q;

    for (i = 0; i < count; i++) {
        Node *elem;
        Node *head;
        q = a->items;
        q += i;
        elem = *q;
        head = elem->next;
        n = head->next;
        if (n != head) {
            do {
                p = n->p;
                if (first) {
                    Vec3 *mn = &a->min;
                    Vec3 *mx = &a->max;
                    first = 0;
                    mn->x = p->x; mn->y = p->y; mn->z = p->z;
                    mx->x = p->x; mx->y = p->y; mx->z = p->z;
                } else {
                    a->min.x = p->x < a->min.x ? p->x : a->min.x;
                    a->min.y = p->y < a->min.y ? p->y : a->min.y;
                    a->min.z = p->z < a->min.z ? p->z : a->min.z;
                    a->max.x = p->x < a->max.x ? a->max.x : p->x;
                    a->max.y = p->y < a->max.y ? a->max.y : p->y;
                    a->max.z = p->z < a->max.z ? a->max.z : p->z;
                }
                n = n->next;
            } while (n != elem->next);
        }
    }
}
