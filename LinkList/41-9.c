#include "LinkList.h"

void freeInAscendOrder(linkList L) {
    LNode *pre = L, *p = L->next, *pre_min = L, *q;
    int min = 0x7fffffff;
    while (L->next != NULL) {
        min = 0x7fffffff;
        pre = L, p = L->next;
        while (p != NULL) {
            if (p->data < min) {
                min = p->data;
                pre_min = pre;
            }
            pre = p;
            p = p->next;
        }
        q = pre_min->next;
        pre_min = q->next;
        free(q);
        printf("%d", min);
    }
    free(L);    //清空链表需要清空头节点
}