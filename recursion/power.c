#include<stdio.h>
int power();
int main(){
    int m,n;
    printf("Enter the no and its power to calculate :\n");
    scanf("%d%d",&m,&n);
    int result = power(m,n);
    printf("%d is the result",result);
    return 0;
}
int power(int m, int n){
    if(n==1){
        return m;
    }
    else {
    return m*power(m,n-1);
    }
}