#include<stdio.h>
int main()
{
    int a,b;
    printf("enter the value of a and b:");
    scanf("%d%d",&a,&b);
    int temp=a;
    a=b;
    b=temp;

    printf("\n after swaping the number a=%d and b=%d",a,b);
    return 0;
}