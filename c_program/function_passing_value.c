#include<stdio.h>
int sum(int a,int b);
float avg(int a,int b,int c,int d);
int main()
{
    int c=sum(2,87);
    float d=avg(2,87,76,45);
    printf("the value of sum is %d\n",c);
    printf("the value of average is %f",d);
    return 0;
}
int sum(int a,int b)
{
int result;
result = a+b;
return result;
}
float avg(int a,int b,int c,int d)
{
int result;
result = (a+b+c+d)/4;
return result;
}