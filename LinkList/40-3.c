#include "LinkList.h"
#include <stdio.h>

void reversePrint(linkList L) {
    LNode *L1 = L, *p = L->next;
    LNode *L2, *q;
    L2 = (LNode *)malloc(sizeof(LNode));
    L2->next = NULL;
    while (p != NULL)
    {
        q = (LNode *)malloc(sizeof(LNode));
        q->data = p->data;
        q->next = L2->next;
        L2->next = q;
        p = p->next;
    }   // 构建新链表L2，使用前插法依次插入原链表元素，实现元素顺序的反向，同时不修改原表内容
    q = L2->next;
    while (q != NULL) {
        printf("%d", q->data);  // 依次输出新表内容
        q = q->next;
    }
}

// ！！！能用栈解决的问题自然可以用递归解决

void reversePrint2(linkList L) {
    LNode *p = L->next;
    if (p->next != NULL) {
        reversePrint2(p->next);
    }
    printf("%d", p->data);
}