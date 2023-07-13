// Program to check what will be the value stored in the variable x after executing following statement: 
// x=!2>-2, x=3<0&&5>0, x=10>8>4.

#include<stdio.h>
int main(){
    int x;
    // x=!2>-2;
    // x=10>8>4;
    x=3<0&&7>0;
    printf("x=%d",x);
    return 0;
}