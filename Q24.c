// Program to print unit digit of a given number.

#include<stdio.h>
int main(){
    int n,u;
    printf("enter number= ");
    scanf("%d",&n);
    u=n%10;
    printf("unit digit is %d",u);
    return 0;

}