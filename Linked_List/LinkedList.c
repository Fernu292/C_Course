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
void push_back(ListNodePtr *head, int value);

ListNodePtr addTwoNumbers(ListNodePtr l1, ListNodePtr l2);

int main(void){
    
    ListNodePtr l1 = NULL;
    ListNodePtr l2 = NULL;
    printf("\n\tLinked List\n");
    
    // Inicializando l1
    push_back(&l1, 2);
    push_back(&l1, 4);
    push_back(&l1, 3);
    push_back(&l1, 3);

    // Inicializando l2
    push_back(&l2, 5);
    push_back(&l2, 6);
    push_back(&l2, 4);
    
    printList(addTwoNumbers(l1,l2));

    printf("\n\n");
    return 0;
}

ListNodePtr addTwoNumbers(ListNodePtr l1, ListNodePtr l2){
    
    ListNodePtr suma = NULL, current1 = l1, current2 = l2;
    
    int l1_size, l2_size, residuo = 0, suma_nodo = 0;
    
    l1_size = getListSize(l1);
    l2_size = getListSize(l2);
    
    if(l1_size == l2_size){
        // Suma igual
        while(current1!=NULL && current2!=NULL){
            
            suma_nodo = (current1->val) + (current2->val);
            
            if(residuo>0){
                suma_nodo+=residuo;
                residuo = 0;
            }

            if(suma_nodo>=10){
                push_back(&suma, suma_nodo%10);
                residuo = suma_nodo/10;
                if(current1->next == NULL){
                    push_back(&suma, residuo);
                }
                // printf("%d ", residuo); 
            }else {
              push_back(&suma, suma_nodo);
            }

            // printf("%d ", suma_nodo%10);
            current1 = current1->next;
            current2 = current2->next;
            suma_nodo = 0;
        }

    }else{

        if(l1_size > l2_size){
            while(l2_size<l1_size){
                l2_size++;
                push_back(&l2, 0);
            }
        }else {
            while(l1_size<l2_size){
                l1_size++;
                push_back(&l1, 0);
            }
        }

        while(current1!=NULL && current2!=NULL){
            
            suma_nodo = (current1->val) + (current2->val);
            
            if(residuo>0){
                suma_nodo+=residuo;
                residuo = 0;
            }
            
            if(suma_nodo>=10){
                push_back(&suma, suma_nodo%10);
                residuo = suma_nodo/10;
                
                if(current1->next == NULL){
                    push_back(&suma, residuo);
                }
                // printf("%d ", residuo); 
            }else {
              push_back(&suma, suma_nodo);
            }

            // printf("%d ", suma_nodo%10);
            current1 = current1->next;
            current2 = current2->next;
            suma_nodo = 0;
        }
    }
    
    printf("\n\tListas enlazadas: \n\t");
    printList(l1);
    printList(l2);
    
    return suma;
};

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

void push_back(ListNodePtr *head, int value){
   
    ListNodePtr new = malloc(sizeof(node_t));
    new->val = value;
    new->next = NULL;

    if(*head == NULL){
        *head = new;
        return;
    }
    
    ListNodePtr current = *head;
    // Iteramos hasta el final de la lista
    while(current->next!=NULL){
        current = current->next;
    }
    current->next = new;
}

void insertList(ListNodePtr *head, int value){
    ListNodePtr new = malloc(sizeof(node_t)); 
    new->val = value;
    new->next = *head;
    *head = new;
}

void printList(ListNodePtr head){
    printf("\n\t"); 
    while(head!=NULL){
        printf("%d ", head->val);
        head = head->next;
    }
    printf("\n");
}
