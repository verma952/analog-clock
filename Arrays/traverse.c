#include<stdio.h>
int main()
{
    int i,n;
    printf("enter the no. of elements in array \n");
    scanf("%d",&n);
    int a[n];
    printf("Enter the no of elements in array :\n");
    for(i=0;i<n;i++)
    {
       scanf("%d",&a[i]); 
    }
    printf("Your array is :\n");
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
    printf("\n Array is traversed .");
    return 0;
}