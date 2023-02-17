#include<stdio.h>
int main()
{
    int bonus,cy,yoj,yos;
    printf("enter currrent year and year of joining");
    scanf("%d%d",&cy,&yoj);
    yos=cy-yoj;
    if(yoj>3)
    {
        bonus=2500;
        printf("bonus=rs.%d\n",bonus);
    }
    return 0;
}