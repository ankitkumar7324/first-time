#include<stdio.h>
int main()
{
    int a,b,c,d,e,sum=0;
    float per;
    printf("enter the marks obtained by a student in five different subject:");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    sum=a+b+c+d+e;
    per=sum*100/500;
    printf("aggregate marks is%d\npercentage marks is%f",sum,per);
    return 0;
}