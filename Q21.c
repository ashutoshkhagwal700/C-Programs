// Program to calculate size of a character constant.

#include<stdio.h>
int main(){
    char ch;
    int size;
    printf("enter char=");
    scanf("%c",&ch);
    size=sizeof(ch);
    printf("size= %d", size);
    return 0;
    

}