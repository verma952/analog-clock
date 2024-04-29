#include<stdio.h>
#include<conio.h>
struct {
    int a;
    int b;
}complex[2];
int main(){
    printf("Enter the real part of the first complex number: ");
    scanf("%d",&complex[0].a);
    printf("Enter the imaginary part of the first complex number: ");
    scanf("%d",&complex[0].b);
    printf("Enter the real part of the second complex number: ");
    scanf("%d",&complex[1].a);
    printf("Enter the real part of the second complex number: ");
    scanf("%d",&complex[1].b);
    printf("The addition of entered complex number is : %d + %di",complex[0].a+complex[1].a, complex[0].b+complex[1].b);
}