#include "circularDouble.h"
#include <stddef.h>

node *head ;

void createNode(){
    head == NULL ;
}

int isEmpty(){
    if(head == NULL){
        return 0 ;
    }
    return 1;
}

void firstInsert(int value){
    node *ptr  = (node *)malloc(sizeof(node)) ;
    ptr->item = value ;
    node *temp;
    if(isEmpty() == 0){
        head = ptr ;
        ptr->next = head ;
        ptr->prev = head ;

    }else {
        temp = head ;
        while(temp->next != head){
            temp = temp->next ;
        }
        temp->next = ptr ;
        ptr->prev = temp;
        ptr->next = head ;
        head->prev = ptr ;
        head = ptr;
    }
    printf("item is inserted in first position \n") ;
}

void lastInsert(int value){
    node * ptr  = (node *)malloc(sizeof(node)) ;
    ptr->item = value ;
    node *temp;
    if(isEmpty() == 0){
        ptr->next = head ;
        ptr->prev = head ;
        head = ptr ;
    }else {
        temp = head ;
        while(temp->next != head){
            temp = temp->next ;
        }
        temp->next = ptr ;
        ptr->prev = temp ;
        ptr->next = head ;
        head->prev = ptr ;
    }
    printf("item is inserted in last position \n") ;
}

void firstDelete(){
    node *temp = head ;
    if(isEmpty() == 0){
        printf("the circular double linked list is empty \n") ;
    }else if(head->next == head){
        printf("the first deleted item is %d \n " , head->item) ;
        head = NULL;
        fread(head) ;
    }else {
        while(temp->next != head){
            temp = temp->next ;
        }
        printf("the first deleted item is %d \n " , head->item) ;
        temp->next = head->next ;
        head->next->prev = temp ;
        free(head) ;
        head = temp->next ;
    }
}
void lastDelete(){
    node *temp = head ;
    node *ptr;
    if(isEmpty() == 0){
        printf("the circular double linked list is empty \n") ;
    }else if(head->next == head){
        printf("the last deleted item is %d \n " , head->item) ;
        head = NULL;
        fread(head) ;
    }else {
        while(temp->next != head){
                ptr = temp ;
            temp = temp->next ;
        }
        printf("the last deleted item is %d \n " , temp->item) ;
        free(temp) ;
        ptr->next = head ;
        head->prev = ptr ;
    }
}
void searchItemValue(int position){
    node *temp = head ;
    if(isEmpty() == 0){
        printf("the circular double linked list is empty \n") ;
    }else if(position <= 0){
        printf("the position must be greater than or equal 1 \n") ;
    }else {
        for(int i = 1 ; i<position ;i++){
                temp = temp->next ;
        }
        printf("\n the item %d is found in position %d \n" , temp->item , position) ;

    }
}
void display(){
    node *temp ;
    if(isEmpty() == 0){
        printf("the circular double linked list is empty \n") ;
    }else {
        temp = head ;
        while(temp->next != head){
            printf("%d \t" , temp->item) ;
            temp = temp->next ;
        }
        printf("%d \t" , temp->item) ;
    }
}
