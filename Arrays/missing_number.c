#include<stdio.h>
int main(){
    int i,j,n,m,sum = 0;
    printf("enter the size of array :\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements :\n");
    for(i=0;i<n-1;i++){
      scanf("%d",&arr[i]);
    }
    for(i=0;i<n-1;i++){
        sum = sum+ arr[i];
   }
    
    m = n*(n+1)/2-sum;
    printf("The missing number is %d",m);
    return 0;
}