#include<stdio.h>
void TOH(int n, char rodA, char rodC, char rodB);
int main(){
   int n;
   printf("Enter the no. of disks \n");
   scanf("%d",&n);
   TOH(n,'A','C','B');
}
void TOH(int n, char rodA, char rodC, char rodB)
{
    if(n == 1){
        printf("\n Move disk 1 from rod %c to rod %c",rodA,rodC);
        return;
    }
    else {
        TOH(n-1,rodA,rodB,rodC);
        printf("\n Move disk %d from rod %c to rod %c",n,rodA,rodC);
        TOH(n-1,rodB,rodC,rodA);
    }
}
