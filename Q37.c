// Program to take a three digit number from the user and rotate its digit by one powsitions towards the right.

#include<stdio.h>
int main(){
    int n;
    printf("enter number");
    scanf("%d",&n);
    n=n%10*100+n/10;
    printf("number %d",n);
    return 0;
}