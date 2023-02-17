#include<stdio.h>
int main()
{
    int n;
    printf("enter the number upto which u need fibbonacci series :");
    scanf("%d",&n);
    int a=0;
    int b=1;
    int sum;
    // int sum=a+b;
    for(int i=2;i<n;i++)
    {
        sum=a+b;
        a=b;
        b=sum;
    }
    printf("the %dth term of fibbonacci series is %d",n,sum);
    return 0;
}