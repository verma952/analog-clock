#include<stdio.h>
#include<conio.h>
struct {
    float feet;
    float inch;
}distance;
int main(){
    printf("Enter the distance in feet : ");
    scanf("%f",&distance.feet);
    printf("Enter the distance in inch : ");
    scanf("%f",&distance.inch);
    float dist = distance.feet + distance.inch*0.08333;
    printf("Total distance in feet = %f ",dist);
    getch();
    return 0;
}