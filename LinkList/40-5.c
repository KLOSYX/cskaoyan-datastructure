#include "LinkList.h"

void reverseLinkList(linkList L)
{
    LNode *pre = L->next, *p = L->next->next, *q, *s;
    while(p != NULL) {
        s = (LNode *)malloc(sizeof(LNode));
        s->data = p->data;
        s->next = L->next->next;
        L->next = s;    
        // 头插法插入p节点
        q = p;
        p = p->next;
        pre->next = p;
        free(q);
        pre = p;
        p = p->next;
        //删除原节点
    }
}

// ！！改进：不需要额外的空间，直接调整原链表的指向即可

void reverseLinkList_2(linkList L)
{
    LNode *pre = L->next, *p = L->next->next, *q;
    while (p != NULL) {
        q = p;
        p = p->next;
        pre->next = p;
        // 将p节点前后节点连接，相当于单独提取出节点p
        q->next = L->next;
        L->next = q;
        // 头插法将节点p插入表头
    }
}