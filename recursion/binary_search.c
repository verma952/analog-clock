#include<stdio.h>
int search(int beg, int end, int a[],int item){
    int mid;
    mid =(beg+end)/2;
    if(item == a[mid]){
        return mid;
    }
    else{
        if(item > a[mid]){
            beg = mid+1;
        }
        if(item < a[mid] ){
            end = mid-1;
        }
        return search(beg, end, a, item);
    }
}
int main(){
    int i,item,n,loc;
    printf("Enter the size of array :");
    scanf("%d",&n);
    int a[n];
    printf("\nEnter the elements of the array :");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("\nEnter the element to be search :" );
    scanf("%d",&item);
    int beg=0,end = n-1,mid ;
    loc = search(beg, end, a, item);
    printf("Element found at the %d location.",loc);
}
