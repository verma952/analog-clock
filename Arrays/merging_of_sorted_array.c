#include<stdio.h>
int main()
{
    int i,j,n1,n2,n,temp;
    printf("Enter the size of the first array :\n");
    scanf("%d",&n1);
    int a[n1];
    printf("Enter the elements of array :\n");
    for(i=0;i<n1;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter the size of second array :\n");
    scanf("%d",&n2);
    int b[n2];
    printf("Enter the elements of array :\n");
    for(i=0;i<n2;i++){
        scanf("%d",&b[i]);
    }
    n = n1+n2;
    int arr[n];
    for(i = 0; i<n1; i++){
      arr[i] = a[i];
    }
    for(i = 0; i<n2; i++){
        arr[i+n1] = b[i];
    }
   
    for(i=0;i<n;i++){
       for(j=i+1;j<n;j++){
        if( arr[i] >= arr[j]){
           temp = arr[i];
           arr[i] = arr[j];
           arr[j] = temp;
        }
       }
    }
    printf("The new array is :\n");
    for(i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
    return 0;

}