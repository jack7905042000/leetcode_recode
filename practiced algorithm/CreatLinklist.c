#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

typedef struct Node *Point;

void CreatLinklist(struct Node **node, int new_data){
    
    Point ptr = (Point)malloc(sizeof(struct Node));
    ptr->data = new_data;
    ptr->next = *node;
    *node = ptr;
    
}

void PrintLinklist(Point node){
    while(node!=NULL){
        printf("%d ",node->data);
        node = node->next;
    }
}


int main()
{
    Point head = NULL;
    CreatLinklist(&head,5);
    CreatLinklist(&head,4);
    CreatLinklist(&head,3);
    CreatLinklist(&head,2);
    CreatLinklist(&head,1);
    PrintLinklist(head);
    return 0;
}

