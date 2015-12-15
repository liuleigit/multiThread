#include "list.h"

List* listNewElement(int data) {
    List* p = (List*)malloc(sizeof(List));
    p->m_data = data;
    p->m_next = NULL;
    return p;
}

int listCount(List* pList) { 
    int cnt=0;
    if (!pList)
        return cnt;
    else
        ++cnt;

    if (!pList->m_next)
        return cnt;

    while (pList->m_next) {
        ++cnt;
        pList = pList->m_next;
    }

    return cnt;
}

void listDestroy(List* pList) {

    if (!pList)
        return;

    List* pTmpList = NULL;
    do {
        pTmpList = pList->m_next;
        free(pList);
        pList = pTmpList;
    } while (pTmpList);
}
