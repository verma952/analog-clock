#include<stdio.h>
int main(){
    int i, j,r,c;
    printf("Enter the no. of rows and columns of matrix :");
    scanf("%d %d",&r,&c);
    int m1[r][c], m2[r][c], m[r][c];
    printf("\nEnter the Elements of First matrix :\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&m1[i][j]);
        }
    }
    printf("\nEnter the elements of second Matrix :\n");
     for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&m2[i][j]);
        }
     }
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            m[i][j] = m1[i][j] + m2[i][j];
        }
     }
     printf("\nAddition of two matrices is :\n");
     for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("%d\t",m[i][j]);
        }
        printf("\n");
     }
}  