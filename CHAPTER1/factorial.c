#include<stdio.h>
int main()
{
    int i=0,factorial=1,n=6;
    for(i=1;i<=6;i++)
    {
        factorial *=i;
    }
    printf("the factorial of %d is %d",n,factorial);
    return 0;
}