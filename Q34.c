// Program to make the last digit of a number stored in a variable as zero.

#include<stdio.h>
int main(){
    int n;
    printf("enter number");
    scanf("%d",&n);
    n=n/10*10;
    printf("%d",n);
    return 0;
    
}