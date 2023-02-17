#include<stdio.h>
int main()
{
    float a,b;
    float add,div,sub,mul;
    printf("enter the a and b:");
    scanf("%f%f",&a,&b);
    add=a+b;
    sub=a-b;
    mul=a*b;
    div=a/b;
    printf("\naddition=%f",add);
    printf("\nsubstraction=%f",sub);
    printf("\nmultiplition=%f",mul);
    printf("\ndivision=%f",div);
    return 0;
}