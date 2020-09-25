#include <stdio.h>
#include "LinkList.h"

void deleteElementBetween(linkList L, int min, int max) {
    LNode *pre = L, *p = L->next, *q;
    while (p != NULL) {
        if (p->data > min && p->data < max) {
            q = p;
            p = p->next;
            pre->next = p;
            free(q);
        }
        else {   
        pre = pre->next;
        p = p->next;
        }
    }
}