#include<stdio.h>
int main(){
    int i,n,item;
    printf("Enter the size of array:");
    scanf("%d",&n);
    int a[n];
    printf("\nEnter the elements of array :\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("\nYour array is :");
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
    printf("\nEnter the element to search :");
    scanf("%d",&item);
    for(i=0;i<n;i++){
        if(a[i] == item){
            printf("Element found at %d Location ",i+1);
        }
    }
    if(i>=n){
     printf("Element not found !");
    }
    return 0;
}