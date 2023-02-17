#include<stdio.h>
int main()
{
    char ch;
    printf("enter the character:\n");
    scanf("%c",&ch);
    if(ch<=122 && ch>=97)
    {
        printf("it is lowercase character");
    }
    else{
        printf("it is not lowercase character");
    }
    return 0;
}