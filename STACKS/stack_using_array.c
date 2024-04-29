#include<stdio.h>
int arr[50];
int top;
int n,x;
int main(){
    n = 4;
    top = -1;
    push(1);
    push(2);
    push(3);
    push(5);
    display();
}
 void display(){
    int i;
    if(top>= 0){
      printf("Element of stack :");
      for(i= top ; i>=0;i--){
        printf("%d ",arr[i]);
      }
    }
    else {
        printf("Stack is Empty ");

    }
    
 }
 void push(int x){
    if(top>n-1){
        printf("Overflow");
    }
    
     else{
        top++;
        arr[top]=x;
    }
 }
 void pop(){
    if(top<=-1){
        printf("Underflow");
    }
    else{
        printf("The popped element is %d",arr[top]);
        top--;
    }
 }