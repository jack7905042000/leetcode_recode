#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node *next;
    struct Node *prev;
};

typedef struct Node *Point;

void CreatLinklist(struct Node **node, int new_data){
    
    Point ptr = (Point)malloc(sizeof(struct Node));
    ptr->data = new_data;
    ptr->prev = NULL;
    ptr->next = *node;
    if(*node!=NULL)
        (*node)->prev = ptr; // ()must have to add
    *node = ptr;
    
}

void ReverseLinklist(struct Node **node){
    Point temp = NULL;
    Point current = *node;
    
    while(current!=NULL){                  //swap address but you have to change from prev to current 
        temp = current->prev;              //if you change from current to prev ,temp will be NULL at last. Then you can't let last point become start point.
        current->prev = current->next;
        current->next = temp;
        current = current->prev;
    }
    if(temp != NULL) (*node) = temp->prev; //let last point become start point
}


void PrintLinklist(Point node){
    while(node!=NULL){
        printf("%d ",node->data);
        node = node->next;
    }
    printf("\n");
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
    ReverseLinklist(&head);
    PrintLinklist(head);
    return 0;
}

