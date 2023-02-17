#include<stdio.h>
int main()
{
    int i,n;
    printf("enter the multiplication of n=");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%dx%d=%d\n",n,i,n*i);
    }
    return 0;
}
