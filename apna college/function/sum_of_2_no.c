#include<stdio.h>
void sum(int a,int b);
int main()
{
    // int a,b;
    // printf("enter the 1st number:");
    // scanf("%d",&a);
    // printf("enter the 2nd number:");
    // scanf("%d",&b);
    // int s= sum(2,3);
    // printf("sum is = %d",s);
    // printf("enter the sum of two number :");
    sum(2,3);
    return 0;
}
void sum(int a,int b)
{
    int c;
    c=a+b;
    printf("the sum of %d and %d=%d",a,b,c);
}