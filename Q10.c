// program to find area of circle
#include<stdio.h>
int main(){
    float r,area,pi=3.14;
    printf("enter radius");
    scanf("%f",&r);
    area=pi*r*r;
    printf("area of circle is %f having thr radius %f",area,r);
    return 0;
}