// Program to take amount in INR and convert it into USD.

#include<stdio.h>
int main(){
    float r, usd, u=84.23;
    printf("enter amount in INR ");
    scanf("%f",&r);
    usd=r/84.23;
    printf("amount in USD %f",usd);
    return 0;
}