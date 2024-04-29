#include<stdio.h>
#include<conio.h>
struct {
    int a;
    int b;
}complex[2];
int product(struct *m, struct *n);
int main(){
    for(int i =0; i<2; i++){
    printf("Enter the real part of the first complex number: ");
    scanf("%d",&complex[i].a);
    printf("Enter the imaginary part of the first complex number: ");
    scanf("%d",&complex[i].b);
   }
    printf("The addition of entered complex numbers is : %d + %di",complex[0].a+complex[1].a, complex[0].b+complex[1].b);
    printf("The substraction of entered complex numbers is : %d + %di",complex[0].a-complex[1].a, complex[0].b-complex[1].b);
    printf("The product of entered complex numbers is : ", product(complex[0],complex[1]));
    getch();
    return 0;
}
int product(struct *m,struct *n){
    int real;
    
    printf("%d + %di",real,imaginary);
}