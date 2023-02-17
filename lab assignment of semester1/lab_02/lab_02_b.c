#include<stdio.h>
int main()
{
    int a,b;
    printf("enter the value of a and b is:");
    scanf("%d%d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("the value after swaping the value of a and b is %d and %d.",a,b);
    return 0;
}