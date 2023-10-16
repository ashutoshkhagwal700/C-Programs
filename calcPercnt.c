// Program to accept the marks of 5 subjects and finds the sum and percentage marks obtained by the student.

#include<stdio.h>
int main() {

    int i, a[5];
    printf("Enter marks for 5 subject: ");
    for(i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    int sum = 0;
    for(i = 0; i < 5; i++)
    {
        sum = sum + a[i];
    }
    printf("Sum = %d\n", sum);
    printf("Percentage = %d", (sum / 5));
    return 0;
}