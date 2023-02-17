#include<stdio.h>
int main()
{
    float r;
    printf("enter the value of r:");
    scanf("%f",&r);
    float a,c;
    a=3.14*r*r;
    c=2*3.14*r;
    printf("area of circle is %f\n",a);  
    printf("circumference of circle is %f",c);  
    return 0;
}