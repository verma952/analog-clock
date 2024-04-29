#include<stdio.h>
#include<conio.h>
int queue[100];
int MAX = 50;
void add_to_queue(int queue[],int front, int rear, int item);
void display_queue();
void delete_from_queue();
int main(){
   int front = 0;
   int rear = 0;
   int item;
    
   add_to_queue(queue,front,rear,6);
   add_to_queue(queue,front,rear,9);
   printf("Enter an item to insert in Queue.");
   scanf("%d",&item);
   add_to_queue(queue,front,rear,item);
   printf("The items in the queue are :");
   display_queue(queue,front,rear);
   return 0;
}
void add_to_queue(int queue[],int front, int rear, int item ){
    if(rear == MAX){
       printf("Overflow ");
    }
     queue[rear] = item;
     rear = rear + 1;
}
void display_queue(int front, int rear){
    if(front==rear==0){
        printf("Queue is empty");
        return;
    }
    int i;
    for(i=0;i<rear;i++){
        printf("%d\t",queue[i]);
    }
}
void delete_from_queue(int queue[], int front, int rear){
    if(front == rear){
        printf("Queue is empty");
        return;
    }
    printf("%d is deleted from queue.",queue[front]);
    front = front + 1;
}

 