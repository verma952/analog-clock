#include<stdio.h>
#include<conio.h>
struct {
    char name[50];
    char address[100];
    int RollNumber;
    int age;
    float Marks;
}st[15];

int main(){
    printf("Enter the Details of students :\n");
    for(int i = 0; i<15 ; i++){
        printf("Roll no. : %d ",i+1);
        st[i].RollNumber = i+1;
        printf("\nName of the student : ");
        scanf("%s",st[i].name);
        printf("Address of the Student");
        scanf("%s",st[i].address);
        printf(" Age of student : ");
        scanf("%d",&st[i].age);
        printf("Marks in Percentage : ");
        scanf("%f",&st[i].Marks);
    }
    for(int i = 0; i< 15; i++){
    printf("\nThe details of the Roll no %d Student are",i+1);
    printf("\nName : %s",st[i].name);
    printf("\n Address : %s",st[i].address);
    printf("\nAge : %d",st[i].age);
    printf("\n Marks : %f",st[i].Marks);
    }
    getch();
    return 0;
}