// Program to take date as an input in below given format and convert the date format and display the result as given below.
// User input -> DD/MM/YYYY
// Output -> "Day- DD, Month- MM, Year- YYYY"

#include<stdio.h>
int main(){
    int d,m,y;
    printf("Enter DD/MM/YYYY= ");
    scanf("%d/%d/%d",&d,&m,&y);
    printf("Day- %d, Month- %d, Year- %d",d,m,y);
    return 0;
}