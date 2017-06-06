#include <stdio.h>
#include <stdlib.h>

struct point {
    int x;
    int y;
}Point;

struct list{
     char *name;
     struct list *nextPtr;
};
typedef struct list List;

int main()
{
    List a, b, c, *startPtr;
     
    a.name = "John";
    b.name = "Mary";
    c.name = "Tony";
     
    startPtr = &a;
    a.nextPtr = &b;
    b.nextPtr = &c;
    c.nextPtr = NULL;
     
    while (startPtr != NULL) {
        printf("%s\n", startPtr->name);
        startPtr = startPtr->nextPtr;
    }
}