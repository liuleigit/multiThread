#include <stdio.h>
#include <stdlib.h>
#include "list.h"

int main() {

    int intA = 5;
    int intB = 10;

    List* pListHeader = listNewElement(intA);
    pListHeader->m_next = listNewElement(intB); 

    List* curList = pListHeader;
    while (curList) {
        printf ("%d\n", curList->m_data);
        curList = curList->m_next;
    }

    listDestroy(pListHeader);
    return 0;
}
