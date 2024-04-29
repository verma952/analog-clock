#include<stdio.h>
int main(){
    int n,i,beg,end,item,pos;
    printf("Enter the size of the array :");
    scanf("%d",&n);
    int a[n];
    printf("\nEnter the elements of the array :");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("\nEnter the element to be search :");
    scanf("%d",&item);
    beg =0;
    end = n-1;
    while(beg<=end && item > a[beg] && item < a[end]){
        pos = beg + ((item - a[beg])*(end-beg))/(a[end]-a[beg]);
        if (a[pos]==item)
        {
           printf("Item found at %d location",pos);
           break;
        }
        if (a[pos]>item){
             beg = pos+1;
        }
        if (a[pos]<item){
            end = pos - 1;
        }
        else{
            printf("Item not found !");
            break;
        }
        
    }
    if(beg>end){
        printf("item not found !");
    }
    return 0;
}