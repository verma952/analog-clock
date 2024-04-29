#include<stdio.h>
#include<conio.h>
struct {
    char Name[50];
    int RollNumber;
    int marks[6];
}student1;
int main() {  
    printf("Enter the name of the student:");
    scanf("%s",student1.Name);
    
    printf("\nEnter the Roll Number of the Student :");
    scanf("%d",&student1.RollNumber);

    printf("\nEnter the Marks of the Student in 6 subjects");
    for(int i = 0; i <6;i++){
        scanf("%d",&student1.marks[i]);
    }
    float percentage;
    percentage = (student1.marks[0]+student1.marks[1]+student1.marks[2]+student1.marks[3]+student1.marks[4]+student1.marks[5])/6;
    if(percentage>=95){
        printf("\n %s is elgible for addmission in Delhi University ",student1.Name);
    }
    else{
        printf("\n Student is not eligible for addmission in Delhi University");
    }
}