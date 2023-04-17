#include "array-list.h"
#include <stdio.h>
#include <stdlib.h>

int main()
{
    struct list* l = createList(5);
    int a = 10;
    int b = 11;
    insert(l, (void*)&a);
    insert(l, (void*)&b);
    int c = *(int*)Lremove(l);
    int d = *(int*)Lremove(l);
    printf("%d\n%d\n", c, d);
}

