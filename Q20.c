// Program to take time as an input in below given format and convert the time format and display the result as given below.
// User input- HH:MM
// Output- HH Hour and MM Minute

#include<stdio.h>
int main(){
    int h,m;
    printf("Enter HH:MM= ");
    scanf("%d %d",&h,&m);
    printf("%d hour and %d minute",h,m);
    return 0;
}