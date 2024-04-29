#include<stdio.h>
void main(){
    int n,i;
    printf("enter no of processes");
    scanf("%d", &n);
    int bt[n];
    int at[n];
    int gc[n];
    int ct[n];
    int st[n];
    int temp;
    int j;
    printf("Enter the Arriving time of processes\n");
    for( i = 0; i<n;i++){
        printf("Process %d :",i+1);
        scanf("%d",&at[i]);
    }
    printf("Enter the Burst time of the processes respectively.\n");
    for(i = 0;i<n;i++){
        printf("Process %d :",i+1);
        scanf("%d",&bt[i]);
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++)
            {
               if(at[i]<=at[j]){
                temp = at[j];
                at[j] = at[i];
                at[i] = temp;
            }
        }
    }



    for( i = 0; i<n;i++){
        if(i==0){
            st[0]=at[0];
            ct[0]=bt[0];
        }   
        else{
           st[i] = ct[i-1];
           ct[i] = ct[i-1]+bt[i];

        }
           printf("Process %d is running from %d to %d.\n",i+1,st[i],ct[i]);
          
           3
        }
        
}

 