#include<stdio.h>
int main(){
    int i, j, r,c;
    printf("Enter the Rows and Columns of Matrix :\n");
    scanf("%d%d",&r,&c);
    printf("\nEnter the elements of Matrix :\n");
    int m[r][c];
    for(i=0;i<r;i++){
        for (j=0;j<c;j++)
        {
            scanf("%d",&m[i][j]);
        }
        
    }
    printf("Your matrix before transpose :\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("%d\t",m[i][j]);
        }
        printf("\n");
    }
    printf("Your matrix transpose :\n");
    for(i=0;i<c;i++){
        for(j=0;j<r;j++){
            printf("%d\t",m[j][i]);
        }
        printf("\n");
    }
}