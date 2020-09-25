#include "LinkList.h"

void deleteMinimum(linkList L) {
    LNode *pre = L, *ptr_min;
    LNode *p;
    if (pre->next == NULL) return;
    pre = pre->next;
    ptr_min = pre;
    while (pre->next != NULL)
    {
        if (pre->next->data < ptr_min->next->data) {
            ptr_min = pre;
        }   
        pre = pre->next;
    }   // 找到最小节点前一个结点
    p = ptr_min->next;
    ptr_min->next = ptr_min->next->next;
    free(p);   //如果链表非空，则最小值存在，删除对应节点
}