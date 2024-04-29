#include<stdio.h>
#include<math.h>
int main(){
    int n,m,i,j,item;
    printf("Enter the size of the array :");
    scanf("%d",&n);
    printf("\nEnter the elements of Sorted Array :");
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter the item two Search :");
    scanf("%d",&item);
    m = sqrt(n);
    int beg = 0;
   while(beg<n){
        if(a[beg]< item){
            beg = beg + m;
        }
       else if(a[beg]>=item){
            beg = beg - m;
            for(i=beg;i<beg+m;i++){
               if(a[i]==item){
                printf("Item found at %d location",i);
                break;
               }
            }
            if(i>=beg+m ){
                printf("Element not found");
            }
            break;
        }
    }
    if(beg>=n){
        printf("item not found");
    }
    return 0;

}