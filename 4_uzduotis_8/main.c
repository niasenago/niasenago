#include <stdio.h>
#include <stdlib.h>
/*
n8. Sudaryti vienpusá sàraðà. Paraðyti procedûrà, kuri suspaudþia sàraðà, ið keliø ið eilës
einanèiø viendø elementø palikdama tik vienà.
*/

typedef struct Node{
    int value;
    struct Node *next;
}Node;

Node * createNode(int value){

    Node *ptr = (Node *) malloc( sizeof(Node));
    if(ptr == NULL){
        printf("Could't allocate memory for the node...\n");
        return;
    }

    ptr->value = value;
    ptr->next = NULL;
    return ptr;
}

int main()
{
    Node *first, *last, *current;
    first = NULL;
    last = NULL;//linked list is empty

    current = createNode(5);
    first = current;
    last = current;
    printf("%d\n", last->value);
    return 0;
}
