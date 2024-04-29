#include<stdio.h>
#include<string.h>
char str1[100];
void palindrome();

void main(){
    char str[100];
    printf("Enter a String :");
    scanf("%s",str);
    int size = strlen(str);
    int i = 0;
    palindrome(str,size, i);
}
void palindrome(char str[], int size, int i){
    
    if(size == 0){
       int n = strcmp(str,str1);
       if(n == 0){
        printf("String is Palindrome");
       }
       else {
        printf("String is not Palindrome");
       }
       return;
    }
    else{
       str1[i] = str[size-1];
       palindrome(str,size-1,i+1);
    }
}