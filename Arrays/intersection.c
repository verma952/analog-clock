#include<stdio.h>
int main(){
    int i, j, n1,n2,n = 0;
    printf("Enter the size of Set 1 :");
    scanf("%d",&n1);
    int a[n1];
    printf("\nEnter the elements of first Set :");
    for(i=0;i<n1;i++){
        scanf("%d",&a[i]);
    }
    printf("\nEnter the size of Set 2 :");
    scanf("%d",&n2);
    int b[n2];
    printf("\nEnter the elements of second Set :");
    for(i=0;i<n2;i++){
        scanf("%d",&b[i]);
    }
    int c[n];
    for ( i = 0; i < n1; i++)
    {
        for (j = 0; j<n2 ; j++)
        {
             if(a[i]==b[j])
             {
                  c[n++] = a[i];
                  break;
             }
        }
        
    }
    printf("\nIntersection of Sets is :");
    for(i=0;i<n;i++){
        printf("%d\t",c[i]);
    }
    
}