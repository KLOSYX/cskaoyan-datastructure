#include "LinkList.h"

void deleteElementX(linkList L, int x) {
    LNode *pre = L, *p = L->next, *q;
    while (p != NULL) {
        if (p == x) {
            q = p;
            p = p->next;
            pre->next = p;
            free(q);
        }
        else {
            p = p->next;
            pre = pre->next;
        }
    }
}