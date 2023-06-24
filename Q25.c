// Program to print a given number without its last digit.

#include<stdio.h>
int main(){
    int n,num;
    printf("enter number= ");
    scanf("%d",&n);
    num=n/10;
    printf("number is %d",num);
    return 0;
    
}