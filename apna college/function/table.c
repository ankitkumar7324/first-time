#include<stdio.h>
void table(int n);
int main()
{
    table(10);
    // printf("the table of %d is: = %d",n,p);
    return 0;
}
void table(int n)
{
    int i=1;
    int s=0;
    while(i<=10)
    {
        s=n*i;
        printf("%d * %d = %d\n",n,i,s);
        i=i+1;
    }

}