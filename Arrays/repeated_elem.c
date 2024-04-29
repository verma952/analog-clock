#include<stdio.h>
int main(){
    int i,j,n,k;
    printf("Enter the size of the array :\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements in array:\n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int dup[n];
    int nor[n];
    int count =0;
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(arr[i] == arr[j]){
             dup[i] = arr[i];
             break;
              }
        }
    }
}