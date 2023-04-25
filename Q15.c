// program to calculate profit or loss earned upon selling 25 bananas
#include<stdio.h>
int main(){
    float cp,sp,p;
    printf("enter cost price & selling price of banana per dozen");
    scanf("%f%f",&cp,&sp);
    p=(sp-cp)*25/12;
    printf("Profit %f",p);
    return 0;
}