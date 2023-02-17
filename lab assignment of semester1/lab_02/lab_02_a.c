#include<stdio.h>
int main()
{
    int a,b;
    printf("enter the two values of a and b is:");
    scanf("%d%d",&a,&b);
    int temp=a;
    a=b;
    b=temp;
    printf("the value after swaping of number a and b is %d and %d",a,b);
    return 0;
}