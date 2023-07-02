// Program to swap values of two int variable in single line arithmetic expression.

#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter a,b ");
    scanf("%d %d",&a,&b);
    a=a+b-(b=a);
    printf("after swapping %d %d",a,b);
    return 0;
    

}