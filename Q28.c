// Program to swap value of two int variable without using third variable and +,- operators.

#include<stdio.h>
int main(){
    int a,b;
    printf("enter a,b=");
    scanf("%d%d",&a,&b);
    a=a*b;
    b=a/b;
    a=a/b;
    printf("value %d %d",a,b);
    return 0;
}