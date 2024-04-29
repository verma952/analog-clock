#include<stdio.h>
#include<conio.h>
struct {
    char name[50];
    int RollNumber;
    int age;
    float Marks;
}st[5];

int main(){
    printf("Enter the Details of students :");
    for(int i = 0; i<5 ; i++){
        printf("Roll no. : %d ",i+1);
        st[i].RollNumber = i+1;
        printf("Name of the student : ");
        scanf("%s",st[i].name);
        printf(" Age of student : ");
        scanf("%d",&st[i].age);
        printf("Marks in Percentage : ");
        scanf("%f",&st[i].Marks);
    }
    printf("The details of the Roll no 1 Student are");
    printf("\nName : %s",st[0].name);
    printf("\nAge : %d",st[0].age);
    printf("\n Marks : %f",st[0].Marks);
}