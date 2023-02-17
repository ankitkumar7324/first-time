#include<stdio.h>
int main()
{
    float p,r,t;
    float si;
    printf("enter the principal:");
    scanf("%f",&p);
    printf("enter the rate:");
    scanf("%f",&r);
    printf("enter the time:");
    scanf("%f",&t);
    si=(p*t*r)/100;
    printf("the si is given by %f",si);
    return 0;
}