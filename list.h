#ifndef _LIST_H
#define _LIST_H

#include <stdio.h>
#include <stdlib.h>

typedef struct {

    int           m_data;
    struct List*  m_next;

} List;

extern List* listNewElement(int );
extern int listCount(List* );
extern void listDestroy(List** );

#endif
