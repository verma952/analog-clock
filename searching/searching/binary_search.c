#include<stdio.h>
int main(){
    int i,n,item,mid,beg,end;
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
     beg = 0;
     end = n-1;
    while(beg<=end){
        mid = (beg+end)/2;
        if(a[mid] == item){
            printf("Element found at %d Location ",mid+1);
            break;
        }
        if(a[mid]<item){
            beg = mid+1;
        }
        if(a[mid]>item){
            end = mid-1;
        }
    }
    if(a[mid]!=item){
        printf("Element is not found!");
    }
    return 0;
}