// Program to input a number from the user and also input a digit. Append a digit in the number and priont the resulting number.

#include<stdio.h>
int main(){
    int n,a;
    printf("enter number and digit");
    scanf("%d%d",&n,&a);
    n=n*10+a;
    printf("number is %d",n);
    return 0;
}