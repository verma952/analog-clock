#include<stdio.h>
int main()
{
     int i,j,n,item;
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
    printf("enter the element to delete from this array :\n");
    scanf("%d",&item);
    for(i=0;i<n;i++){
        if(arr[i]==item){
            for(j=i;j<n;j++){
                arr[j]=arr[j+1];
            }
            n=n-1;
            
        }
    }
    printf("Your array is :");
    for(i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
    return 0;

}