#include<stdio.h>
int factorial(int n);
int main()
{
    int n;
    printf("enter the value of number whom u want to find factorial:");
    scanf("%d",&n);
    if(n<0)    
    {
        printf("the factorial of negative number is not possible\n");
    }
    else
    {
        int result=factorial(n);
        printf("the factorial of %d is %d",n,result);
    }
    return 0;
}
int factorial(int n)
{
    if(n==0)
    {
        return 1;
    }
    else
    {
        return n*factorial(n-1);
    }
}