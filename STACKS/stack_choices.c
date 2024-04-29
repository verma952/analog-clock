#include<stdio.h>
#include<stdlib.h>
#define MAX 4

int stack_arr[MAX];
int top = -1;

int main(){
 int choice, data;

    do {
        push(1);
        push(2);
        printf("\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Print the top element\n");
        printf("4. Print all the elements of Stack\n");
        printf("5. Quit\n");
        printf("Please enter your choice :\n");
        scanf("%d",&choice);
     }
      while(choice!=5);
    switch(choice){
        case 1:
           printf("Enter the element to be pushed: ");
           scanf("%d",&data);
           push(data);
           break;
        case 2:
            data = pop();
            printf("Deleted element is %d\n");
            break;
        case 3:
            data = stack_arr[top];
            printf("The top element is %d\n",data);
            break;
        case 4:
            printf("All the elements are :");
            print();  
            break; 
        case 5:
            exit(1);   
        default :
            printf("Wrong Choice");            
    }
    return 0;
}
int push(int data){
    if(isFull()){
        printf("Stack Overflow");
        return;
    }
    top = top + 1;
    stack_arr[top] = data;
}
 
int pop(){
    int value;
    if (isEmpty()){
        printf("Stack Underflow");
        exit(1);
    }
    value = stack_arr[top];
    top = top-1;
    return value;
}
 
void print(){
    if(isEmpty()){
        printf("stack Underflow");
    }
    for(int i = top; i >=0;i--){
        printf("%d\t",stack_arr[i]);
    }
}
  
 int isFull(){
    if (top == MAX-1){
        return 1;
    }
    else{
        return 0;
    }
 }
 int isEmpty(){
    if(top == -1){
        return 1;
    }
    else {
        return 0;
    }
 }