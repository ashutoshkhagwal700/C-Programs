// program to find simple interest
#include<stdio.h>
int main(){
    int p,r,t;
    float si;
    printf("enter principle,rate,time");
    scanf("%d%d%d",&p,&r,&t);
    si=(p*r*t)/100.0;
    printf("simple interest %f",si);
    return 0;
    
}