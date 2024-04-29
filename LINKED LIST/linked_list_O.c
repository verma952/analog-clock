#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *link;
};
struct node *add_at_end(struct node *ptr, int data);
int main()
{
    struct node *head = (struct node*)malloc(sizeof(struct node));
    head->data = 45;
    head->link = NULL;

    struct node *ptr = head;
    ptr = add_at_end(ptr,98);
    ptr = add_at_end(ptr,3);
    ptr = add_at_end(ptr,67);
    ptr = add_at_end(ptr,76);
    ptr = head;

    while(ptr != NULL){
        printf("%d\t",ptr->data);
        printf("%d",ptr->link);
        ptr = ptr->link;
    }
    // printf("Enter the element to add the end of linked list :");
    // int n;
    // scanf("%d",&n);
    // ptr = add_at_end(ptr,n);
    // ptr = head;
    // printf("\nThe updated linked list is :");
    // while(ptr != NULL){
    //     printf("%d\t",ptr->data);
    //     ptr = ptr->link;
    // }
    return 0;
}

struct node *add_at_end(struct node *ptr, int data){
    struct node *temp = malloc(sizeof(struct node));
    temp->data = data;
    temp->link = NULL;

    ptr->link = temp;
    return temp;
}