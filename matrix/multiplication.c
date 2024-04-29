#include<stdio.h>
int main(){
    int i, j,k,r1,c1,r2,c2,sum;
    printf("Enter the no. of rows and columns of first matrix :");
    scanf("%d %d",&r1,&c1);

    int m1[r1][c1];
    printf("\nEnter the Elements of First matrix :\n");
    for(i=0;i<r1;i++){
        for(j=0;j<c1;j++){
            scanf("%d",&m1[i][j]);
        }
    }
    printf("Enter the no. of rows and columns of second matrix :");
    scanf("%d %d",&r2,&c2);
    int m2[r2][c2], m[r1][c2];
    printf("\nEnter the elements of second Matrix :\n");
     for(i=0;i<r2;i++){
        for(j=0;j<c2;j++){
            scanf("%d",&m2[i][j]);
        }
     }
     if(c1 == r2)
    {
        for(i=0;i<r1;i++){
            sum =0;
          for(j=0;j<c2;j++)
          {
            for(k=0;k<c2;k++)
           {
             sum = sum + m1[i][k]*m2[k][j];
             }
             m[i][j] = sum;
        }
     }
     
     printf("\nmultiplcation of two matrices is :\n");
     for(i=0;i<r1;i++){
        for(j=0;j<c2;j++){
            printf("%d\t",m[i][j]);
        }
        printf("\n");
     }
    }
    else{
        printf("Enter valid row and column");
    }
}  