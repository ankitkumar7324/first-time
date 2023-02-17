#include<stdio.h>
int main()
{
    int dis,a,b;
    float c,d;
    printf("enter the distance between two cities:");
    scanf("%d",&dis);
    a=dis*1000;
    b=a*100;
    c=a*39.37;
    d=a*3.28;
    printf("the distance in metre%d\ndistance in centimetre%d\ndistance in inches%f\ndistance in feet%f",a,b,c,d);
    return 0;
}