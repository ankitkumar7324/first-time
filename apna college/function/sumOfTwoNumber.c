#include<stdio.h>
int sum(int a,int b);
int main()
{
    int a,b;
    printf("enter the 1st number:");
    scanf("%d",&a);
    printf("enter the 2nd number:");
    scanf("%d",&b);
    int s=sum(a,b);
    printf("the sum of two number is %d",s);
    return 0;
}
int sum(int a,int b)
{
    int c;
    c=a+b;
    return c;
}