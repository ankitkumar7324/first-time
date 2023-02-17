#include<stdio.h>
int main()
{
    int n;
    printf("enter the number to check whether it is positive or negative:");
    scanf("%d",&n);
    if(n>=0)
    {
        printf("%d is positive number",n);
    }
    else
    {
        printf("%d is negative number",n);
    }
    return 0;
}