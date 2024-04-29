#include<stdio.h>
#include<conio.h>
int main(){
    int i,j,size,temp;
    printf("Enter the size of the array :");
    scanf("%d",&size);
    int arr[size];
    printf("\nEnter the Elements in the array :");
    for(i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    printf("\n Unsorted Array is : ");
    for(i=0;i<size;i++){
        printf("%d\t",arr[i]);
    }
    printf("\n Sorted Array is :");
    for(i=0;i<size;i++){
        for(j=i+1;j<size;j++){
          if(arr[i]>arr[j]){
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
          }
        }
    }
    for(i=0;i<size;i++){
        printf("%d\t",arr[i]);
    }
    getch();
    return 0;
}