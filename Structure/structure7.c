#include<stdio.h>
#include<conio.h>
struct {
    int chemistry;
    int physics;
    int math;
    float per;
}st[5];
int main(){
    for(int i = 0; i<5; i++){
        printf("Enter the marks of student with Roll Number :%d\n",i+1);
        printf("Chemistry marks : ");
        scanf("%d",&st[i].chemistry);
        printf("Physics Marks : ");
        scanf("%d",&st[i].physics);
        printf("Math marks : ");
        scanf("%d",&st[i].math);
    }
    for(int i=0;i<5;i++){
        st[i].per = (st[i].chemistry+st[i].physics+st[i].math)/3;
    }
    printf("Percentage of the students in PCM :\n");
    for(int i=0;i<5;i++){
        printf("Percentage of student with Roll Number %d : ",i+1);
        printf("%f\n",st[i].per);
    }
}