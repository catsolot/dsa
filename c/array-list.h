#include <stdlib.h>
struct list {
    void* *arr;
    int size;
    int maxSize;
    int pos;
};

void clear(struct list*);
void insert(struct list*, void*);
void append(struct list*, void*);
void* Lremove(struct list*);
void moveToStart(struct list*);
void moveToEnd(struct list*);
void prev(struct list*);
void next(struct list*);
void moveToPos(struct list*, int pos);
void* getValue(struct list*);

struct list* createList(int capacity);

