#include<stdio.h>
int main(){
    int i,j,det,r;
    printf("Enter the row or column of Square Matrix of 2 X 2 or 3 X 3:\n");
    scanf("%d",&r);
    int m[r][r];
    printf("Enter the Elements of the Matrix :\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<r;j++){
            scanf("%d",&m[i][j]);
        }
    }
    printf("Your matrix is :\n");
    for(i=0;i<r;i++){
        for(j=0;j<r;j++){
            printf("%d\t",m[i][j]);
        }
        printf("\n");
    }
    if(r == 3)
   {
     det = m[0][0]*(m[1][1]*m[2][2] - m[2][1]*m[1][2]) - m[0][1]*(m[1][0]*m[2][2] - m[2][0]*m[1][2]) + m[0][3]*(m[1][0]*m[2][1] - m[2][0]*m[1][1]);
    }
    if(r == 2){
        det = m[0][0]*m[1][1] - m[1][0]*m[0][1];
    }
   printf("Determinant of the Given matrix is : %d",det);
   return 0;
}