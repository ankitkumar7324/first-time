#include<stdio.h>
int main()
{
    float a,b,c,d;
    float avg;
    printf("enter the four number:");
    scanf("%f%f%f%f",&a,&b,&c,&d);
    avg=(a+b+c+d)/4;
    printf("average is %f",avg);
    return 0;
}