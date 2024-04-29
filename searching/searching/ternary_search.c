#include<stdio.h>
int main(){
    int beg,end,mid1,mid2,item,n,i;
    printf("Enter the size of the Array :");
    scanf("%d",&n);
    int a[n];
    printf("\nEnter the Elements in Sorted order :");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("\nEnter the Element to search :");
    scanf("%d",&item);
    beg = 0;
    end = n-1;
    mid1 = beg+end/3;
    mid2 = end - end/3;
    while(beg <= end){
        mid1 = beg+(end-beg)/3;
        mid2 = end - (end-beg)/3;
        if(a[mid1]==item){
            printf("Item found at %d location",mid1);
            break;
        }
        if(a[mid2]==item){
            printf("Item found at %d location",mid2);
            break;
        }
        if(item < a[mid1]){
            end = mid1-1;
        }
        else if(item > a[mid1]){
            beg = mid1+1;
        }
        else if(item < a[mid2]){
            end = mid2 - 1;
            beg = mid1 + 1;
        }
        else if(item > a[mid2]){
            beg = mid2 + 1;
        }
        else{
            printf("Element not Found !");
        }
    }
    return 0;
}