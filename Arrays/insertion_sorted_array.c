#include<stdio.h>
int main()
{
    int i,j,n,item,k;
    printf("Enter the size of the array :");
    scanf("%d",&n);
    int arr[n];
    printf("\n Enter the elements in Ascending order:\n");
    for(i=0;i<n;i++)
    {
     scanf("%d",&arr[i]);
    }
    printf("Your array is :");
    for(i=0;i<n;i++)
    {
      printf("%d  ",arr[i]);  
    }
    printf("\nEnter the element to insert in array:");
    scanf("%d",&item);
    for(i=0;i<n;i++)
    {
        if ((item >= arr[i]) && (item < arr[i+1])){
           k = i+1;
           break;       
        }
   }
   if(item <= arr[0] ){
            k=0;
   }
      if(item >= arr[n-1]) {
            k=n+1;
        }
    printf("%d is the position",k);
    for(i=n;i>=k;i--)
    {
        arr[i] = arr[i-1];
    }
    arr[k]=item;
    n = n+1;
    printf("\nYour array is :");
    for(i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }   
    return 0;
}