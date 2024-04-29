#include<stdio.h>
int main(){
    int i,n,k;
    printf("enter the no. of elements in array:\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements in array :\n");
    for(i=0;i<n;i++){
      scanf("%d",&arr[i]);
    }
    printf("Your arrray is :\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\nEnter the positon of element where you want to insert the element:\n");
    scanf("%d",&k);
    for(i=n;i>=k-1;i--)
    {
        arr[i] = arr[i-1];
    }
    n=n+1; 
    printf("Enter the new Element at %dth location :\n",k);
    scanf("%d",&arr[k-1]);
    printf("The new array is :");
    for(i=0;i<n;i++){
     printf("%d\t",arr[i]);
 
    }
return 0;
    
}