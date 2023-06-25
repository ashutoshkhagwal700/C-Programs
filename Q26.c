// Program to swap value of two int variable.

#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter value of a b ");
    scanf("%d%d",&a,&b);
    c=a;
    a=b;
    b=c;
    printf("value after swapping %d %d",a,b);
    return 0;

}