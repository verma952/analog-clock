#include<stdio.h>
#include<conio.h> 
#include<stdlib.h>
struct node {
    int data;
    struct node *link;
};
struct node* add_at_beg(struct node *head,int item);
void display(struct node *head);
int main(){
    struct node *head;
    head = (struct node *)malloc(sizeof(struct node));
    struct node *ptr;
    head->data = 23;
    head->link = NULL;
    struct node *current;
    current = (struct node *)malloc(sizeof(struct node));
    current->data = 34;
    current->link = NULL;
    head->link = current; 
    printf("Enter the element to insert at the begining of linked list");
    int item;
    scanf("%d",&item);
    head = add_at_beg(head,item);
    display(head);
    getch();
    return 0;
}
void display(struct node *head){
        struct node *ptr;
        ptr = head;
        if(ptr==NULL){
            return;
        }
        while(ptr != NULL){
            printf("%d\t",ptr->data);
            ptr = ptr->link;
        }
        return;
    }

struct node* add_at_beg(struct node *head, int item){
    struct node *temp;
    temp =(struct node *)malloc(sizeof(struct node));
    temp->data = item;
    temp->link = NULL;

    temp->link = head;
    head = temp;
    return head;
}