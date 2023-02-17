#include<stdio.h>
void printnamste();
void printbanjour();

int main()
{
char country;
printf("enter i for indian and f fir french:");
scanf("%c",&country);
if(country=='i')
{
printnamste();  
} 
else{
printbanjour();
}   
    return 0;
}
void printnamste()
{
    printf("namste aapka swagat hai india me\n");
}
void printbanjour()
{
    printf("banjour aapka swagat hai france me\n");
}