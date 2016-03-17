#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int data;
    struct node* next;
}Node;

typedef struct{
    Node* head;
    Node* tail;
}LinkedList;

LinkedList* creatList(){
    LinkedList* list = malloc(sizeof(Node));
    list->head = NULL;
    list->tail = NULL;
    return list;
}

void insertData(LinkedList* list, int data){
    Node* node = malloc(sizeof(Node));
    node->data = data;
    node->next = NULL;
    if(list->head == NULL){
        list->head = node;
        list->tail = node;
    }else{
        list->tail->next = node;
        list->tail = node;
    }
}

void printList(LinkedList* list){
    Node* p = list->head;
    while(p != NULL){
        printf("%d -> ",p->data);
        p = p->next;
    }
    printf("NULL\n");
}

void reverseList(LinkedList* list){
    Node* pre = NULL;
    Node* p = list->head;
    Node* temp;
    list->tail = p;
    while(p != NULL){
        temp = p->next;
        p->next = pre;
        pre = p;
        p = temp;
    }
    list->head = pre;
}

int main(){
    LinkedList* list = creatList();
    insertData(list,12);
    insertData(list,13);
    insertData(list,14);
    insertData(list,16);
    insertData(list,17);
    printList(list);
    reverseList(list);
    printList(list);
}

