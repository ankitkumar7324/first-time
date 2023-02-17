#include<stdio.h>
int fib(int n);
int main()
{
    int n,m=0;
    printf("enter the no. of terms:");
    scanf("%d",&n);
    printf("fibomacci series terms are:");
    for(int i=1;i<=n;i++)
    {
        printf("%d ",fib(m));
        m++;
    }
    return 0;
}
int fib(int n)
{
    if(n==0 || n==1)
    {
        return n;
    }
    else
    {
        return fib(n-2)+fib(n-1);
    }
}