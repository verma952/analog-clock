#include<stdio.h>
int main(){
    int n1,n2,n,i,j;
    printf("Enter the size of set A :");
    scanf("%d",&n1);
    int a[n1];
    printf("\nEnter the elements of set A : ");
    for(i=0;i<n1;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter the size of set B :");
    scanf("%d",&n2);
    int b[n2];
    printf("\nEnter the elements of set B : ");
    for(i=0;i<n2;i++){
        scanf("%d",&b[i]);
    }
    n=0;
    int c[n1+n2];
    for(i=0;i<n1;i++){
        for(j=0;j<n2;j++){
            if(a[i] == b[j]){
                n++;
                break;
            }
            if(a[i] != b[j]){
                c[i] = a[i]; 
            }
        }
    }
    
    printf("\nSymmetric Difference of Given sets A and B is = ");
    for(i=0;i<n1-n;i++){
        printf("%d\t",c[i]);
    }
    return 0;
}