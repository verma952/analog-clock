#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct node {
    int data;
    struct node *link;
};
int main(){
    struct node *ptr;
    struct node *head = malloc(sizeof(struct node));
    head->data = 12;
    head->link = NULL;
    struct node *current = malloc(sizeof(struct node));
    current->data = 34;
    current->link = NULL;
    head->link = current;
    current = malloc(sizeof(struct node));
    current->data = 65;
    current->link = NULL;
    head->link->link = current;
    printf("The List is :");
    ptr = head;
    while(ptr != NULL){
        printf("%d\t",ptr->data);
        ptr = ptr->link;
    }
}