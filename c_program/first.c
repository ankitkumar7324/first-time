#include<stdio.h>
int main()
{
    int year;
    int month;
    int week,date;
    printf("hello i am ankit kumar nasriganj rohtas\n");
    printf("enter the year:\n");
    scanf("%d",&year);
    printf("enter the month:\n");
    scanf("%d",&month);
    printf("enter the week:\n");
    scanf("%d",&week);
    printf("enter the date(7-14):\n");
    scanf("%d" ,&date);
    if(month==2)
    {
        if(week==2 || week==3)
        {
    switch(date)
    {
    case 7:
       printf("rose day on 7\n");
       break;
    case 8:
       printf("propose day on 8\n");
       break;
    case 9:
       printf("choclate day\n");
       break;
    case 10:
       printf("teddy day\n");
       break;
    case 11:
       printf("promise day\n");
       break;
    case 12:
       printf("hugg day\n");
       break;
    case 13:
       printf("kiss day\n");
       break;
    case 14:
       printf("valentine's day\n");
       break;
    default :
       printf("not any valentine's week in this date");
       break;
    }
    }
    else
    {
       printf("not any valentine's week in this date");

    }
    }
    else
    {
        printf("not any valentine's week in this date");
    }
return 0;
}