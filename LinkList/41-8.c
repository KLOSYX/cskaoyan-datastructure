#include "LinkList.h"

int linkListLength(linkList L) {
    LNode *p = L;
    int length = 0;
    while (L != NULL) {
        L = L->next;
        ++length;
    }
    return length;
}

LNode* findPublicNode(linkList l1, linkList l2) {
    int len1 = linkListLength(l1), len2 = linkListLength(l2);
    LNode *p1 = l1, *p2 = l2;
    int dist = len1 > len2 ? (len1 - len2) : (len2 - len1);
    if (len1 > len2) {
        while (dist-- > 0) {
            p1 = p1->next;
        }
    }
    else {
        while (dist-- > 0) {
            p2 = p2->next;
        }
    }   // 让较长的链表先走过两链表长度之差的距离
    while (p1 != p2 && p1 != NULL && p2 != NULL) {
        p1 = p1->next;
        p2 = p2->next;
    }   // 两链表同时向后遍历，直到指针指向同一个节点或指向NULL
    if (p1 == NULL || p2 == NULL) {
        return NULL;
    }   // 若指向NULL则不存在公共节点
    else
        return p1;
}