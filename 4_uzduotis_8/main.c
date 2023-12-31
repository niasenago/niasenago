#include <stdio.h>
#include <stdlib.h>
/*
n8. Sudaryti vienpus� s�ra��. Para�yti proced�r�, kuri suspaud�ia s�ra��, i� keli� i� eil�s
einan�i� viend� element� palikdama tik vien�.
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
