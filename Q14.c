// program to calculate volume of cuboid
#include<stdio.h>
int main(){
    int l,w,h,vol;
    printf("enter lengh,width,height of cuboid=");
    scanf("%d%d%d",&l,&w,&h);
    vol=l*w*h;
    printf("volume is %d",vol);
    return 0;
}