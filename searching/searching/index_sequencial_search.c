#include<stdio.h>
int main(){
    int i,j,n,item;
    printf("Enter the size of the array :");
    scanf("%d",&n);
    int a[n];
    printf("\nEnter the sorted elements of the array :");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("\nEnter the element to be search :");
    scanf("%d",&item);
    int m =0;
    int b[m];
    i =0;
     while(i<n){
       b[m++] = a[i+3];
       i = i+3;
    }
 
    for(i=0;i<m;i++){   
           if(b[i]<=item && b[i+1]>item){
            for(j=i;j<=i+3;j++){
                if(a[j]==item){
                    printf("Item Found at %d location",j);
                    break;
                }
            }
        }
    }
    return 0;
}