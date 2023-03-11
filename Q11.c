// program to find average of three numbers
#include<stdio.h>
int main(){
    float n1,n2,n3,avg;
    printf("enter three number");
    scanf("%f%f%f",&n1,&n2,&n3);
    avg=(n1+n2+n3)/3;
    printf("average %f",avg);
    return 0;
    
}