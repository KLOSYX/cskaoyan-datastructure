#include "LinkList.h"

void seperateToAB(linkList &L, linkList &a, linkList &b) {
    LNode *p = L->next;
    LNode *head_a = (linkList)malloc(sizeof(LNode)), *head_b = (linkList)malloc(sizeof(LNode));
    LNode *p_a = head_a, *p_b = head_b;
    int count = 1;
    while (p != NULL) {
        if (count % 2 == 1) {
            p_a->next = (LNode *)malloc(sizeof(LNode));
            p_a = p->next;
            p_a->next = NULL;
            p_a->data = p->data;
        }
        else
        {
            p_b->next = (LNode *)malloc(sizeof(LNode));
            p_b = p->next;
            p_b->next = NULL;
            p_b->data = p->data;
        }
        p = p->next;
        ++count;
    }
    a = head_a;
    b = head_b;
}