#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int val;
    struct Node* next;
} node_t;

typedef node_t* ListNodePtr;

void insertList(ListNodePtr *head, int value);
void printList(ListNodePtr head);
int getMiddle(ListNodePtr head);
int getListSize(ListNodePtr head);


int main(void){
    
    ListNodePtr head = NULL;
    printf("\n\tLinked List\n");

    for(int i=4;i>=1;i--){
        insertList(&head, i);
    }

    printf("\t");

    printList(head);
    
    printf("\tNumero medio: %d",getMiddle(head));

    printf("\n\n");
    return 0;
}

int getListSize(ListNodePtr head){
    size_t size = 0;
    while(head!=NULL){
        size++;
        head = head->next;
    }
    return size;
}

int getMiddle(ListNodePtr head){
    size_t size = getListSize(head);
    int values[size];

    for(int i=0;i<size;i++){
        values[i] = head->val;
        head = head->next;
    }

    return values[size/2];
}

void insertList(ListNodePtr *head, int value){
    ListNodePtr new = malloc(sizeof(node_t));
    
    new->val = value;
    new->next = *head;
    *head = new;
}

void printList(ListNodePtr head){
    
    while(head!=NULL){
        printf("%d ", head->val);
        head = head->next;
    }
    printf("\n");
}
