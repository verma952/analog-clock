#include<stdio.h>
int fab(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    return fab(n-1) + fab(n-2);
}

int main(){
    int num,i;
    printf("Enter the number to calculate fabbonacci series\n");
    scanf("%d",&num);
    printf("The fabbonacci series is :");
    for(i=0;i<num;i++){
    printf("%d\t",fab(i));
    }
}