#include<stdio.h>
int sum(int n);
int main(){
    int n;
    printf("Enter the Number :");
    scanf("%d",&n);
    printf("%d is the sum of digits",sum(n));
    return 0;
}

int sum(int n){
    int num = n % 10;
    if(num == 0){
        return ;
    }
    else {
       return num + sum(n/10);
    }
}