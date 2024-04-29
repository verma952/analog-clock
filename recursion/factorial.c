#include<stdio.h>
int fact(int n){
    if(n==1){
        return 1;
    }
    else {
        return (n)*fact(n-1);
    }
}
int main(){
    int num ;
    printf("Enter the number to calculate factorial : ");
    scanf("%d",&num);
    int result = fact(num);
    printf("\nThe factorial of %d is = %d",num,result);
    return 0;
}