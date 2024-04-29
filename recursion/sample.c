 #include<stdio.h>
 #include<stdlib.h>
 struct node
 {
    int data ;
    struct node *next;
 };
 int main(){
    struct node *head;
    head = (struct node*)malloc(sizeof(struct node));
    head->data=5;
    head->next = NULL;
    struct node *current;
    current = (struct node*)malloc(sizeof(struct node));
    current->data = 2;
    current->next = NULL;
    head->next = current;
    struct node *ptr;
    ptr = (struct node*)malloc(sizeof(struct node));
    ptr = head;
    while(ptr != NULL){
        printf("%d",ptr->data);
        ptr = ptr->next;
    }


 }