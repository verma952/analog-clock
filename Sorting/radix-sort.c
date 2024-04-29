#include<stdio.h>
#include<conio.h>
int main(){
    int i,j,n,d1,d2;
    printf("Enter the size of array :");
    scanf("%d",&n);
    int arr[n];
    printf("\nEnter the elements of the array :");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n-1;i++){
        d1 = arr[i]%10;
        d2 = arr[i+1]%10;
        if(d1>d2){
            
        }
    }
}
