#include<stdio.h>
int factorial(int x);
int main()
{
    int x=7;
    printf("the factorial of %d is %d",x,factorial(x));    
    return 0;
}
int factorial(int x)
{
    printf("calling factorial (%d)\n",x);
    if(x==0 || x==1)
    return 1;
    else
    return x*factorial(x-1);
}