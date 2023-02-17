#include<stdio.h>
float celsius_to_farhenheit(int x);
int main()
{
    int x;
    float f;
    printf("the value of temp in celsius:");
    scanf("%d",&x);
    f=celsius_to_farhenheit(x);
    printf("the temperature in farenheit after changing from %dcelsius is %f",x,f);

    return 0;
}
float celsius_to_farhenheit(int x)
{
    float f;
    f=x*9/5+32;
    return f;
}
