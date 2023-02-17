#include<stdio.h>
int main()
{
    float cel;
    float far;
    printf("enter the fahrenheit temp: ");
    scanf("%f",&far);
    cel=(far*5)/9-32;
    printf("the temp in celsius is %f",cel);
    return 0;
}