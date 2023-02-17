#include<stdio.h>
int main()
{
    int day,year,month,days;
     printf("enter the number of day given:");
     scanf("%d",&day);
     year=day/365;
     month=(year*12)+((day%365)/30);
     days=(day-(year*365))%30;
     printf("the no. of year is %d\n",year);
     printf("the no. of month is %d\n",month);
     printf("the no. of days is %d\n",days);
     return 0;
}