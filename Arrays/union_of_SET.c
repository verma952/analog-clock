#include<stdio.h>
int main(){
    int i,j,n1,n2,n3,found;
    printf("Enter the size of first array :\n");
    scanf("%d",&n1);
    int a[n1];
    printf("Enter the elemens of Set :\n");
    for(i=0;i<n1;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter the size of second array :\n");
    scanf("%d",&n2);
    int b[n2];
    printf("Enter the elemens of Set :\n");
    for(i=0;i<n2;i++){
        scanf("%d",&b[i]);
    }
    n3 = n1;
    int c[n3];
    for(i=0;i<n1;i++){
        c[i] = a[i];
    }
    for(i=0;i<n2;i++){
        found = 0;
        for(j=0;(j<n1)&&(found==0);j++){
            if(b[i]==a[j]){
                found = 1;
            }
        }  
            if(found == 0){
                c[n3++] = b[i];
            }
        
    }
    printf("\n A union B is : ");
    // n3 = sizeof(c)/sizeof(c[0]);
    for(i=0;i<n3;i++){
        printf("%d\t",c[i]);
    }
    return 0;
}