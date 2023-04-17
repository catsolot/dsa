#include "array-list.h"

struct list* createList(int cap)
{
    struct list* l = malloc(sizeof(struct list));
    l->arr = malloc(sizeof(int*) * cap);
    l->size = 0;
    l->pos = 0;
    l->maxSize = cap;
    return l;
}

void clear(struct list* list)
{
    list->size = 0;
    list->pos = 0;
}

void insert(struct list* list, void* item)
{
    *(int**)(*(list->arr) + list->pos) = item;
    list->pos++;
    list->size++;
}
    
void append(struct list* list, void* item)
{
    *(list->arr + list->size) = item;
    list->size++;
}

void* Lremove(struct list* list)
{
    void* val = *(list->arr) + list->pos;
    for (int i = 0; i + list->pos < list->size - 1; i++) {
       *(list->arr + list->pos + i) = *(list->arr + list->pos + i + 1);
    }
    *(list->arr + list->size) = 0;
    list->size--;
    if (list->pos > list->size) list->pos--;
    return val;
} 

void moveToStart(struct list* list)
{
    list->pos = 0;
}

void moveToEnd(struct list* list )
{
    list->pos = list->size - 1;
}

void prev(struct list* list)
{
    if (list->pos - 1 >= 0) list->pos--;
}

void next(struct list* list)
{
    if (list->pos + 1 < list->size) list->pos++;
}

void moveToPos(struct list* list, int pos)
{
    if (pos >= 0 && pos < list->size) list->pos = pos;
}

void* getValue(struct list* list)
{
    return *(list->arr) + list->pos;
}
