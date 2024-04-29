#include<stdio.h>
int reverse();
int main(){
    int n;
    printf("Enter the Number :");
    scanf("%d",&n);
    reverse(n);
    return 0;
}

int reverse(int n){
    int num = n % 10;
    if(num == 0){
        return NULL;
    }
    else {
       
       printf("%d",num);
       reverse(n/10);
    }
}