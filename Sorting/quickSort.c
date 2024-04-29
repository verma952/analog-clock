#include<stdio.h>
void quickSort();
int partition();
int main(){
    int n, i, low, high;
    printf("Enter the  size of array : ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elmentes of the array : \n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Array before sort:");
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
    low = 0;
    high = n-1;
    quickSort(a[n], 0, n-1);
    printf("Array after sort:");
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
    return 0;
}

void quickSort(int a[], int low, int high){
     
    int j;
    if(low<high){
        j = partition(a, low, high);
        
        quickSort(a,low,j-1);
        quickSort(a,j+1,high);
    }
}

int partition(int a[], int  low, int high){
    int i,j,temp,key;
    key = a[low];
    i = low+1;
    j = high;
    while(i<high && key>a[i]){
        
            while(key<a[j]){
                j--;
                if(i<j){
                    temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                }
                else {
                    temp = a[low];
                    a[low] = a[j];
                    a[j] = temp;

                }
                return  j;
            }
        }
     
    
}