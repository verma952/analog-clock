#include<stdio.h>
#include<conio.h>
struct {
    int hour;
    int minute;
    int second;
}time[3];
int main(){
    printf("Enter the first time details -\n");
    printf("Enter the hours : ");
    scanf("%d",&time[0].hour);
    printf("Enter the minutes : ");
    scanf("%d",&time[0].minute);
    printf("Enter the seconds : ");
    scanf("%d",&time[0].second);
    printf("Enter the second time details -\n");
    printf("Enter the hours : ");
    scanf("%d",&time[1].hour);
    printf("Enter the minutes : ");
    scanf("%d",&time[1].minute);
    printf("Enter the seconds : ");
    scanf("%d",&time[1].second);
    time[2].hour = time[1].hour + time[0].hour;
    time[2].minute = time[1].minute+time[0].minute;
    if(time[2].minute>60){
        time[2].minute = time[2].minute - 60;
        time[2].hour++;
    }
    time[2].second = time[1].second+time[0].second;
    if(time[2].second>60){
        time[2].second = time[2].second - 60;
        time[2].minute++;
    }
    printf("The Time after addition is :- ");
    printf("Hours : %d, Minutes : %d, Seconds : %d",time[2].hour,time[2].minute,time[2].second);
}