#include<stdio.h>

int main()
{
    int i,n,k,item;
    printf("Enter the size of array:\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements in array :\n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("You array is :\n");
    for(i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
    printf("Enter the element you want to delete:");
    scanf("%d",&item);
    for(i=0;i<n;i++){
        if(arr[i]==item){
            k = i;
            break;
        }
    }
    for(i=k;i<n;i++)
    {
        arr[i] = arr[i+1];
    }
    n=n-1;
    printf("The new array is :");
    for(i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
    return 0;
}