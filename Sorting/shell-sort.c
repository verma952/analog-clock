#include<stdio.h>
#include<conio.h>
int main(){
    int i,j,size,temp;
    printf("Enter the size of the array :");
    scanf("%d",&size);
    int arr[size];
    printf("\nEnter the Elmenets in the array :");
    for(i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    printf("\n Unsorted Array is : ");
    for(i=0;i<size;i++){
        printf("%d\t",arr[i]);
    }
    printf("\n Sorted Array is :");
    for(i=0;i<size;i++){
        for(j=0;j<size;j++)
            {
               if(arr[i]<=arr[j]){
                temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            } 
        }
    }
    for(i=0;i<size;i++){
        printf("%d\t",arr[i]);
    }
    getch();
    return 0;
}