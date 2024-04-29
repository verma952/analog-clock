#include<stdio.h>
#include<stdlib.h>
struct node {
    int data ;
    struct node *link;
};
void count_of_nodes(struct node *head);
void add_at_end(struct node *head, int data);
int main(){
    struct node *head = malloc(sizeof(struct node));
    head->data = 45;
    head->link = NULL;

    struct node *current = malloc(sizeof(struct node));
    current->data = 98;
    current->link = NULL;
    head->link = current;

    current = malloc(sizeof(struct node));
    current->data = 3;
    current->link = NULL;

    head->link->link = current;

    /*counting of the no. of nodes in the linked list*/
 /**/    
    add_at_end(head,67);
    add_at_end(head,88);
    printf("Enter the element to add to the linked list :");
    int n;
    scanf("%d",&n);
    add_at_end(head,n);
    count_of_nodes(head);

    return 0;
}
void count_of_nodes(struct node *head){
    int count = 0;
    if(head == NULL){
        printf("Linked list is Empty");
    }
    struct node *ptr = NULL;
    ptr = head;
    while(ptr != NULL){
        count++;
        printf("%d\t",ptr->data);
        ptr = ptr->link;
    }
    printf("\n%d",count);
}
 
void add_at_end(struct node *head, int data){
    struct node *ptr,*temp;
    ptr = head;
    temp = (struct node*)malloc(sizeof(struct node));
    temp->data = data;
    temp->link = NULL;
    while(ptr->link != NULL) {
        ptr = ptr->link;
    }
    ptr->link = temp;
}