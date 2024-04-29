#include<stdio.h>
int main(){
    int n1,n2,hcf;
    printf("Enter the numbers to calculate HCF");
    scanf("%d%d",&n1,&n2);
    hcf = gcd(n1,n2);
    printf(" The HCF of %d and %d is %d .",n1,n2,hcf);
    return 0;
}
 
int gcd(int n1, int n2){
      if(n2==0){
        return n1;
      }
      return gcd(n2,n1%n2);
}
// // hcf(int n1, int n2){
//     if(n2==0){
//         return n1;
//     }
//     return hcf(n2,n1%n2);
// }
// // 