//  Program to input a three digit number and display the sum of the digits.

#include<stdio.h>
int main(){
    int n,a,b,c;
    printf("enter number=");
    scanf("%d",&n);
    a=n%10;
    b=n/10%10;
    c=n/100;
    printf("sum is %d",a+b+c);
    return 0;
    
}
