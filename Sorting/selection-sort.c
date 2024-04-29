#include<stdio.h>
#include<conio.h>
int main(){
    int i,j,size,temp,min;
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
    for(i=0;i<size-1;i++){
        min = i;
        for(j=i+1;j<size;j++){
            if(arr[min]>arr[j]) 
            {
                 min = j;
            }
        }
        if(min != i)
        {
            temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp; 
        }
    }
    for(i=0;i<size;i++){
        printf("%d\t",arr[i]);
    }
    getch();
    return 0;
}