#include<stdio.h>
int main()
{
    int bs,gs,hra,da;
    printf("enter the basic salary:");
    scanf("%d",&bs);
    if(bs<1500)
    {
        hra=bs*10/100;
        da=bs*90/100;
    }
    else
    {
        hra=500;
        da=bs*98/100;
    }
    gs=bs+hra+da;
    printf("gross salary=RS%d",gs);
    return 0;
}