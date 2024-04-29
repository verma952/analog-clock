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
                return j;
            }
        }
    
}